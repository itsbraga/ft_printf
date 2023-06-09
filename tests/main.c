#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"

int main(void)
{
	char *s;
	void *ptr;
	void *nullptr;

	s = NULL;
	ptr = &s;
	nullptr = NULL;

	// dumb check
	printf("Idiot check NULL\n");
	// printf("printf_ret p=%d\n", printf(NULL));
	printf("ft_printf_ret p=%d\n", ft_printf(NULL));

	// c
	printf("PRINTING percent c\n");
	printf("printf_ret p=%d\n", printf("%c ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%c ", 0));
	printf("printf_ret p=%d\n", printf("%c ", 'b'));
	printf("ft_printf_ret p=%d\n", ft_printf("%c ", 'b'));
	printf("============================================================================\n");
	// s
	printf("PRINTING percent s\n");
	printf("printf_ret p=%d\n", printf("%s ", "string1"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", "string1"));
	printf("printf_ret p=%d\n", printf("%s ", nullptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", nullptr));
	printf("printf_ret p=%d\n", printf("%s ", "😀😀😀😀"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", "😀😀😀😀"));
	printf("printf_ret p=%d\n", printf("%s ",
									   "QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ",
											 "QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("============================================================================\n");
	// p
	printf("PRINTING percent p\n");
	printf("printf_ret p=%d\n", printf("%p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", ptr));
	printf("printf_ret p=%d\n", printf("%p ", nullptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", nullptr));
	printf("printf_ret p=%d\n", printf("%p ", NULL));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", NULL));
	printf("printf_ret p=%d\n", printf("%p ", (void *)16));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", (void *)16));
	printf("printf_ret p=%d\n", printf("%p ", (void *)LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", (void *)LONG_MIN));
	printf("============================================================================\n");
	// d
	printf("PRINTING percent d\n");
	printf("printf_ret p=%d\n", printf("%d ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", 42));
	printf("printf_ret p=%d\n", printf("%d ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", -42));
	printf("printf_ret p=%d\n", printf("%d ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%d ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%d ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", -1));
	printf("printf_ret p=%d\n", printf("%d ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", 0));
		printf("printf_ret p=%d\n", printf("%d ", NULL));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", NULL));
	printf("printf_ret p=%d\n", printf("%d ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%d ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%d ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%d ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", ULONG_MAX));
	printf("============================================================================\n");
	// i
	printf("PRINTING percent i\n");
	printf("printf_ret p=%d\n", printf("%i ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", 42));
	printf("printf_ret p=%d\n", printf("%i ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", -42));
	printf("printf_ret p=%d\n", printf("%i ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%i ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%i ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", -1));
	printf("printf_ret p=%d\n", printf("%i ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", 0));
		printf("printf_ret p=%d\n", printf("%i ", NULL));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", NULL));
	printf("printf_ret p=%d\n", printf("%i ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%i ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%i ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%i ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", ULONG_MAX));
	printf("============================================================================\n");
	// x
	printf("PRINTING percent x\n");
	printf("printf_ret p=%d\n", printf("%x ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", 42));
	printf("printf_ret p=%d\n", printf("%x ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", -42));
	printf("printf_ret p=%d\n", printf("%x ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%x ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", -1));
	printf("printf_ret p=%d\n", printf("%x ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", 0));
		printf("printf_ret p=%d\n", printf("%x ", NULL));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", NULL));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%x ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", ULONG_MAX));
	printf("============================================================================\n");
	// X
	printf("PRINTING percent X\n");
	printf("printf_ret p=%d\n", printf("%X ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", 42));
	printf("printf_ret p=%d\n", printf("%X ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", -42));
	printf("printf_ret p=%d\n", printf("%X ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%X ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%X ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", -1));
	printf("printf_ret p=%d\n", printf("%X ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", 0));
		printf("printf_ret p=%d\n", printf("%X ", NULL));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", NULL));
	printf("printf_ret p=%d\n", printf("%X ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%X ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%X ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%X ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", ULONG_MAX));
	printf("============================================================================\n");
	return (0);
}