bool isValid(char* s) {
    char tmp[strlen(s)];
    char c;
    char c_check;
    int check = -1;
    while (*s)
    {
        c = *s;
        if (c == '(' || c == '{' || c == '[')
            tmp[++check] = c;
        else
        {
            if (check == -1)
                return (0);
            c_check = tmp[check--];
            if (c_check == '(' && c != ')' ||
                c_check == '{' && c != '}' ||
                c_check == '[' && c != ']')
                return (0);
        }
        s++;
    }
    return (check == -1);
}
