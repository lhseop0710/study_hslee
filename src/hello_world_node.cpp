// #include <stdio.h>

// int main()
// {
//   printf("hello, world!\n");
//   printf("Be happy!\n");

// 	// pause function (windows: system("pause");)
// 	getchar();
//   return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//   int a;
//   char* b;


//   printf("학번input\n");
//   scanf("%d", &a); 
//   printf("학번:%d\n", a); 

//   printf("이름input\n"); 
//   getchar();
//   scanf("%s", &b); 
//   printf("name:%s\n", b); 
  
//   // scanf("%b", &b);
//   // printf("학점:   %c  \n"); 
//   // scanf("%c", &c);

//   getchar();
//   return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     char ch;

//     printf("문자입력 :  "); scanf("  %c  \n": &ch); #문자를 입력
//     printf("%c문자의 아스키 코드는 %d 입니다 \n", &ch, &ch); #변환하여 출력

//     return 0;
// }


#include <stdio.h>

int main(void)
{
  int weight, height;
  double BMI;

  printf("몸무게 :    \n");   scanf("%d", &weight); //몸무게를 입력
  printf("키:        \n");   scanf("%d", &height); //키를 입력

                      //아랫줄까지 BMI지수 계산
  BMI = weight / (height/100.0 * height/100.0);
  printf("당신의 BMI는 %f입니다.\n", BMI);
  

    if (BMI >=18.5 && BMI<=24.9)   //if문 20~25사이만 정상으로 출력
      printf("정상입니다.");
    else
      printf("체중관리가 필요합니다.");


  return 0;

}
