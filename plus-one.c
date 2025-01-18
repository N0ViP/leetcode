/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int op = 1;
    int *res = (int *) malloc(sizeof(int) * (digitsSize + 1));
    if (!res)
        return (NULL);
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        int tmp = digits[i] + op;
        res[i + 1] = tmp % 10;
        op = tmp / 10;
    }
    if (op == 1)
    {
        res[0] = 1;
        *returnSize = digitsSize + 1;
    }
    else
    {
        for (int i = 0; i < digitsSize; i++)
        {
            res[i] = res[i + 1];
        }
        *returnSize = digitsSize;
    }
    return (res);
}
