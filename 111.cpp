#include <stdio.h>

int main(void) {
    int input = 0;
    int remain = 0;

    printf("��J��ơG");
    scanf("%d", &input);

    remain = input % 2;
    if(remain == 1) {
        printf("%d ���_��\n", input);
    }
    else {
        printf("%d ������\n", input);
    }

    return 0;
}
