#include <stdio.h>

void printmatrik(int a[3][3]);
int main()
{
    int matriks[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Input baris %d : kolom %d = ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("Matrik 3x3 =\n");
    printmatrik(matriks);

    return 0;
}

void printmatrik(int a[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
