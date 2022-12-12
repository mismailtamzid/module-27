#include<stdio.h>
void swap(int arr[], int* index, int* updateIndex){
    int temp;
  temp = arr[*index];
    arr[*index]= arr[*updateIndex];
    arr[*updateIndex] = temp;
}

int main(){
int i, n, q, j, index, updateIndex;
scanf("%d", &n);
int arr[n+1];
for(i=1; i<=n; i++){
    scanf("%d", (arr+i));
}
scanf("%d", &q);
for(i=1; i<=q; i++){
  scanf("%d%d", &index, &updateIndex);
  swap(arr, &index, &updateIndex);
}
for(i=1; i<=n; i++){
 printf("%d ", arr[i]);
}
return 0;
}
