#include<stdio.h>
int main()
{
    /*char arr[]="abcdef";
    char*pc=arr;
    printf("%s\n",arr);
    printf("%s\n",pc);*/
    
    
    /*const char*p="abcdef";//"abcdef"是一个常量字符串 
    printf("%s\n",p);
	printf("%c\n",*p);*/
	
	
	/*char arr1[]="abcdef";
	char arr2[]="abcdef";
	const char*p1="abcdef";
	const char*p2="abcdef";
	if(p1==p2)
	printf("hehe\n");
	else
	printf("haha\n");*/
	
	
	/*int arr[10]={0};//整型数组 
	char ch[5]={0};//字符数组
	int*parr[4];//存放整型指针的数组-指针数组
	char*pch[5];//存放字符指针的数组-指针数组 */
	
	
	/*int a=10;
	int b=20;
	int c=30;
	int d=40;
	int*arr[4]={&a,&b,&c,&d};
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",*(arr[i]));
	 }*/
	 
	 
	 int arr1[]={1,2,3,4,5};
	 int arr2[]={2,3,4,5,6};
	 int arr3[]={3,4,5,6,7};
	 int*parr[]={arr1,arr2,arr3};
	 int i=0;
	 for(i=0;i<3;i++)
	 {
	 	int j=0;
	 	for(j=0;j<5;j++)
	 	{
	 		printf("%d ",*(parr[i]+j));
		 }
		 printf("\n");
	  } 
	return 0;
}
