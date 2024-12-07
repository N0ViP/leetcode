double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double res = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int *tmp = malloc(sizeof(int) * (nums1Size + nums2Size));
    while ((i < nums1Size) && (j < nums2Size))
    {
        if (nums1[i] < nums2[j])
            tmp[k++] = nums1[i++];
        else
            tmp[k++] = nums2[j++];
    }
    while (i < nums1Size)
    {
        tmp[k++] = nums1[i++];
    }
    while (j < nums2Size)
    {
        tmp[k++] = nums2[j++];
    }
    int s = nums1Size + nums2Size;
    if (!(s % 2))
    {
        res = (tmp[(s / 2)] + tmp[(s / 2) - 1]) / 2.0;
    }
    else
    {
        res = tmp[(s / 2)];
    }
    free(tmp);
    return (res);
}
