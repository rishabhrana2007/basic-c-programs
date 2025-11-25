#include <stdio.h>

int main() {
    char str[200],temp;
    int length=0,i=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        length++;
        i++;
    }

   for (i = 0 ; i < length/2 ; i++){
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1]=temp;
        }
        
    printf("Reverse of string :");
    printf("%s",str);


    return 0;
}