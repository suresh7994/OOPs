#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
 private:
 int real,img;
 public:
 void read();
 void show();
};
void complex::read()
 {
  cout<<"enter the real part"<<endl;
  cin>>real;
  cout<<"enter the imaginary part"<<endl;;
  cin>>img; 	
 }
 
 void complex:: show()
 {
 if(img<0)
 cout<<real<<img<<"i"<<endl;
 else
 cout<<real<<"+"<<img<<"i"<<endl;	
 }	

int main()
{
 complex c1;
 c1.read();
 cout<<"complex number is = ";
 c1.show();	
 getch();
 return 0;
}
