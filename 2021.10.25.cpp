#include<stdio.h>
#include<math.h>
int main()
{
	/*int a,b,c;
	printf("������������");
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
	 //���������������Ӵ�С����
	 
	 
	 
	 /*int i=1;
	 for(i=1;i<=100;i++)
	 {
	 	if (i%3==0)
	 	{
	 		printf("%d\n",i);
		 }
	  }*/
	  //��ӡ1-100֮��3�ı�������
	  
	  
	  /*int m,n,r;
	  printf("��������������");
	   scanf("%d%d",&m,&n);
	   while(m%n!=0)
	   {
	   	r=m%n;
	   	m=n;
	   	n=r;
	   }
	   if(n==1)
	   {
	   	printf("û�й�Լ��\n"); 
	   }
	   else
	   {
	   	printf("��С��Լ��Ϊ%d\n",n);
	   }*/
	   //�ҵ�����������С��Լ��
	   
	   
	   /*int year=0;
	   for(year=2000;year<=2100;year++)//�ж�year�Ƿ�Ϊ���� 
	   {
	   	//�жϹ���1���ܱ�4�������Ҳ��ܱ�100���� 
		//2���ܱ�400����
		if(year%4==0&&year%100!=100||year%400==0)
		{
			printf("%d\n",year);
		 } 
		}*/
		 //�ж�һ������Ƿ�Ϊ����
		 
		 
		 /*int i=100;
		 for(i=101;i<=200;i+=2)
		 {
		 //�ж�i�Ƿ�Ϊ����
		 //ʹ���Գ���
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
		  //Ѱ��100-200֮�������*/
		  //��������������n�־���
		  
		   
		  double i=0,sum=0;
		  int flag=1;
		  for(i=1;i<=100;i++)
		  {
		  	sum+=flag*1/i;
		  	flag=-flag;
		  }
	printf("%lf",sum);
	//����1/1-1/2=1/3-1/4...+1/99-1/100 
	return 0;
}
