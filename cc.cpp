#include<stdio.h>
#include <stdlib.h>
void back3();
void back1();
void back2();
int main()
{
   back1();
}
void back1()
{
	int x;
	printf("메뉴 1.사칙연산 2. 로그연산 3.종료 숫자입력하시오\n");
	scanf("%d",&x);	

	if(x==1)
	{
	   back2();
	}
	else if(x==2)
	{
	   back3();
	} 
	else
	{
		printf("종료되었습니다.\n");
	}

}
void back2()
{
	int x;
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 5.나머지연산 6.메인메뉴이동\n");
		scanf("%d",&x);
		if(x==1)
		{
			int a,b;
			printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);
			printf("%d + %d = %d\n",a,b,a+b);
			back2();
		 } 
		 else if(x==2)
		 {
		 	int a,b;
		    printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);
			printf("%d - %d = %d\n",a,b,a-b);
			back2();
		 }
		  else if(x==3)
		 {
		 	int a,b;
		 	printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);			 
			printf("%d * %d = %d\n",a,b,a*b);
			back2();
		 }
		  else if(x==4)
		 {
		 	int a,b;
		 	printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);
			printf("%d / %d = %d\n",a,b,a/b);
			back2();
		 }
		  else if(x==5)
		 {
		 	int a,b;
		 	printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);	
			printf("%d % %d = %d\n",a,b,a%b);
			back2();
		 }
		 else
		 {	
			printf("메인메뉴로 돌아감\n");
		    back1();
		 } 

}
void back3()
{
	int x;
	 printf("1.자연로그연산 덧셈 2.상용로그연산 덧셈 3 메인메뉴\n");
	   scanf("%d",&x);
	   int a,b;
	   if(x==1)
	   {
			printf("숫자 2개 입력\n");
			scanf("%d %d",&a, &b);
			printf("ln%d + ln%d = ln%d\n",a,b,a*b);
			back3();
	   } 
	   else if(x==2)
	   {
	     	printf("숫자 2개 입력\n");
	   		scanf("%d %d",&a, &b);
			printf("log%d + log%d = ln%d\n",a,b,a*b);
			back3();
		} 
       else
       {
       	printf("상위메뉴이동 \n");
       	    back1();
	   }
}
