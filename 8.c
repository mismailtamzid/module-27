#include<stdio.h>
#include<string.h>

int str_print(char str[])
{
    int i;
    for(i=0; i <strlen(str) ; i++)
    {
        printf("%c", str[i]);
        if(i%2 != 0)
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    int i;
    char str[100];
    scanf("%s", &str);
    str_print(str);
    return 0;
}
