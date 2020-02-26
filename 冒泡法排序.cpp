#include<stdio.h>
int main()
{
	int a[10];
	int i;
	int j;
	int tem;
	for (j=0; j<10; j++)
	{
		printf("a[%d]=",j);
		scanf("%d",&a[j]);
	}
	for (i=0; i<9; i++)    //进行9次循环，实现9趟比较 
	{
		for (j=0; j<9-i; j++) //每一趟循环中，进行9-i次比较 
		{
			if (a[j]>a[j+1])  //相邻两个数比较 
			{
				tem = a[j];
				a[j] = a[j+1];
				a[j+1] = tem;
			}
		}
	}
	for (j=0; j<10; j++)
	{
		printf("%d\t",a[j]);
	}
	return 0;
}
//如果有n个数，则要进行你n-1趟比较；在第j趟比较中要进行n-j次两两比较 
