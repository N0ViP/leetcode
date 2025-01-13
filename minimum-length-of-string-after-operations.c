int minimumLength(char* s)
{
    int len = strlen(s);
    int res = 0, i = 0;
    int arr[26] = {0};
    while (s[i])
    {
        arr[s[i++] - 97]++;
    }
    i = 0;
    while (i < 26)
    {
        if (arr[i] % 2 == 0 && arr[i])
            res += 2;
        else if (arr[i] % 2 == 1 && arr[i])
            res += 1;
        i++;
    }
    return (res);
}
