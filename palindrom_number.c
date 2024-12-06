int ft_numlen(int x)
{
    int i = 1;
    while (x / 10)
    {
        x /= 10;
        i++;
    }
    return (i);
}

void ft_itoa(int x, char *res, int numlen)
{
    while (x)
    {
        res[numlen--] = (x % 10) + 48;
        x /= 10;
    }
}

bool isPalindrome(int x) {
    if (x < 0)
        return (0);
    int numlen = ft_numlen(x);
    if (numlen == 1)
        return (1);
    char *tmp = malloc(numlen);
    if (!tmp)
        return (0);
    ft_itoa(x, tmp, --numlen);
    int i = 0;
    while (i < numlen)
    {
        if (tmp[i++] != tmp[numlen--])
            return (0);
    }
    return (1);
}
