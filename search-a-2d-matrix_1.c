bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left = 0, right = matrixSize *(*matrixColSize) - 1, mid, midvalue;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        midvalue = matrix[mid / *matrixColSize][mid % *matrixColSize];
        if (midvalue < target)
        {
            left = mid + 1;
        }
        else if (midvalue > target)
        {
            right = mid - 1;
        }
        else
            return (1);
    }

    return (0);
}
