// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 1, n, i, c;
//     printf("enter number = ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {

//         printf("\t%d", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i, j,k;
//     for (i = 1; i <= 5; i++)
//     {
//         for (k = 1; k <= i; k--)
//         {
//             printf(" ");
//         }

//         for (j = 1; j <= i; j++)
//             printf("%d", i);
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int i, j, spc, rows, k;
//     printf("Input number of rows : ");
//     scanf("%d", &rows);
//     spc = rows + 4 - 1;
//     for (i = 1; i <= rows; i++)
//     {
//         for (k = spc; k >= 1; k--)
//         {
//             printf(" ");
//         }

//         for (j = 1; j <= i; j++)
//             printf("%d ", i);
//         printf("\n");
//         spc--;
//     }
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 8; // size
    int i, j, k;

    for (i = 1; i <= n; i++)

    {
        for (j = n - 1; j >= i; j--)

        {
            printf(" ");
        }

        for (k = i - 1; k >= -(i - 1); k--)

        {
            printf("%d", i - abs(k));
        }
        printf("\n");
    }
    return 0;
}