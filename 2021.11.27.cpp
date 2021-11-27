#include<stdio.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("****1.add     2.sub*********\n");
//	printf("****3.mul     4.div*********\n");
//	printf("*********  0.exit  *********\n");
//	printf("****************************\n");			
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)
//{
//	return x-y;
//}
//int Mul(int x,int y)
//{
//	return x*y;
//}
//int Div(int x,int y)
//{
//	return x/y;
//}
//int main()
//{
//	int input;
//	int x=0,y=0;
//	int (*pfArr[5])(int ,int)={0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		
//		if(input>=1&&input<=4)
//		{
//		printf("请输入两个操作数：>");
//		scanf("%d%d",&x,&y);
//		int ret =pfArr[input](x,y);
//		printf("%d\n",ret);	
//		}
//		else if(input==0)
//		{
//			printf("退出"); 
//		}
//		else
//		{
//			printf("选择错误");
//		}
//		
//		switch(input)
//		{
//			case 1:
//				printf("%d\n",Add(x,y));
//				break;
//			case 2:
//		        printf("%d\n",Sub(x,y));
//				break;  
//			case 3:
//			    printf("%d\n",Mul(x,y));
//				break;
//			case 4:
//				printf("%d\n",Div(x,y));
//				break;
//			default:
//			    printf("选择错误\n");
//				break;	  	
//		}
//	}while(input);
//return 0;
//}


//void test(const(char*str))
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	//函数指针pfun
//	void(*pfun)(const char*)=test;
//	//函数指针的数组pfunArr 
// } 


//qsort-可以排序任意类型的数据
 
