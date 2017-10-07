#include <stdio.h>

int main(void) {
    int input = 0;
    int remain = 0;

    printf("块俱计");
    scanf("%d", &input);

    remain = input % 2;
    if(remain == 1) {
        printf("%d 计\n", input);
    }
    else {
        printf("%d 案计\n", input);
    }

    return 0;
}
