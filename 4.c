#include<stdio.h>
int even_numbers(int n)
{
    int i;
    int number= n-12;
    int first = number/4;
    for(i=0; i<=6; i=i+2)
    {
        printf("%d ", first+i);
    }
}

int main()
{
    int j,i, n, t;
    scanf("%d", &t);
    for(j=1; j<=t; j++)
    {
        scanf("%d", &n);
        even_numbers(n);
        printf("\n");
    }
    return 0;
}
