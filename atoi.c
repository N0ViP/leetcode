int myAtoi(char* s) {
    long res = 0;
    int sign = 1;
    while (*s == ' ' || (*s <= '\r' && *s >= '\t')) //skip whitespaces
        s++;
    sign = (*s == '-') ? -1 : 1;
    s += (*s == '+' || *s == '-');
    while (*s >= '0' && *s <= '9')
    {
        res = (res * 10) + (*s - '0');
        if (res >= 2147483647)
            break;
        s++;
    }
    res *= sign;
    if (res >= 2147483647)
        return (2147483647);
    if (res <= -2147483648)
        return (-2147483648);
    return (res);
}
