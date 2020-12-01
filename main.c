#include <stdio.h>
#include <stdlib.h>

int kvadrat(n)
{
    int i, j;
    for (i = 1; i <= n; i++)
        printf("*");
    printf("\n");
    for (i=1; i<= n-2; i ++)
    {
        printf("*");
        for (j = 1; j<=n-2; j++)
            printf(" ");
        printf("*\n");
    }
    if (n != 1)
    {
        for (i = 1; i <= n; i++)
            printf("*");
    }


    return 0;
}

int zd1()
{
    int n;
    printf("vvedite N\n");
    scanf("%d", &n);
    kvadrat(n);

    return 0;
}


int ramka(m, n, d)
{
    int i, j;

    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= m; j++)
            printf("*");
        printf("\n");
    }

    for (i = 1; i <= n - 2*d; i++)
    {
        for (j = 1; j <= d; j++)
            printf("*");

        for (j = 1; j <= m-2*d; j++)
            printf(" ");

        for (j = 1; j <= d; j++)
            printf("*");
        printf("\n");
    }

    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= m; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

int zd2()
{
    int m, n, d;
    printf("vvedite dlinu\n");
    scanf("%d", &m);
    printf("vvedite shirinu\n");
    scanf("%d", &n);
    printf("vvedite tolshinu\n");
    scanf("%d", &d);
    ramka(m, n, d);

    return 0;
}


int krug(n)
{
    int x0, y0, i, j;
    x0 = 0;
    y0 = 0;
    for (i = -n; i <= n; i++)
    {
        for (j = -n; j <= n; j++)
        {
            if ((i - x0)*(i - x0) + (j - y0)*(j - y0) <= n*n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

int zd3()
{
    int n;
    printf("vvedite R\n");
    scanf("%d", &n);
    krug(n);

    return 0;
}


int opred(n)
{
    int i;
    i = 1;
    while (n > 9)
    {
        n /= 10;
        i += 1;
    }
    printf("%d", i);

    return 0;
}

int zd4()
{
    int n;
    printf("vvedite chislo\n");
    scanf("%d", &n);
    opred(n);

    return 0;
}


int sum(int *a, int *b, int c, int d)
{
    int x, y, i, nod;
    x = *a*d + *b*c;
    y = *b*d;
    for (i = 1; i <= (abs(x - y) + x + y)/2; i++)
    {
        if ((x % i == 0) && (y % i == 0))
            nod = i;
    }
    *a = x/nod;
    *b = y/nod;

    return 0;
}

int zd6()
{
    int a, b, c, d;
    printf("vvedite pervuyu drob");
    scanf("%d%d", &a, &b);
    printf("vvedite vtoruyu drob");
    scanf("%d%d", &c, &d);
    sum(&a, &b, c, d);
    printf("%d/%d", a, b);

    return 0;
}

int step(a, b)
{
    int i, j, x;
    i = 0;
    while(1 == 1)
    {
        x = 1;
        for (j = 1; j <= b; j++)
            x *= i;
        if (x == a)
        {
            printf("%d", i);
            return 0;
        }

        if (x > a)
        {
            printf("net takogo");
            return 0;
        }
        i++;
    }

    return 0;
}

int zd7()
{
    int a, b;
    printf("vvedite oba chisla\n");
    scanf("%d%d", &a, &b);
    step(a, b);

    return 0;
}

int main()
{
    //zd1();
    //zd2();
    //zd3();
    //zd4();
    //zd6();
    //zd7();

    return 0;
}
