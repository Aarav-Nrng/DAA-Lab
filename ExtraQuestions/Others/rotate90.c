    #include <stdio.h>

    int main()
    {
        int n;
        printf("Enter the size of matrix: ");
        scanf("%d", &n);
        int matrix[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j] = (i*n)+j+1;
            }
        }
        printf("BEFORE ROTATION:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%02d ",matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        int rotationsCount = 0;
        int row=0;
        int innerBound = 0;
        int col=n-1;
        int outerBound = n-1;
        while (rotationsCount < n*n)
        {
            if(row >= outerBound || col <= innerBound)
            {
                innerBound++;
                outerBound--;
                row = innerBound;
                col = outerBound;
            }
            if(innerBound==outerBound)
            {   
                //central element
                break;
            }
            // 4 swaps per iteration
            int temp = matrix[innerBound][row]; //temp <- a

            matrix[innerBound][row] = matrix[col][innerBound]; //a <- d

            matrix[col][innerBound] = matrix[outerBound][col]; // d <- c

            matrix[outerBound][col] = matrix[row][outerBound];    // c <- b

            matrix[row][outerBound] = temp;  // b <- temp
            row++;
            col--;
            rotationsCount = rotationsCount+4;
        }
        printf("AFTER ROTATION:\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%02d ",matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        return 0;
    }

    /*
    01 02 03 04     13 09 05 01
    05 06 07 08     14 10 06 02
    09 10 11 12     15 11 07 03
    13 14 15 16     16 12 08 04

    00 01 02 03     30 20 10 00
    10 11 12 13     31 21 11 01
    20 21 22 23     32 22 21 02
    30 31 32 33     33 23 13 03

    _d ->  a ->  b ->  c ->  d
    30 -> 00 -> 03 -> 33 -> 30
    20 -> 01 -> 13 -> 32 -> 20
    10 -> 02 -> 23 -> 31 -> 10
    21 -> 11 -> 12 -> 22 -> 21
    */
