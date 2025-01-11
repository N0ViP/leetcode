bool canConstruct(char* s, int k) {
    int alpha[26] = {0};
    int res = 0;
    int s_len = strlen(s);
    if (k == s_len)
        return (1);
    if (s_len < k)
        return (0);
    while (*s)
    {
        alpha[*s++ - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 1)
            res++;
    }
    return (res <= k);
}
