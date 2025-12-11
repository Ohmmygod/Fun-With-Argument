void	fn_putchar(char c);
void	fn_putstr(char *str);
char	*reverse_string(char *str);
char	*capitalize_word(char *str);
int		fn_strlen(char *str);

static void	copy_str(char *dst, char *src, int len)
{
	int i;

	i = 0;
	while (i <= len)
	{
		dst[i] = src[i];
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fn_putchar('\n');
		return (0);
	}
	int	len;

	len = fn_strlen(argv[1]);
	char	rev_buf[len + 1];
	char	cap_buf[len + 1];
	copy_str(rev_buf, argv[1], len);
	copy_str(cap_buf, argv[1], len);

	fn_putstr(reverse_string(rev_buf));
	fn_putchar('\n');

	fn_putstr(capitalize_word(cap_buf));
	fn_putchar('\n');
	return (0);
}
