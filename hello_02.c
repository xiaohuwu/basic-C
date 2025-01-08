#include <stdio.h>
int main()
{
    int a[] = {1, 2, 4};
    int b[] = {3, 4, 5};
    int *p[] = {a, b};
    int **ptr = p;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", *(*ptr + j));
        }
        printf("\n");
        ptr++;
    }
    return 0;
}