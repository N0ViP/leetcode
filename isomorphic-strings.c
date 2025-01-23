bool isIsomorphic(char* s, char* t) {
    int len = strlen(s);
    int s_map[256] = {0};
    int t_map[256] = {0};

    for (int i = 0; i < len; i++)
    {
        if (s_map[s[i]] != t_map[t[i]])
            return (false);
        s_map[s[i]] = i + 1;
        t_map[t[i]] = i + 1;
        
    }

    return (true);
    
}
