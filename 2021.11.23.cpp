#include<stdio.h>
void print1(int arr[3][5],int x,int y)
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
	   int j=0;
	   for(j=0;j<y;j++)
	   {
	   	printf("%d ",*(*(p+i)+j));
		} 
		printf("\n");
	 } 
}
int main()
{
	/*int*p=NULL;//p是整形指针-指向整形的指针 -可以存放整形的地址 
	char*pc=NULL;//pc是字符指针-指向字符的指针-可以存放数组的地址 
	//数组指针-指向数组的指针 -存放数组的地址
	 int arr[10]={0};
	 //arr-首元素地址
	 //&arr[0]-首元素的地址
	 //&arr-数组的地址
	 
	 int arr[10]={1,2,3,4,5,6,7,8,9,10};
	 int(*p)[10]=&arr;//数组的地址要存起来
	 //删改你的p就是数组指针 */
	 
	 
	/*int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10]=&arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d\n",(*pa)[i]);
	}*/
	
	
	/*int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);//arr-数组名-首元素地址
	//二维数组首元素是第一组一维数组
	print2(arr,3,5); */
	
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int*p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d ",p[i]);
		printf("%d ",*(p+i));
		printf("%d ",*(arr+i));
		printf("%d ",arr[i]);//arr[i]==*(arr+i) 
	}
	//总结：p与arr是等价的，可以互换！！！！！ 
	 return 0;
	 
 } 
