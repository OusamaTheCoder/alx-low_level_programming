#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * f4_custom - finds the biggest number in the username
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4_custom(char *usrn, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5_custom - multiplies each character of the username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied character
 */
int f5_custom(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6_custom - generates a random character
 *
 * @usrn: username
 * Return: a random character
 */
int f6_custom(char *usrn)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * generate_key - Generates a valid key for the given username.
 *
 * @username: The username for which the key is generated.
 */
void generate_key(char *username)
{
	char keygen[7];
	int username_len, sum, i;

	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};

	username_len = strlen(username);

	keygen[0] = ((char *)alph)[(username_len ^ 59) & 63];

	sum = 0;
	for (i = 0; i < username_len; i++)
		sum += username[i];

	keygen[1] = ((char *)alph)[(sum ^ 79) & 63];

	sum = 1;
	for (i = 0; i < username_len; i++)
		sum *= username[i];

	keygen[2] = ((char *)alph)[(sum ^ 85) & 63];
	keygen[3] = ((char *)alph)[f4_custom(username, username_len)];
	keygen[4] = ((char *)alph)[f5_custom(username, username_len)];
	keygen[5] = ((char *)alph)[f6_custom(username)];
	keygen[6] = '\0';

	printf("%s\n", keygen);
}

/**
 * main - Entry point of the keygen program
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Exit status of the program
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}

	generate_key(argv[1]);

	return (0);
}
