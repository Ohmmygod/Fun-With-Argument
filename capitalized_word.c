char	*capitalize_word(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (new_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - ('a' - 'A');
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + ('a' - 'A');
			}
			new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}
