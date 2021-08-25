#include <stdio.h>
int main()
{
    int user1[3][3], user2[3][3], ans[3][3], i, j, k;
    printf("enter the first matrix element=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &user1[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &user2[i][j]);
        }
    }

    printf("multiplication of the matrix=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            ans[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                ans[i][j] += user1[i][k] * user2[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}