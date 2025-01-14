/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int *res = (int *) malloc(sizeof(int) * ASize);
    if (!res)
        return (NULL);
    int count, j, k;
    for (int i = 0; i < ASize; i++)
    {
        count = 0;
        j = i;
        while (j >= 0)
        {
            k = i;
            while (k >= 0)
            {
                if (A[j] == B[k])
                {
                    count++;
                    break ;
                }
                k--;
            }
            j--;
        }
        res[i] = count;
    }
    *returnSize = ASize;
    return (res);
}
