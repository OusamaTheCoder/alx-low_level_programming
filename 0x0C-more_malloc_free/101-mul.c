#define _POSIX_C_SOURCE 200809L
#include "main.h"
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
 * calculate_product - calculates the product of two reversed numbers
 * @s1: first reversed number as a string
 * @s2: second reversed number as a string
 * @result: array to store the result
 *
 * This function calculates the product of two reversed numbers represented as
 * strings and stores the result in the 'result' array.
 */
void calculate_product(const char *s1, const char *s2, int *result)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	for (int i = 0; i < len1; i++)
	{
		int carry = 0;

		for (int j = 0; j < len2; j++)
		{
			int product = (s1[i] - '0') * (s2[j] - '0') + result[i + j] + carry;

			carry = product / 10;
			result[i + j] = product % 10;
		}
		result[i + len2] += carry;
	}
}

/**
 * create_result_string - creates a string from the result array
 * @result: array storing the result
 * @len: length of the result array
 *
 * This function creates a string from the 'result' array and returns it.
 * The 'len' parameter indicates the length of the result array.
 *
 * Return: A dynamically allocated string containing the result.
 *         The caller is responsible for freeing the memory.
 */
char *create_result_string(const int *result, int len)
{
	while (len > 0 && result[len - 1] == 0)
		len--;

	char *resultStr = malloc(len + 1);

	if (!resultStr)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	for (int i = 0; i < len; i++)
		resultStr[i] = result[i] + '0';

	resultStr[len] = '\0';
	reverse_string(resultStr);

	return (resultStr);
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
	if (!is_digit(s1) || !is_digit(s2))
		return ("Error");

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));

	if (!result)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	char *temp1 = strdup(s1);
	char *temp2 = strdup(s2);

	if (!temp1 || !temp2)
	{
		perror("Memory allocation failed");
		exit(1);
	}

	reverse_string(temp1);
	reverse_string(temp2);

	calculate_product(temp1, temp2, result);

	char *resultStr = create_result_string(result, len);

	free(result);
	free(temp1);
	free(temp2);

	return (resultStr);
}

