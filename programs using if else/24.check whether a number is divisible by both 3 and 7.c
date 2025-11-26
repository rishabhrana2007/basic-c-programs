#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 7 == 0){
        printf("%d is divisible by 7 and 3 both",num);
        }else{
            printf("%d is not divisible by 7 and 3 both",num);
        }
    return 0;
}
