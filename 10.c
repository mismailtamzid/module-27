#include<stdio.h>
int check_7(int num){
    int i;
    for(i=0; num !=0; i++){
    int divisor = num/10;
   int reminder = num%10;
     num = divisor;
    if(reminder== 7){
        return 1;
    }
    }
   return 0;
}
int main(){
int i, n, sum=0;
scanf("%d", &n);
int arr[n];
for(i=0; i<n; i++){
    scanf("%d", (arr+i));
}
for(i=0; i<n; i++){

   if(check_7(arr[i])){
    sum++;
   }
}
if(sum>=(n/2)){
    printf("Beautiful");
}
else{
    printf("Ugly");
}
return 0;
}
