#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)
    {

        for (int y = 5 - row; y >= 1; y--)
        {
            printf(" ");
        }

        for (int col = row; col >= 1; col--)
        {

            printf("%d", col);
        }

        printf("\n");
    }
}

//     1
//    21
//   321
//  4321
// 54321