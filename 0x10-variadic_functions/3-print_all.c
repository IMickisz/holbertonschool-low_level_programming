#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_char(va_list args);
void print_int(va_list args);
void print_string(va_list args);
void print_float(va_list args);
/**
 * print_all - function that prints anything
 * @format: list of argument types passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	type_t all[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(all[j]).t)
			{
				printf("%s", separator);
				all[j].f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

/**
 * print_char - print a char
 * @args: char to print
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: int to print
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: string to print
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_float - prints a float
 * @args: float to print
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
