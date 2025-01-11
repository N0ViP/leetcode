int maxArea(int* height, int heightSize) {
    int max = 0, tmp = 0, i = 0, j = heightSize - 1;

    while (i < j)
    {
        if (height[i] < height[j])
        {
            tmp = height[i] * (j - i);
            i++;
        }
        else
        {
            tmp = height[j] * (j - i);
            j--;
        }
        if (tmp > max)
            max = tmp;
    }
    return (max);
}
