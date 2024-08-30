#include <stdio.h>
#include <string.h>

int main()
{
    int f[256] = {0};  
    char str[100];     
    printf("Enter a string: ");
    scanf("%s", str); 

    for (int i = 0; i < strlen(str); i++)
    {
        f[(int)str[i]]++; 
    }

    for (int i = 0; i < 256; i++)
    {
        if (f[i] != 0)
        {
            printf("%c: %d\n", i, f[i]);  
        }
    }

    return 0;
}