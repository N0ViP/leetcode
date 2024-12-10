bool ft_check_palindromic_substr(char *s, int start, int end)
{
    while (start < end)
    {
        if (s[start++] != s[end--])
            return (0);
    }
    return (1);
}

char *ft_substr(char *str, int start, int len)
{
	int i = 0;
	char *res = (char *) malloc((len - start) + 1);
	if (!res)
		return (NULL);
	while (start < len)
	{
		res[i++] = str[start++];
	}
	res[i] = '\0';
	return (res);
}

char* longestPalindrome(char* s) {
    int start = 0;
    int end = 0;
	char *res;
    for(int i = 0; s[i]; i++)
    {
        for(int j = 1; s[j]; j++)
        {
            if (ft_check_palindromic_substr(s, i, j) && (end - start <= j - i))
            {
                start = i;
                end = j;
            }
        }
    }
    res = ft_substr(s, start, end + 1);
    return (res);
}
