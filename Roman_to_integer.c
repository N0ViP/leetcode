int romanToInt(char* s) {
    int res = 0;
    while (*s)
    {
        if (*s == 'I')
        {
            if (*(s + 1) == 'V')
            {
                s++;
                res += 4;
            }
            else if (*(s + 1) == 'X')
            {
                s++;
                res += 9;
            }
            else
                res += 1;
        }
        else if (*s == 'V')
            res += 5;
        else if (*s == 'X')
        {
            if (*(s + 1) == 'L')
            {
                s++;
                res += 40;
            }
            else if (*(s + 1) == 'C')
            {
                s++;
                res += 90;
            }
            else
                res += 10;
        }
        else if (*s == 'L')
            res += 50;
        else if (*s == 'C')
        {
            if (*(s + 1) == 'D')
            {
                s++;
                res += 400;
            }
            else if (*(s + 1) == 'M')
            {
                s++;
                res += 900;
            }
            else
                res += 100;
        }
        else if (*s == 'D')
            res += 500;
        else if (*s == 'M')
            res += 1000;
        else
            return (0);
        s++;
    }
    return (res);
}
