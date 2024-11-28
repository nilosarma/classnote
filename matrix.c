#include <stdio.h>
struct matrix
{
    int a[10][10];
    int r;
    int c;
};
void read_matrix(struct matrix *x)
{
    int i, j;
    printf("input dimension");
    scanf("%d%d", &x->r, &x->c);
    printf("Input elements of the matrix");
    for (i = 0; i < x->r; i++)
        for (j = 0; j < x->c; j++)
            scanf("%d", &x->a[i][j]);
}
void print_matrix(struct matrix *x)
{
    int i, j;
    printf("\nElements of the matrix are:\n");
    for (i = 0; i < x->r; i++)
    {
        for (j = 0; j < x->c; j++)
            printf(" %d ", x->a[i][j]);
        printf("\n");
    }
}
void matrix_multiply(struct matrix *x, struct matrix *y, struct matrix *Z)
{
    int i, j, k;
    if (x->c == y->r)
    {
        Z->r = x->r;
        Z->c = y->c;
        for (i = 0; i < x->r; i++)
            for (j = 0; j < y->c; k++)
            {
                Z->a[i][j] = 0;
                for (k = 0; k < x->c; k++)
                    Z->a[i][j] = x->a[i][j] + x->a[i][j] * y->a[k][j];
            }
    }
    else
    {
        Z->r = Z->c = 0;
    }
}
void matrix_add(struct matrix *x, struct matrix *y, struct matrix *Z)
{
    int i, j;
    if (x->r == y->r && x->c == y->c)
    {
        Z->r = x->r;
        Z->c = x->c;
        for (i = 0; i < x->r; i++)
            for (j = 0; j < x->c; j++)
                Z->a[i][j] = x->a[i][j] + y->a[i][j];
    }

    else
    {
        Z->r = Z->c = 0;
    }
}
int main()
{
    struct matrix x, y, Z;
    read_matrix(&x);
    read_matrix(&y);
    matrix_multiply(&x, &y, &Z);
    print_matrix(&x);
    print_matrix(&y);
    print_matrix(&Z);
    return 0;
}
