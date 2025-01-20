int maxProfit(int* prices, int pricesSize) {
    int min = prices[0], res = 0, tmp;

    for (int i = 1; i < pricesSize; i++)
    {
        if (min > prices[i])
            min = prices[i];
        tmp = prices[i] - min;
        if (res < tmp)
            res = tmp;
    }

    return (res);
}
