#include<stdio.h>
#include<string.h>
int main()
{
	//创建一个数组-存放10个整形
	/*int arr[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0 
	char arr2[5]={'a','b'};//完全初始化，剩下的元素默认初始化为0 
	char arr3[5]="ab";//ok,元素为a,b,\0,0,0
	char arr4[5]={'a',98};//元素为a,b,0,0,0,因为b的ASCII码值为98
	char arr5[] ="abcdef";//元素为a,b,c,d,e,f,0
	printf("%d\n",sizeof(arr5));//输出为7 
	//sizeof计算arr5所占空间的大小
	//7个元素-char7*1=7 
	printf("%d\n",strlen(arr5)); //输出为6 
	//strlen求字符的长度'\0'之前的字符个数
	//[a b c d e f \0]共6个字符长度
	//strlen和sizeof没有什么关联
	//strlen 是求字符串长度的-只能针对字符串求长度-库函数-要引头文件
	//sizeof 计算变量、数组、类型的大小-单位是字节-操作符*/
	
	
	/*char arr[]={'a','b','c'};
	printf("%d\n",strlen(arr));//输出为随机值，strlen一直读到\0之前 */
	
	
	 /*char arr[]="abcdef";
	 //printf("%c\n",arr[3]);
	 int i=0;
	 for(i=0;i<(int)6;i++)
	 {
	 	printf("%c\n",arr[i]);//\0打印不出来的 
	 }*/
	 
	 
	 /*int arr[]={1,2,3,4,5,6,7,8,9,0};
	 int sz=sizeof(arr)/sizeof(arr[0]);//求元素个数
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
	   
	   
	   //数组初始化
	   /*int arr[3][4]={1,2,3,4};//一行有4个元素，一共有3行 
	   int arr2[3][4]={{1,2},{4,5}}；
	   int arr3[][4]={{2,3},{4,5}}; //行可以省略，列不能 */
	   
	   
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
