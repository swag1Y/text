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
	for (i=0; i<9; i++)    //����9��ѭ����ʵ��9�˱Ƚ� 
	{
		for (j=0; j<9-i; j++) //ÿһ��ѭ���У�����9-i�αȽ� 
		{
			if (a[j]>a[j+1])  //�����������Ƚ� 
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
//�����n��������Ҫ������n-1�˱Ƚϣ��ڵ�j�˱Ƚ���Ҫ����n-j�������Ƚ� 
