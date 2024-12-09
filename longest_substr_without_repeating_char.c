int lengthOfLongestSubstring(char* s) {
    if (!s)
        return (0);
    char tmp[strlen(s) + 1];
    char res = 0;
    int i = 0;
    while (*s)
    {
        i = 0;
        char *ptr = s;
        bzero(tmp, sizeof(tmp));
        while (!strchr(tmp, *ptr))
        {
            tmp[i++] = *ptr++;
        }
        int tmp_len = strlen(tmp);
        if (res < tmp_len)
        {
            res = tmp_len;
        }
        s++;
    }
    return (res);
}
