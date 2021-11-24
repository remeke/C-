#include<stdio.h>
/*void test(int arr[])
{
	
}
void test(int arr[10])
{
	
}
void test(int*arr)
{
	
}
void test2(int*arr[20])
{
	
}
void test2(int**arr)
{
	
}*/
//以上写法都成立 
/*int main()
{
	int arr[10]={0};
	int *arr2[20]={0};
	test(arr);
	test2(arr2);
	return 0;
}*/
//void test3(int*arr)
//{
//	
//}
//void test4(int**arr)
//{
//	
//}
//void test5(int(*arr)[5])
//{
//	
//}
//int main()
//{
//	int arr[3][5]={0};
//	/*test3(arr);
//	test4(arr);*/
//	test5(arr);
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z; 
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("%d\n",Add(a,b));
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//	//&函数名和函数名都是函数的地址
//	int(*pa)(int,int)=Add;
//	printf("%d\n",(*pa)(2,3));
//	return 0;
//}


void Print(char*str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=Print;
	(*p)("hello world");
	return 0;
}
