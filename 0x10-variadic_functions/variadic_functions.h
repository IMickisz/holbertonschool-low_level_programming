#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
/**
 * struct print - print type with corresponding print function
 * @t: format to print type
 * @f: function that print
 */
typedef struct type_t
{
	char *t;
	void (*f)();
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
