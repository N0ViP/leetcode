int ft_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int reverse(int x){
    long res = 0;
    int tmp = x;
    while (tmp)
    {
        res = (res * 10) + ft_abs(tmp % 10);
        tmp /= 10;
        if (res > 2147483647)
            return (0);
    }
    if (x < 0)
        res *= -1;
    return ((int) res);

}
