#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of argument types passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned i, j;
	type_t all[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * print_char - print a char
 * @argsc: char to print
 * Return: void
 */
void print_char(va_list argsc)
{
	printf("%c", va_arg(argsc, int));
}

/**
 * print_int - prints an int
 * @argsi: int to print
 * Return: void
 */
void print_int(va_list argsi)
{
	printf("%d", va_arg(argsi, int));
}

/**
 * print_string - prints a string
 * @argstr: string to print
 * Return: void
 */
void print_string(va_list argstr)
{
	char *str = va_arg(argstr, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_float - prints a float
 * @argsf: float to print
 * Return: void
 */
void print_float(va_list argsf)
{
	printf("%f", va_arg(f, double));
}
