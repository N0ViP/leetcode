bool isAnagram(char* s, char* t) {

    int s_map[26];
    int t_map[26];

    while (*s && *t)
    {
        s_map[*s++ - 'a']++;
        t_map[*t++ - 'a']++;
    }
    if (*s || *t)
        return (0);

    for (int i = 0; i < 26; i++)
    {
        if (t_map[i] != s_map[i])
            return (0);
    }

    return (1);

}
