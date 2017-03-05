#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUM 1
#ifndef SUM
#error "sdfasdfasd"
#endif
struct pack{
int a;
long b;
char c;
};
typedef struct student{
 char name[20];
 char sex;
}student1;
int layout(char *mess)
{
	int i;
	for(i=0;i<20;i++)
	{
		if(mess[i]==0)
			return 0;
		else if(!(mess[i]>='0'&&mess[i]<='9'||mess[i]>='a'&&mess[i]<='z'||mess[i]>='A'&&mess[i]<='Z'))
			mess[i]=0;
	}
}
int main()
{
	struct pack pack1;
	//struct student student1;
	struct student s[10];
	struct student *p;
	student1 student2;
	struct student student3;
	student1 student1;
	student1.sex=0;
	memcpy(student1.name,"Íõ¿­",sizeof("Íõ¿­"));
	printf("name%s\r\n",student1.name);
	while(1);
	char mess[20]={"6922868286553@$"};
	char pr[3]={0};
	pr[0]='9';
	printf("%d\r\n",'9');
	printf("%d\r\n",atoi(pr));
	printf("%.2f\r\n",(float)atoi(pr));
	layout(mess);
	printf("%s\r\n",mess);
	while(1);
	return 0;
}