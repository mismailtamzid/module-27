#include<stdio.h>
//function 1
int divisible_3(int num)
{
    if(num%3==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//function 2
int divisible_5(int num)
{
    if(num%5==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,sum=0;
    scanf("%d", &n);
    int arr[1000];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(divisible_3(arr[i]) || divisible_5(arr[i]))
        {
            sum++;
        }

    }
    if(sum==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}

