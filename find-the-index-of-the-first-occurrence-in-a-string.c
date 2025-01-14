int strStr(char* haystack, char* needle)
{
    int j = 0;

    for (int i = 0; haystack[i]; i++)
    {
        j = 0;
        while (needle[j] && needle[j] == haystack[i + j])
        {
            j++;
        }
        if (!needle[j])
            return (i);
    }
    return (-1);
}
