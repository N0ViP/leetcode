char* longestCommonPrefix(char** strs, int strsSize)
{
    int i = 0;
    char *ptr = strs[i++];
    while (i < strsSize)
    {
        while (strstr(strs[i], ptr) != strs[i])
            ptr[strlen(ptr) - 1] = '\0';
        if (!*ptr)
            return ("");
        i++;
    }
    return (ptr);
}
