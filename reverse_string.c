int	fn_strlen(char *str);

void	*reverse_string(char *str)
{
	int	len;
	int	i;
	char	temp;

	len = fn_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
}