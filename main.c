#include "ft_printf.h"

int main(void)
{
	int n = -113;
	int hex = 15643;
	char c = 'e';
	char *str = "eduardo";

	printf(" %d\n", ft_printf("qualquer coisa| meu "));
	printf(" %d\n", printf("qualquer coisa| std "));

	printf(" %d\n", ft_printf("%-010d| meu ", n));
	printf(" %d\n", printf("%-010d| std " , n));

	printf(" %d\n", ft_printf("%010d| meu ", n));
	printf(" %d\n", printf("%010d| std " , n));

	printf(" %d\n", ft_printf("%10d| meu ", n));
	printf(" %d\n", printf("%10d| std " , n));

	printf(" %d\n", ft_printf("%d| meu ", n));
	printf(" %d\n", printf("%d| std " , n));

	printf(" %d\n", ft_printf("%c| meu ", c));
	printf(" %d\n", printf("%c| std ", c));

	printf(" %d\n", ft_printf("%s| meu ", str));
	printf(" %d\n", printf("%s| std ", str));

	printf(" %d\n", ft_printf("%015i| meu ", n));
	printf(" %d\n", printf("%015i| std ", n));

	printf(" %d\n", ft_printf("%015u| meu ", n));
	printf(" %d\n", printf("%015u| std ", n));

	printf(" %d\n", ft_printf("%020p| meu ", &str));
	printf(" %d\n\n", printf("%020p| std ", &str));

	printf(" %d\n", ft_printf("%-20p| meu ", &str));
	printf(" %d\n\n", printf("%-20p| std ", &str));

	printf(" %d\n", ft_printf("%20p| meu ", &str));
	printf(" %d\n\n", printf("%20p| std ", &str));

	printf(" %d\n", ft_printf("%p| meu ", &str));
	printf(" %d\n\n", printf("%p| std ", &str));

	printf(" %d\n", ft_printf("%015x| meu ", hex));
	printf(" %d\n\n", printf("%015x| std ", hex));

	printf(" %d\n", ft_printf("%015X| meu ", hex));
	printf(" %d\n\n", printf("%015X| std ", hex));

// 	// printf(" %d\n", ft_printf("%%| meu "));
// 	// printf(" %d\n", printf("%%| std "));
// }
