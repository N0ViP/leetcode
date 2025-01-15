int lengthOfLastWord(char* s) {
    int res = 0;
    int len = strlen(s) - 1;

    while (len >= 0 && s[len] == ' ')
        len--;
    while (len >= 0 && s[len] != ' ')
    {
        len--;
        res++;
    }
    
    return (res);
}
