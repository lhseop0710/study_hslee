//소수 출력 프로그램
//2 이상의 정수를 입력하여 2부터 입력한 수까지의 모든 소수를 출력, 단 한 줄에 5개씩 5칸 간격으로 출력한다.

// #include <stdio.h>

// int main(void)
// {
//     int no;   //정수를 입력하게 끔 함

//     puts("2 이상의 정수를 입력하세요 입력한 수 까지의 모든 소수를 출력");
//     printf("2 이상의 정수를 입력하세요:       ");
//     scanf("%d", &no);  //정수 입력을 받아옴

//     int i,j;    // 
//     int cnt=0;      //count = 0으로 지정

//     for (i = 2 ; i <= no; i ++)  //2부터 시작해서 정수까지 1씩 더해줌
//     {
//         for(j=2; j <=i; j++)    //동일
//         {
//             if(i%j==0)      //i를 j로 나눈 나머지가 0과 같을떄
//             {
//                 if(i>j) break;  //i가 j보다 크면 멈춤

//                 else  //
//                 {
//                 printf("%5d", i);  //여기부터 5개씩 5칸 띄워서 입력하게하는 코드
//                 cnt++;
//                 if(cnt%5==0)
//                 printf("\n");
                
//                 }
//             }
//         }
//     }
//     return 0;
// }



//1부터 일정 수(n)까지의 합을 재귀호출을 사용해서 작성
//1부터 일정 수 까지의 합을 구하는 재귀호출 함수를 만들고 호출하여 구현합니다. 함수명은 다음과 같이 작성합니다.
//int rec_func(int n);
//1부터 10까지의 합 계산

// #include <stdio.h>

// int main(void)
// {
//     int rec_func(int n);
//     {   
//         int n;
//         int result;


//         puts("1부터 n까지의 합을 구하는 합수입니다.");
//         printf("정수 n을 입력하시오:      ");
//         scanf("%d", &n);

//         if (n%2==0)
//         {
//           result=(1+n)*(n/2);
//         }
//         else if (n%2==1)
//         {
//           result=(1+n)*(n/2)+((n/2)+1);
//         }
//         printf("%d", result);

//         return 0;
//     }
// }


// int rec_finc(int n);



//피보나치 수열을 n번째 항까지 구하여 출력하는 프로그램을 작성하시오.
//단, 적절한 반복문을 선택하여 작성하시오.
//몇번째 항까지 출력할까요? 4 결과: 0, 1, 1, 2

// #include <stdio.h>

// int main(void)
// {
//     int i, n, t1 =0, t2=1, next;

//     puts("피보나치 수열을 n번쨰 항까지 구하여 출력합니다.");
//     printf("n번째 항을 정해주세요:      ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; ++i)
//     {
//         printf("  %d  ", t1);
//         next = t1 + t2;
//         t1 = t2;
//         t2 = next;
//         }
//     return 0;
// }

//임의의 2차원 공간 상의 두 점을 입력받고 유클리디안 거리를 계산하여 결과를 출력하는 프로그램을 작성하시오.
//#include <math.h> 를 추가하여 sqrt()함수로 제곱근을 계산하시오
//(e.g) float result = sqrt(input) -> input이 4.0이면 result는 2.0을 반환)
//(유클리디안 거리를 계산하는 함수를 작성하고 활용하시오)

#include <stdio.h>
#include <math.h>// 제곱근사용을 위한 라이브러리 추가
 
double Euclidian_Dt(double x1, double y1, double x2, double y2); //함수 선언
int main(void)
{
    double x1, y1, x2, y2;
 
    printf("첫 번째 point_x : ");
    scanf("%lf", &x1);
    printf("첫 번째 point_y : ");
    scanf("%lf", &y1);
 
    printf("두 번째 point_x : ");
    scanf("%lf", &x2);
    printf("두 번째 point_y : ");
    scanf("%lf", &y2);
 
    printf("거리는 : %f\n", Euclidian_Dt(x1, y1, x2, y2));
    return 0;
}


double Euclidian_Dt(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}