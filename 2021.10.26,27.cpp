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
	//strcpy(�ַ���1���ַ���2��*/
	//���ַ���2�����ݸ��Ƶ��ַ���1�У�����\0)
	
	
	
	/*char arr[]="hello world";
	memset(arr,'#',5);
	printf("%s\n",arr);*/ 
	//��ӡ��##### world
	
	
	//����������ܣ�
	/* ret_type fun_name(para1,*)
	{
	statement://�����
}
ret_type ��������
fun_name ������
para1 ��������*/


/*�������������������ֵ
get_max(int x,int y)
{
if(x>y)
return x;
else
return y; 
}*/


//��������������ֵ
/*void Swap(int*pa,int*pb)//void��ʾ�����������Ҫ����ֵ
{
int tmp =0;
tmp=*pa;
*pa=*pb;
*pb=tmp;
}*/

//����������1�����Ƿ���0 


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
