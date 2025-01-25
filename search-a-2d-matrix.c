bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int rleft = 0, rright = matrixSize - 1, cleft, cright, rmid, cmid;

    while (rleft <= rright)
    {
        rmid = rleft + (rright - rleft) / 2;
        cleft = 0;
        cright = *matrixColSize - 1;
        while (cleft <= cright)
        {
            cmid = cleft + (cright - cleft) / 2;
            if (matrix[rmid][cmid] < target)
            {
                cleft = cmid + 1;
            }
            else if (matrix[rmid][cmid] > target)
            {
                cright = cmid - 1;
            }
            else
                return (1);
        }
        if(matrix[rmid][cmid] < target)
        {
            rleft = rmid + 1;
        }
        else
        {
            rright = rmid - 1;
        }
    }

    return (0);
}
