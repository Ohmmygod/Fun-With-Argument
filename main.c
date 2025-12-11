void	fn_putchar(char c);
void	fn_putstr(char *str);
char	*reverse_string(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fn_putchar('\n');
		return (0);
	}
	fn_putstr(reverse_string(argv[1]));
	fn_putchar('\n');

	
	return (0);
}