# include<stdio.h>

int main(){

char ch;

printf("enter any alphabet : ");
scanf(" %c", &ch);

#include <stdio.h>

    switch(ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U': 
        
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a vowel.\n", ch);
            break;

        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("%c is a consonant.\n", ch);
            else
                printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
