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
	/*int*p=NULL;//p������ָ��-ָ�����ε�ָ�� -���Դ�����εĵ�ַ 
	char*pc=NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ������ĵ�ַ 
	//����ָ��-ָ�������ָ�� -�������ĵ�ַ
	 int arr[10]={0};
	 //arr-��Ԫ�ص�ַ
	 //&arr[0]-��Ԫ�صĵ�ַ
	 //&arr-����ĵ�ַ
	 
	 int arr[10]={1,2,3,4,5,6,7,8,9,10};
	 int(*p)[10]=&arr;//����ĵ�ַҪ������
	 //ɾ�����p��������ָ�� */
	 
	 
	/*int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10]=&arr;
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d\n",(*pa)[i]);
	}*/
	
	
	/*int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);//arr-������-��Ԫ�ص�ַ
	//��ά������Ԫ���ǵ�һ��һά����
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
	//�ܽ᣺p��arr�ǵȼ۵ģ����Ի������������� 
	 return 0;
	 
 } 
