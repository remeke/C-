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
	printf("���������룺>");
	scanf("%s",password);//�������룬�������password������
	//ע���ַ����������������ַ,����Ҫ��& 
	//��������ʣһ��'\n'
	//��ȡһ��'\n'
while ((ch=getchar())!='\n')
{
	;//��getchar�����治�ϵض����жϣ�һֱ����\nΪֹ 
}
 printf("��ȷ��(Y/N):>");
 ret=getchar();//Y|N
 if(ret=='Y')
 {
 	printf("ȷ�ϳɹ�"); 
 }
 else
 {
 	printf("ȷ��ʧ��");
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
//do...while���


/*int long long i=1,k=1;
int long long n;
printf("����һ��������n\n");
scanf("%d",&n) ;
for(i=1;i<n;i++)
{
	k=k*(i+1);
}
printf("n�Ľ׳�Ϊ%d\n",k);*/
//����n�Ľ׳�



/*int i=0;
int n=0;

int sum=0;
for(n=1;n<=10;n++)
{
	int ret =1;
	for(i=1;i<=n;i++)
	{

		ret=ret*i;
	}//n�Ľ׳�
	sum=sum+ret; 
 } 
 printf("sum=%d",sum);*/
 //����1��+2��+...+10!
 
 
 /*int arr[]={1,2,3,4,5,6,7,8,9,10};
 int k;
 scanf("%d",&k);
 //дһ�����룬��arr���飨����ģ����ҵ�k
  int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ��� 
 int left=0;//���±� 
 int right=sz-1;//���±�
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
	printf("�ҵ��ˣ��±���%d\n",mid);
	break;
}
 
 }
 if(left>right)
 printf("�Ҳ���");*/
 //���ַ������������е�Ԫ�� 
 
 
 /*//ע��char arr[]="abc"��Ԫ����4��
 //�ֱ���  a b c \0
 //��Ӧ�±�0 1 2 3  
 char arr1[]="welcome to guangsha!!!!!";//Ԫ�ظ������Բ����� 
 char arr2[]="########################";
 int left=0;
 int right=sizeof(arr1)/sizeof(arr1[0] )-2;
 //�����ķ�ʽ��int right=strlen(arr1)-1
 while(left<=right)
 {
 	arr2[left]=arr1[left];
 	arr2[right]=arr1[right];
 	printf("%s\n",arr2);
 	left++;
 	right--;
  } */
  //��ʾ����ַ��������ƶ������м���
  
  
  
  int i=0;
  char password[20]={0};
  for(i=0;i<3;i++)
  {
  	printf("����������\n");
	  scanf("%s",&password);
	  if(strcmp(password,"123456")==0)//�ȺŲ��������Ƚ������ַ����Ƿ����
	  //Ӧ��ʹ��һ���⺯��strcmp 
	  {
	  	printf("��½�ɹ�\n");
		  break; 
	   } 
   } 
   if (i==3)
   {
   	printf("����������������˳�����\n"); 
   }
   //ģ���û���¼�龰������ֻ�ܵ�½���� 
	return 0;
 } 
