#include<stdio.h>
#include<string.h>
int total_strings(char str[]){
int i, j, temp;
for(i=0; str[i]!='\0'; i++){
  for(j=i+1; str[j]!='\0'; j++){
     if(str[i]< str[j]){
    temp=str[i];
    str[i]= str[j];
    str[j]=temp;
  }
  }
}
printf("%s", str);
}

int main(){
int i;
char str[100];
scanf("%s", &str);
total_strings(str);
return 0;
}
