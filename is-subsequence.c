bool isSubsequence(char* s, char* t) {
    while (*s)
    {
        while (*t && *t != *s)
        {
            t++;
        }
        if (!*t)
            return (0);
        t++;
        s++;
    }

    return (1);
}
