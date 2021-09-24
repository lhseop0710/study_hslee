// #include <stdio.h>

// //1.사용자로부터 정수로 몇 월인지 입력받아서 영어단어로 출력하는 프로그램을 작성하시오
// //단 switch_case문을 활용할것
// int main(void)
// {
//     int month;

//     printf("몇 월 입니까? 숫자로입력하시오:  ");
//     scanf("%d", &month);

//     switch (month)
//     {
//         case 1:
//             printf("January \n");
//             break;
//         case 2:
//             printf("February \n");
//             break;
//         case 3:
//             printf("March \n");
//             break;
//         case 4:
//             printf("April \n");
//             break;
//         case 5:
//             printf("May \n");
//             break;
//         case 6:
//             printf("June \n");
//             break;
//         case 7:
//             printf("July \n");
//             break;
//         case 8:
//             printf("August \n");
//             break;
//         case 9:
//             printf("September \n");
//             break;
//         case 10:
//             printf("October \n");
//             break;
//         case 11:
//             printf("November \n");
//             break;
//         case 12:
//             printf("December \n");
//             break;                                   
//     }
//     return 0;
// }



//2. 2치원 평면상의 (x,y)좌표를 입력받고 해당 좌표가 속하는 사분면이 어디인지 화면에 출력하시오.
//교수님께 질문 무엇이 문제인가? 개인적인 고찰로 매우 문제가 없는 코드

// #include<stdio.h>

// int main(void)
// {
//     int x, y;

//     puts("좌표를 입력하세요 ");
//     printf("x좌표:   ");
//     scanf("%d",&x);
//     printf("y좌표:   ");
//     scanf("%d",&y);

//     if  (x > 0 && y > 0)
//     {
//         printf("1사분면 입니다. \n");
//     }
//     else if (x < 0 && y > 0)
//     {
//         printf("2사분면 입니다. \n");
//     }
//     else if (x < 0 && y < 0)
//     {
//         printf("3사분면 입니다. \n");
//     }
//     else if (x > 0 && y < 0)
//     {
//         printf("4사분면 입니다. \n");
//     }
//     return 0;
// }



//3. 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하세요, 정수 사칙연삭만 입력합니다.

// #include<stdio.h>

// int main(void)
// {
//     int a, b, calculate;
//     char operate;

//     puts("계산기 입니다. 정수형의 사칙연산을 입력하세요");
//     printf("입력창  :      ");
//     scanf("%d%c%d", &a,&operate,&b);

//     switch(operate)
//     {
//         case '+':
//             calculate=a+b;
//             break;
//         case '-':
//             calculate=a-b;
//             break;        
//         case '*':
//             calculate=a*b;
//             break;        
//         case '/':
//             calculate=a/b;
//             break;
//     }
//     printf("출력:   %d     \n", calculate);

//     return 0;
// }


//4. 사용자로부터 2개의 정수를 받아서 1번쨰 정수가 2번째 정수로 나누어 떨어지는지 검사하는 프로그램을 작성하시오.
//(2번째 정수가 1번째 정수의 약수인지 검사)

// #include<stdio.h>

// int main(void)
// {
//     int a,b;

//     puts("나누어 떨어지는 수인지 검사하는 프로그램입니다. 약수인가 아닌가 \n");
//     printf("첫번째 정수를 입력하시오:     "); scanf("%d", &a);
//     printf("두번째 정수를 입력하시오:     "); scanf("%d" ,&b);

//     if (a%b==1)
//     {
//         printf("나누어 떨어지지 않는군요");
//     }
//     else if (a%b==0)
//     {
//         printf("나누어 떨어지는 군요");
//     }

//     return 0;
// }