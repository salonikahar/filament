
#include <stdio.h> 

int main()
{
    char str[100] ;
    int length=0 , p=0;

    printf("Enter a string : ");
    scanf("%s",str);

    for (int i=0; str[i] != '\0'; i++)
    {
        length++;
    }

    for (int i=0; i<length/2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            p=1;
            
            break;
        }
    }

    if (p==0)
    {
        printf("String is palindrome.");
    }
    else
    {
       printf("String is not palindrome.");
    }

    return 0;
}