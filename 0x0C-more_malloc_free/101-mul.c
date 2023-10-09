#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(const char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * reverse_string - reverses a string
 * @str: string to be reversed
 */
void reverse_string(char *str)
{
	int len = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * multiply - multiplies two positive numbers represented as strings
 * @s1: first number as a string
 * @s2: second number as a string
 *
 * Return: result as a string
 */
char *multiply(const char *s1, const char *s2)
{
	int len1, len2, len, i, j;
	int *result;
	char *resultStr;
	char *temp1;
	char *temp2;

	if (!is_digit(s1) || !is_digit(s2))
		return ("Error");

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));

	if (!result)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	temp1 = strdup(s1);
	temp2 = strdup(s2);

	if (!temp1 || !temp2)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	reverse_string(temp1);
	reverse_string(temp2);

	for (i = 0; i < len1; i++)
	{
		int carry = 0;

		for (j = 0; j < len2; j++)
		{

			int product = (temp1[i] - '0') * (temp2[j] - '0') + result[i + j] + carry;

			carry = product / 10;
			result[i + j] = product % 10;
		}
		result[i + len2] += carry;
	}

	while (len > 0 && result[len - 1] == 0)
		len--;

	resultStr = malloc(len + 1);

	if (!resultStr)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	for (i = 0; i < len; i++)
		resultStr[i] = result[i] + '0';

	resultStr[len] = '\0';
	free(result);
	free(temp1);
	free(temp2);

	reverse_string(resultStr);

	return (resultStr);
}

int main(int argc, char *argv[])
{
	char *s1, *s2, *result;

	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	s1 = argv[1];
	s2 = argv[2];

	result = multiply(s1, s2);

	printf("%s\n", result);

	free(result);
	return (0);
}

