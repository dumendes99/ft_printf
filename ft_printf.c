#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_flags	s_flags;

	init_struct(&s_flags);
	va_start(args, str);
	while (str[s_flags.index] != '\0')
	{
		if (str[s_flags.index] == '%')
		{
			s_flags.index++;
			//check flags before calling the converter;
			ft_check_sign((char *)str, &s_flags);
			ft_check_width((char *)str, &s_flags, args);
			ft_parse_args((char *)str, &s_flags, args);
		}
		else
			ft_putchar_fd(str[s_flags.index], 1, &s_flags);
		s_flags.index++;
	}
	va_end(args);
	return (s_flags.size);
}
