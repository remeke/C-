#include<stdio.h>
#include<math.h>
int main()
{
	/*int a,b,c;
	printf("请输入三个数");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		int tmp=a;
		a=b;
		b=tmp;
	}
	 if(a<c)
	 {
	 	int tmp=a;
	 	a=c;
	 	c=tmp;
	 }
	 if(b<c)
	 {
	 	int tmp=b;
	 	b=c;
	 	c=tmp;
	 }
	 printf("%d %d %d",a,b,c);*/
	 //输入三个数，按从大到小排列
	 
	 
	 
	 /*int i=1;
	 for(i=1;i<=100;i++)
	 {
	 	if (i%3==0)
	 	{
	 		printf("%d\n",i);
		 }
	  }*/
	  //打印1-100之间3的倍数的数
	  
	  
	  /*int m,n,r;
	  printf("请输入两个整数");
	   scanf("%d%d",&m,&n);
	   while(m%n!=0)
	   {
	   	r=m%n;
	   	m=n;
	   	n=r;
	   }
	   if(n==1)
	   {
	   	printf("没有公约数\n"); 
	   }
	   else
	   {
	   	printf("最小公约数为%d\n",n);
	   }*/
	   //找到两个数的最小公约数
	   
	   
	   /*int year=0;
	   for(year=2000;year<=2100;year++)//判断year是否为闰年 
	   {
	   	//判断规则：1、能被4整除并且不能被100整除 
		//2、能被400整除
		if(year%4==0&&year%100!=100||year%400==0)
		{
			printf("%d\n",year);
		 } 
		}*/
		 //判断一个年份是否为闰年
		 
		 
		 /*int i=100;
		 for(i=101;i<=200;i+=2)
		 {
		 //判断i是否为素数
		 //使用试除法
		 int j=0;
		 for(j=2;j<=sqrt(i);j++)
		 {
		 	if(i%j==0)
			 {
			 	break;
			  } 
		  } 
		  if(j>sqrt(i))
		  {
		  	printf("%d ",i);
		  }
		  } 
		  //寻找100-200之间的素数*/
		  //网上搜素数求解的n种境界
		  
		   
		  double i=0,sum=0;
		  int flag=1;
		  for(i=1;i<=100;i++)
		  {
		  	sum+=flag*1/i;
		  	flag=-flag;
		  }
	printf("%lf",sum);
	//计算1/1-1/2=1/3-1/4...+1/99-1/100 
	return 0;
}
