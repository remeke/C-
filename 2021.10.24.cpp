#include<stdio.h>
#include<string.h>
int main()
{
	/*int ch=0;
	while((ch=getchar() )!=EOF)
	{
		putchar(ch);
	}*/
	
	
	/*int ret=0;
	int ch=0;
	char password[20]={0};
	printf("请输入密码：>");
	scanf("%s",password);//输入密码，并存放在password数据中
	//注意字符串数组名是数组地址,不需要加& 
	//缓冲区还剩一个'\n'
	//读取一下'\n'
while ((ch=getchar())!='\n')
{
	;//让getchar在里面不断地读，判断，一直读到\n为止 
}
 printf("请确认(Y/N):>");
 ret=getchar();//Y|N
 if(ret=='Y')
 {
 	printf("确认成功"); 
 }
 else
 {
 	printf("确认失败");
 }*/
 
 
 /*int ch=0;
 while ((ch=getchar())!=EOF)
 {
 	if(ch<'0'||ch>'9')
 	continue;
 	putchar(ch);
 }*/
 
 
 /*int arr[10]={1,2,3,4,5,6,7,8,9,10};
 int i=0;
 for (i=0;i<10;i++)

 {
 	printf("%d ",arr[i]);
 }*/
 
 
/* int i=0;
 int k=0;
 for(i=0,k=0;k=1;i++,k++)
 {
 	k++;
 }*/
 
 
 /*int i=1;
 do 
 {
if(5==i)
continue;
 printf("%d ",i);
 i++;
}
while (i<=10);*/
//do...while语句


/*int long long i=1,k=1;
int long long n;
printf("输入一个正整数n\n");
scanf("%d",&n) ;
for(i=1;i<n;i++)
{
	k=k*(i+1);
}
printf("n的阶乘为%d\n",k);*/
//计算n的阶乘



/*int i=0;
int n=0;

int sum=0;
for(n=1;n<=10;n++)
{
	int ret =1;
	for(i=1;i<=n;i++)
	{

		ret=ret*i;
	}//n的阶乘
	sum=sum+ret; 
 } 
 printf("sum=%d",sum);*/
 //计算1！+2！+...+10!
 
 
 /*int arr[]={1,2,3,4,5,6,7,8,9,10};
 int k;
 scanf("%d",&k);
 //写一个代码，在arr数组（有序的）中找到k
  int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数 
 int left=0;//左下标 
 int right=sz-1;//右下标
 while(left<=right)
 {
 	int mid=(left+right)/2; 
 if(arr[mid]>k)
 {
 	right=mid-1;
 }
 else if(arr[mid]<k)
 {	
 left=mid+1;
 }
 else
{
	printf("找到了，下标是%d\n",mid);
	break;
}
 
 }
 if(left>right)
 printf("找不到");*/
 //二分法找有序数组中的元素 
 
 
 /*//注意char arr[]="abc"中元素有4个
 //分别是  a b c \0
 //对应下标0 1 2 3  
 char arr1[]="welcome to guangsha!!!!!";//元素个数可以不给定 
 char arr2[]="########################";
 int left=0;
 int right=sizeof(arr1)/sizeof(arr1[0] )-2;
 //更简洁的方式：int right=strlen(arr1)-1
 while(left<=right)
 {
 	arr2[left]=arr1[left];
 	arr2[right]=arr1[right];
 	printf("%s\n",arr2);
 	left++;
 	right--;
  } */
  //演示多个字符从两端移动，向中间汇聚
  
  
  
  int i=0;
  char password[20]={0};
  for(i=0;i<3;i++)
  {
  	printf("请输入密码\n");
	  scanf("%s",&password);
	  if(strcmp(password,"123456")==0)//等号不能用来比较两个字符串是否相等
	  //应该使用一个库函数strcmp 
	  {
	  	printf("登陆成功\n");
		  break; 
	   } 
   } 
   if (i==3)
   {
   	printf("三次密码均错误，请退出程序\n"); 
   }
   //模拟用户登录情景，并且只能登陆三次 
	return 0;
 } 
