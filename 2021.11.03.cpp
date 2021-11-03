#include<stdio.h>
int main()
{
	/*int a=10;
    int*p=&a;//指针变量
	printf("%p\n",p); */
	
	
	/*printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));*/
	
	
	/*int a=0x11223344;
	int*pa=&a;
	char*pc=&a;
	printf("%p\n",pa);
	printf("%p\n",pa+1);
	printf("%p\n",pc);
	printf("%p\n",pc+1);*/
	
	
	/*int arr[10]={0};
    int *p=	arr;//数组名，首元素地址 
    int i=0;
    for(i=0;i<10;i++)
    {
    	*(p+i)=1;
    	
	}*/
	
	
	int a;//局部变量不初始化，默认是随机值
	int*p;//局部的指针变量 ,被初始化随机值 
	 *p=20;//把20随机放到一个变量中去，这么做是要被打的 
	return 0;
}
