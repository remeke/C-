#include<stdio.h>
#include<string.h>
#include<math.h>
is_prinme(int n)
{
int i;
for(i=2;i<=sqrt(n);i++)
{
	if(n%i==0)
	{
		return 0;
	}
	else if(n%i!=0&&i==n)
	{
		return 1;
	}
}
}
int main()
{
	/*char arr1[]="bit";
	char arr2[20]="###########";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	//strcpy(字符串1，字符串2）*/
	//将字符串2的内容复制到字符串1中（包括\0)
	
	
	
	/*char arr[]="hello world";
	memset(arr,'#',5);
	printf("%s\n",arr);*/ 
	//打印出##### world
	
	
	//函数基本框架：
	/* ret_type fun_name(para1,*)
	{
	statement://语句项
}
ret_type 返回类型
fun_name 函数名
para1 函数参数*/


/*例：求两个整数的最大值
get_max(int x,int y)
{
if(x>y)
return x;
else
return y; 
}*/


//交换两个变量的值
/*void Swap(int*pa,int*pb)//void表示这个函数不需要返回值
{
int tmp =0;
tmp=*pa;
*pa=*pb;
*pb=tmp;
}*/

//是素数返回1，不是返回0 


/*int binary_search(int arr[],int k)
{
	int left=0;
	int sz=sizeof(arr)/sizeof(arr]0);
	int right=sz-1;
while(left<=right)
{
		int mid=(left+right)/2;
	if (arr[mid]<k)
	
		left=mid+1;
		else if(arr[mid>k])
         right=mid-1;
		 else
		 return mid;		
	    
}
return -1;
}*/

	return 0;
}
