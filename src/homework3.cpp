#include <stdio.h>

int main(void)
{

    int no;

    do{
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &no);
        if(no<0)
            puts("\a 양의 정수만 입력하시오.");
    } while (no<=0);

    printf("%d를 거꾸로 읽으면", no);
    while(no>0)
    {
        printf("%d", no%10);
        no /= 10;
    }
    puts("입니다.");

    return 0;
}