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
	printf("�޴� 1.��Ģ���� 2. �α׿��� 3.���� �����Է��Ͻÿ�\n");
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
		printf("����Ǿ����ϴ�.\n");
	}

}
void back2()
{
	int x;
	printf("1.���� 2.���� 3.���� 4.������ 5.���������� 6.���θ޴��̵�\n");
		scanf("%d",&x);
		if(x==1)
		{
			int a,b;
			printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);
			printf("%d + %d = %d\n",a,b,a+b);
			back2();
		 } 
		 else if(x==2)
		 {
		 	int a,b;
		    printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);
			printf("%d - %d = %d\n",a,b,a-b);
			back2();
		 }
		  else if(x==3)
		 {
		 	int a,b;
		 	printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);			 
			printf("%d * %d = %d\n",a,b,a*b);
			back2();
		 }
		  else if(x==4)
		 {
		 	int a,b;
		 	printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);
			printf("%d / %d = %d\n",a,b,a/b);
			back2();
		 }
		  else if(x==5)
		 {
		 	int a,b;
		 	printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);	
			printf("%d % %d = %d\n",a,b,a%b);
			back2();
		 }
		 else
		 {	
			printf("���θ޴��� ���ư�\n");
		    back1();
		 } 

}
void back3()
{
	int x;
	 printf("1.�ڿ��α׿��� ���� 2.���α׿��� ���� 3 ���θ޴�\n");
	   scanf("%d",&x);
	   int a,b;
	   if(x==1)
	   {
			printf("���� 2�� �Է�\n");
			scanf("%d %d",&a, &b);
			printf("ln%d + ln%d = ln%d\n",a,b,a*b);
			back3();
	   } 
	   else if(x==2)
	   {
	     	printf("���� 2�� �Է�\n");
	   		scanf("%d %d",&a, &b);
			printf("log%d + log%d = ln%d\n",a,b,a*b);
			back3();
		} 
       else
       {
       	printf("�����޴��̵� \n");
       	    back1();
	   }
}
