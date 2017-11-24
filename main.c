#include "libft.h"

int	main(int a, char **v)
{
	ft_putstr("#################################\n");
	ft_putstr("## Welcome in 42 libft checker ##\n");
	ft_putstr("#################################\n\n");
	ft_putstr("## Test memset:\n");
	ft_putstr("## Test strlen:\n");
	ft_putstr("--- Test 1: ft_strlen(\"0\") = "); ft_putnbr(ft_strlen("0"));
	ft_putstr("\n--- Test 2: ft_strlen(\"Hello\") = "); ft_putnbr(ft_strlen("Hello"));
	ft_putstr("\n--- Test 3: ft_strlen(\"0123456789\") = "); ft_putnbr(ft_strlen("0123456789"));
    ft_putstr("\n## Test isdigit:\n");
    ft_putstr("--- Test 1: ft_isdigit('0') = "); ft_putnbr(ft_isdigit('0'));
    ft_putstr("\n--- Test 2: ft_isdigit('z') = "); ft_putnbr(ft_isdigit('z'));
    ft_putstr("\n--- Test 3: ft_isdigit('#') = "); ft_putnbr(ft_isdigit('#'));
    ft_putstr("\n## Test isalpha:\n");
    ft_putstr("--- Test 1: ft_isalpha('0') = "); ft_putnbr(ft_isalpha('0'));
    ft_putstr("\n--- Test 2: ft_isalpha('z') = "); ft_putnbr(ft_isalpha('z'));
    ft_putstr("\n--- Test 3: ft_isalpha('#') = "); ft_putnbr(ft_isalpha('#'));
    ft_putstr("\n## Test isalnum:\n");
    ft_putstr("--- Test 1: ft_isalnum('0') = "); ft_putnbr(ft_isalnum('0'));
    ft_putstr("\n--- Test 2: ft_isalnum('z') = "); ft_putnbr(ft_isalnum('z'));
    ft_putstr("\n--- Test 3: ft_isalnum('#') = "); ft_putnbr(ft_isalnum('#'));
	ft_putstr("\n## Test isprint:\n");
	ft_putstr("--- Test 1: ft_isprint('0') = "); ft_putnbr(ft_isprint('0'));
	ft_putstr("\n--- Test 2: ft_isprint('z') = "); ft_putnbr(ft_isprint('z'));
	ft_putstr("\n--- Test 3: ft_isprint('#') = "); ft_putnbr(ft_isprint('#'));
    ft_putstr("\n## Test isascii:\n");
	ft_putstr("--- Test 1: ft_isascii('0') = "); ft_putnbr(ft_isascii('0'));
	ft_putstr("\n--- Test 2: ft_isascii('z') = "); ft_putnbr(ft_isascii('z'));
	ft_putstr("\n--- Test 3: ft_isascii('#') = "); ft_putnbr(ft_isascii('#'));
    ft_putstr("\n## Test tolower:\n");
	ft_putstr("--- Test 1: ft_tolower('0') = "); ft_putchar(ft_tolower('0'));
	ft_putstr("\n--- Test 2: ft_tolower('z') = "); ft_putchar(ft_tolower('z'));
	ft_putstr("\n--- Test 2: ft_tolower('A') = "); ft_putchar(ft_tolower('A'));
	ft_putstr("\n--- Test 3: ft_tolower('#') = "); ft_putchar(ft_tolower('#'));
    ft_putstr("\n## Test toupper:\n");
	ft_putstr("--- Test 1: ft_toupper('0') = "); ft_putchar(ft_toupper('0'));
	ft_putstr("\n--- Test 2: ft_toupper('z') = "); ft_putchar(ft_toupper('z'));
	ft_putstr("\n--- Test 2: ft_toupper('A') = "); ft_putchar(ft_toupper('A'));
	ft_putstr("\n--- Test 3: ft_toupper('#') = "); ft_putchar(ft_toupper('#'));

	return (0);
}
