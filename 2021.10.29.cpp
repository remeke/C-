#include<stdio.h>
#include<string.h>
int main()
{
	//����һ������-���10������
	/*int arr[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
	char arr2[5]={'a','b'};//��ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
	char arr3[5]="ab";//ok,Ԫ��Ϊa,b,\0,0,0
	char arr4[5]={'a',98};//Ԫ��Ϊa,b,0,0,0,��Ϊb��ASCII��ֵΪ98
	char arr5[] ="abcdef";//Ԫ��Ϊa,b,c,d,e,f,0
	printf("%d\n",sizeof(arr5));//���Ϊ7 
	//sizeof����arr5��ռ�ռ�Ĵ�С
	//7��Ԫ��-char7*1=7 
	printf("%d\n",strlen(arr5)); //���Ϊ6 
	//strlen���ַ��ĳ���'\0'֮ǰ���ַ�����
	//[a b c d e f \0]��6���ַ�����
	//strlen��sizeofû��ʲô����
	//strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-Ҫ��ͷ�ļ�
	//sizeof ������������顢���͵Ĵ�С-��λ���ֽ�-������*/
	
	
	/*char arr[]={'a','b','c'};
	printf("%d\n",strlen(arr));//���Ϊ���ֵ��strlenһֱ����\0֮ǰ */
	
	
	 /*char arr[]="abcdef";
	 //printf("%c\n",arr[3]);
	 int i=0;
	 for(i=0;i<(int)6;i++)
	 {
	 	printf("%c\n",arr[i]);//\0��ӡ�������� 
	 }*/
	 
	 
	 /*int arr[]={1,2,3,4,5,6,7,8,9,0};
	 int sz=sizeof(arr)/sizeof(arr[0]);//��Ԫ�ظ���
	 int i=0;
	 for(i=0;i<sz;i++)
	 {
	 	printf("%d\n",arr[i]);
	  } */
	  
	  
	  /*int arr[]={1,2,3,4,5,6,7,8,9,10};
	  int sz=sizeof(arr)/sizeof(arr[0]);
	  int i=0;
	  for(i=0;i<sz;i++)
	  {
	printf("&arr[%d]=%p\n",i,&arr[i]);
	   }*/
	   
	   
	   //�����ʼ��
	   /*int arr[3][4]={1,2,3,4};//һ����4��Ԫ�أ�һ����3�� 
	   int arr2[3][4]={{1,2},{4,5}}��
	   int arr3[][4]={{2,3},{4,5}}; //�п���ʡ�ԣ��в��� */
	   
	   
	  /* int arr[3][4]={{1,2,3},{4,5}};
	   int i=0;
	   for(i=0;i<3;i++)
	   {
	   	int j=0;
	   	for(j=0;j<4;j++)
	   	{
	   	printf("%d ",	arr[i][j]);
		   }
		   printf("\n");
	   }*/
	   
	   
	    
	   int arr[3][4]={{1,2,3},{4,5}};
	   int i=0;
	   for(i=0;i<3;i++)
	   {
	   	int j=0;
	   	for(j=0;j<4;j++)
	   	{
	   	printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		   }
		   printf("\n");
	   }
	return 0;
}
