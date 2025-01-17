int minimizeXor(int num1, int num2) {
    int bits1 = __builtin_popcount(num1);
    int bits2 = __builtin_popcount(num2);
    int res = num1;

    int tmp = bits1 - bits2;

    if (tmp < 0)
    {
        for (int i = 0; i < 32 && tmp; i++)
        {
            if (((res >> i) & 1) == 0)
            {
                tmp++;
                res |= (1 << i);
            }
        }
    }
    else if (tmp > 0)
    {
        for (int i = 0; i < 32 && tmp; i++)
        {
            if ((res >> i) & 1)
            {
                tmp--;
                res &= ~(1 << i);
            }
        }
    }

    return (res);
}
