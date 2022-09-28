#include<stdio.h>

int main()
{
    char alpha; 
    
    printf("\nEnter Alphabet: ");
    scanf("%c",&alpha);

    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'
    || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("%c Is Vowel.", alpha);
    }
    else
    {
        printf("%c Is Consonent.", alpha);
    }
    
    return 0;
}