#include<stdio.h>
int prime(int num);
int positive_int(int arr[], int n);

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int count=0;
    int isprime=0;
    for(i=0; i<n; i++){
        scanf("%d", (arr+i));
    }
    for(i=0; i<n; i++)
    {
        isprime=prime(arr[i]);
        if(isprime==1)
        {
            count++;
        }
    }
    printf("Prime numbers: %d\n", count);
    int poistive = positive_int(arr, n);
    return 0;
}
//first function
int prime(int num)
{
    if(num <= 1)
    {
        return 0;
    }

    for(int j=2; j<=num/2; j++)
    {
        if (num%j == 0 && num != 2 )
        {
            return 0;
        }
    }
        return 1;
}
//second function
int positive_int(int arr[], int n){
   int i, sum=0, total_positive=0;
   float average;
   for(i=0; i<n; i++){
    if(arr[i]%2 == 0){
        sum+=arr[i];
        total_positive++;
    }
   }
   average = sum/total_positive;
   printf("Average of all positive integers: %.2f \n", average);
}
