#include<stdio.h>
int main(){
int n, i, j, x, ans, y, sum;
scanf("%d", &n);
 x=0, ans=0;
for(i=1; i<=n; i++){
        sum=0;
    for(y=1,j=i; j<=n && y<=3; y++, j++){
        sum+=j;
    }
    i+=2; x++;
    if(x%2==0){
        ans-=sum;
        }
        else{
            ans+=sum;
        }
}
printf("%d\n", ans);

return 0;
}
