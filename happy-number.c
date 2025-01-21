int calcul(int n)
{
    int res = 0;
    int tmp = 0;
    while (n)
    {
        tmp = n % 10;
        res += tmp * tmp;
        n /= 10;
    }

    return (res);
}

bool isHappy(int n) {
    int fast = n, slow = n;

    do
    {
        slow = calcul(slow);
        fast = calcul(calcul(fast));
        if (slow == 1)
            return (1);
    } while (slow != fast);

    return (0);
}
