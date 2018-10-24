#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
  int rno;
  char name[20];
  int marks;	
};
int main()
{
struct student s[100];
int i,n;
printf("enter the size of student\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("enter the roll number of student\n");
  scanf("%d",&s[i].rno);
  printf("enter the name student\n");
  fflush(stdin);
  gets(s[i].name);
  fflush(stdin);
  printf("enter the marks of student\n");
  scanf("%d",&s[i].marks);
}
printf("\ndetail of student are \n");
for(i=0;i<n;i++)
{
  printf("the roll number of student : ");
  printf("%d\n",s[i].rno);
  printf("the name student           : ");
  fflush(stdin);
  puts(s[i].name);
  fflush(stdin);
  printf("the marks of student       : ");
  printf("%d\n",s[i].marks);
}

 getch();
 return 0;	
}

