int strStr(char* haystack, char* needle) {
    int i = 0;
    while (haystack[i])
    {
        if (strstr(haystack + i, needle) == &(haystack[i]))
            return (i);
        i++;
    }

    return (-1);
}
