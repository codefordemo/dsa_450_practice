//work only for sorted array
// otherwise first do quicksort

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void spiralMatrix(int arr[3][6], int maxRow, int maxCol)
{
    // int maxCol, maxRow;
    int minRow = 0, minCol = 0;
    int i;
    while (minCol < maxCol && minRow < maxRow)
    {
        // printing first row
        for (int i = minCol; i < maxCol; i++)
        {
            printf("%d  ", arr[minRow][i]);
        }
        minRow++;

        //printing last column
        for (int i = minRow; i < maxRow; i++)
        {
            printf("%d ", arr[i][maxCol-1]);
        }
        maxCol--;

        //printing last row

        if (minRow < maxRow)
        {
            for (int i = maxCol - 1; i > minCol; i--)
            {
                printf("%d ", arr[maxRow - 1][i]);
            }
            maxRow--;
        }

        //printing first column
        if (minCol < maxCol)
        {
            for (int i = maxRow - 1; i > minRow; i--)
            {
                printf("%d ", arr[i][minRow]);
            }
            minCol++;
        }
    }
}

int main()
{

    int r = 3, c = 6;
    int arr[3][6] = {{1, 2, 3, 4, 5, 6},
                     {7, 8, 9, 10, 11, 12},
                     {13, 14, 15, 16, 17, 18}};

    // int arrSize1 = sizeof(arrvv ) / sizeof(arr1[0]);
    spiralMatrix(arr, r, c);
    return 0;
}