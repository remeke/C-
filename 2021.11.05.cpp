/*#include<stdio.h>
//����һ��ѧ�� 
//���֣����䣬�绰���Ա� 
struct stu//struct-�ṹ��ؼ��� stu-�ṹ���ǩ struct stu-�ṹ������  
{
	char name[20];
	short age;
	char tele[12];
	char sex; 
};//�ṹ��������һ����䣬���ķֺŲ���ȱ�� 
int main()
{
	struct stu s;	    
	return 0;
}*/


/*#include<stdio.h>
typedef struct stu
{
	char name[20];
	short age ;
	char tele[12];
	char sex;
}stu;//��struct stu���¶���Ϊstu 
int main()
{
	stu s;
	return 0;
}*/


/*#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char *pc;
};
int main()
{
char arr[]="hello,bit\n";
struct T t={"hello",{100,'w',"hello world",3.14},arr};
printf("%s\n",t.ch);
printf("%s\n",t.s.arr);
printf("%lf\n",t.s.d);
printf("%s\n",t.pc);
	return 0;
}*/


#include<stdio.h>
typedef struct Stu
{
	char name[20];
	short age;
	char tele [12];
	char sex[5];
}Stu;
 void Print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
	
}
void Print2(Stu*ps)
{
    printf("name:%s\n",ps->name);
    printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);	
}
int main()
{
	Stu s={"����",40,"12345678901","��"};
	Print1(s); 
	Print2(&s);
	//Print2��������Print1�����˷ѿռ� 
	return 0;
}
