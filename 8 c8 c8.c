#include <stdio.h>

int main() {

    int b = 87;
    for (int j = 5; j < 23; j++) {
            printf("j=%d, b=%d\n", j, b*j);

        //���ڤ@�ǥH�U�榡����X����
        //�o�i�H�q�L�u�K�[�@��N�X�ӧ����C
        //�аѾ\ Google �ۿO���A�� 14 ���C
        //j=5, b=435
        //j=6, b=522
        //j=7, b=609
        //j=8, b=696
        //j=9, b=783
        //...
        //j=22, b=1914
    }
}
