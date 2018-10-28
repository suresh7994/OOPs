#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
 private:
 int roll,marks;
 char name[20];
 public:
 void read()
 {
  cout<<"enter the roll number of student "<<endl;
  cin>>roll;
  cout<<"enter the name of student "<<endl;
  cin.ignore();
  cin.getline(name,20);	
  cout<<"enter the marks number of student "<<endl;
  cin>>marks;		
 }
 void show()
 {
  cout<<"the roll number of student  = ";
  cout<<roll<<endl;
  cout<<"the name of student         = ";
  cout<<name<<endl;
  cout<<"the marks number of student = ";
  cout<<marks<<endl;		 	
 }	
};
int main()
{
 student s[10]	;
 int i,n;
 cout<<"enter the number of student"<<endl;
 cin>>n;
 cout<<"enter the detail of student"<<endl;
 for(i=0;i<n;i++)
 {
  s[i].read();	
 }
 cout<<" the detail of student"<<endl;
 for(i=0;i<n;i++)
 {
  s[i].show();	
 }
 getch();
 return 0;
}
