#include<stdio.h> 
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int Sub(int x,int y)
{
	int z=0;
	z=x-y;
	return z;
}
int Mul(int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}
int Div(int x,int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
//	int a=10;
//	int b=20;
//	
//	int(*pa)(int,int)=Add;
//	printf("%d\n",(pa)(2,3));
//	printf("%d\n",(*pa)(2,3));
//	printf("%d\n",(**pa)(2,3));
//	printf("%d\n",(***pa)(2,3));

//ָ������
int*arr[5];
//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ������� 
int (*pa)(int,int)=Add;//Sub/Mul/Div 
int (*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ�������
int i=0;
for(i=0;i<4;i++)
{
	printf("%d\n",parr[i](2,3));
 } 
	return 0;
}
