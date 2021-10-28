#include<stdio.h>
#include<string.h>
void print(int n)
{
	if(n>9)
	{
	print(n/10);
}
	printf("%d ",n%10);
}


int my_strlen(char*str)
{
int count=0;
while(*str!='\0')
{
	count++;
	str++;
	}
	return count;	                                             
}

int main()

{	/*printf("ºÇºÇ\n");
	main();*/
	//Õ»Òç³östack overflow
	
	
	
	/*unsigned int num= 0;
	scanf("%d",&num);//1234
	print(num);
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print91£© 2 3 4 */
	
	
	char arr[]="bit";
    int len=my_strlen(arr);
    printf("%d\n",len);
	return 0;
}
