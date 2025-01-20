bool isPalindrome(char* s) {
    int end = strlen(s) - 1;
    int start = 0;

    while (start < end)
    {
        while (!isalnum(s[start]) && start < end)
            start++;
        while (!isalnum(s[end]) && start < end)
            end--;
        if (start > end)
            return (0);
        if (s[start] >= 65 && s[start] <= 90)
            s[start] += 32;
        if (s[end] >= 65 && s[end] <= 90)
            s[end] += 32;
        if (s[start] != s[end])
            return (0);
        end--;
        start++;
    }

    return (1);
}
