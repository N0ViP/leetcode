int ft_count(char *str, int len, char padding)
{
    int i = 0, res = 0;
    while (i < len)
    {
        if (str[i] == padding)
            res++;
        i++;
    }
    return (res);
}

int maxScore(char* s) {
    if (!s || !*s)
        return (0);
    int res = 0, tmp = 0, start, end;
    int len = strlen(s);
    start = 1;
    end = len - 1;
    while (end >= 1)
    {
        tmp = ft_count(s, start, '0') + ft_count(s + start, end, '1');
        if (res < tmp)
            res = tmp;
        if (res == len)
            return (res);
        end--;
        start++;
    }
    return (res);
}
