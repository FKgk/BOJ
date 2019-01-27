#include <stdio.h>

int main(void)
{
    char name[101];
    int i = 0;
    
    scanf("%s",name);
    printf("%c",name[0]);
    while(name[i] != '\0')
    {
        if(name[i] == '-')
            printf("%c",name[i + 1]);
        i++;
    }
   
    return 0;
}
