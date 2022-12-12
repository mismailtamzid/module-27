#include<stdio.h>
int sum_odd_even(int n, int arr[] )
{
    int i, sum1=0, sum2=0, sum=0;
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0 && arr[i-1]%2 == 0)
        {
            sum1+=i+arr[i-1];
        }
        else if(i%2 != 0 && arr[i-1]%2 != 0)
        {
            sum2 += i+arr[i-1];
        }
    }
    sum = sum1+ sum2;
    if(sum>0)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, i, sum1=0, sum2=0, sum;
    scanf("%d", &n);
    int arr[1000];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = sum_odd_even(n, arr);
    printf("%d", ans);
}

