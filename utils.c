#include <unistd.h>

void	fn_putchar(char c)
{
	write(1, &c, 1);
}

void	fn_putstr(char *str)
{
	while (*str)
	{
		fn_putchar(*str);
		str++;
	}
}

int	fn_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
