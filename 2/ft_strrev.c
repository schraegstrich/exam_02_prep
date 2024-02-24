
char *ft_strrev(char *str)
{
	int len;
	int i;
	char temp;
	len = 0;
	i = -1;

	while(str[len])
		len++;
	while (++i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i ];
		str[len - 1 - i ] = temp;
	}
	return (str);
}