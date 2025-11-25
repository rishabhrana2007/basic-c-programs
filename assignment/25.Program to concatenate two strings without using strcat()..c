#include <stdio.h>

int main() {
    char str1[100],str2[100],str3[200],temp;
    int length1=0,length2=0,i=0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i=0; str1[i] != '\0'; i++)
        if(str1[i] == '\n') str1[i] = '\0';

    for(i=0; str2[i] != '\0'; i++)
        if(str2[i] == '\n') str2[i] = '\0';

    while (str1[length1] != '\0') {
        length1++;
    }
    while (str2[length2] != '\0') {
        length2++;
    }

    for(i = 0; i < length1; i++)
        str3[i] = str1[i];

    for(i = 0; i < length2; i++)
        str3[length1 + i] = str2[i];

        str3[length1 + length2] = '\0';
        
    printf("concatinated string :");
    printf("%s",str3);

    return 0;
}