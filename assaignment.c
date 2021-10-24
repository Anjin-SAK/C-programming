#include<stdio.h>
#include<stdio.h>
int main() 
{
	int age,b=0,s=0,a=0,count=0;
	while(count<15)

{printf("enter the age of person[%d]:",count+1);
scanf("%d",&age);
if(age>+0&&age<5)
b++;
else if(age>=6&&age<17)
s++;
else if (age>=18);
a++;
count++;
}
printf("the number of persons still a baby are",b);
printf("the number of persons attending to school are",s);
printf("the number of persons of adult age are",a);
}
