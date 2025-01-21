bool canConstruct(char* ransomNote, char* magazine) {
    int alpha[26] = {0};

    for (int i = 0; magazine[i]; i++)
    {
        alpha[magazine[i] - 'a']++;
    }

    for (int i = 0; ransomNote[i]; i++)
    {
        if (alpha[ransomNote[i] - 'a'] > 0)
            alpha[ransomNote[i] - 'a']--;
        else
            return (0);
    }
    return (1);

}
