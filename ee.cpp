#include<stdio.h>
#include<stdarg.h>
#include<string.h>
double mean(int num, ...);
double median(int count,...);
void ascending_sort(int *arr, int len); 
void concatenate_str(int num, ...); 
int main()
{
	   int arr[7] = { 0, };
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
               arr[i] = (7 - i);
        }
        printf("���� ��:\n");
        for (int i = 0; i < 7; i++)
               printf("%d��: %d\n", i, arr[i]);
        ascending_sort(arr, sizeof(arr) / sizeof(int)); //��������
        printf("���� ��:\n");
        for (int i = 0; i < 7; i++)
               printf("%d��: %d\n", i, arr[i]);
        printf("������:%lf", median(7, 1, 2, 3, 4, 5, 6, 7));
        printf("\n");
        printf("�迭�� �ִ� ���ڵ��� ���:%f\n", mean(7, 1, 2, 3, 4, 5, 6, 7));
        printf("���ڿ� 'gud', 'eta', 'ma'�� ��ġ��:");
        concatenate_str(3, "gud", "eta", "ma");
        printf("\n");
        return 0;
}
double mean(int num, ...)
{
	va_list list;
	double sum=0.0;
	va_start(list,num); 
	for(int i=0;i<num;i++)
	{
		sum+=va_arg(list,int);
	}
	va_end(list);
	return sum/num; 
}
double median(int count,...)
{
	    int arr[100];
        int i = 0;
        int min;
        double median;
        va_list ap;
        va_start(ap, count);
        while (i < count)
        {
               arr[i] = va_arg(ap, int);
               i++;
        }
        ascending_sort(arr, count); 
        if (count % 2 == 1)
        {
               median = (double)arr[count / 2];
        }
        else
        {
               median = ((double)(arr[count / 2] + arr[count / 2 - 1]) / (double)2);
        }
        va_end(ap);
        return median;
}
void ascending_sort(int *arr, int len)
{
        int min;
        for (int i = 0; i < len; i++)
        {
               min = i;
               for (int j = i + 1; j < len; j++)
               {
                       if (arr[j] < arr[min])
                       {
                              int temp = arr[min];
                              arr[min] = arr[j];
                              arr[j] = temp;
                       }
               }
        }
}
void concatenate_str(int num, ...)
{
        int i = 0;
        char str[100] = "";
        va_list ap;
        va_start(ap, num);
        while (i < num)
        {
               strcat(str, va_arg(ap, char*));
               i++;
        }
        printf("%s", str);
        va_end(ap);
}
