#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
 private:
 int real,img;
 public:
 void read()
 {
  cout<<"enter the real part"<<endl;
  cin>>real;
  cout<<"enter the imaginary part"<<endl;;
  cin>>img; 	
 }
 void show()
 {
  if(img<0)
  cout<<real<<img<<"i"<<endl;
  else
  cout<<real<<"+"<<img<<"i"<<endl;	
 }	
 void add(complex t1,complex t2);
};
 void complex::add(complex t1,complex t2)
 {
   	real=t1.real+t2.real;
  	img=t1.img+t2.img;
 }
int main()
{
 complex c1,c2,c3;
 c1.read();
 c2.read();
 c3.add(c1,c2);
 cout<<"first complex number is       = ";
 c1.show();
 cout<<"second complex number is      = ";
 c2.show();
 cout<<"addition of complex number is = ";
 c3.show();
 getch();
 return 0;
}
