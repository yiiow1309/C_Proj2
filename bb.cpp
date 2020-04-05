#include<stdio.h>
#include<conio.h>
int main(void) {
	int x,a;
	x=1000;
	a=1;
    char c;
    while (1) {
            c = getch();   
            if (c == -32) {           
                c = getch();        
                switch (c) {           
                case 72:
                	x=x+a;
                    printf("%d\n",x);
                    break;
                case 80:
                	x=x-a;
                    printf("%d\n",x);
                    break;
                case 75:
                   a = a - 1;
                   if (a < 1) 
				         a = 1;
                    printf("1씩더감소됩니다  현재 증감:%d\n",a);
                    break;
                case 77:
                	a = a + 1;
                    printf("1씩더 더해집니다 현재 증감:%d\n",a);             
                    break;
                }
            }
    }
    return 0;

}
