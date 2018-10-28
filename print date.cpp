#include<iostream>
#include<conio.h>
using namespace std;
class date 
{
 private:
 	int day,month,year;
 public:
 void read(int d,int m,int y)
 {
   day=d;
   month=m;
   year=y;  	
 }
 void show()
 {
    cout<<day<<"-"<<month<<"-"<<year<<endl;	
 }	
};
int main()
{
 date d1;
 cout<<"yesterday date is = ";
 d1.read(23,4,2018);	
 d1.show();
 cout<<"today date is     = ";
 d1.read(24,4,2018);	
 d1.show();
 cout<<"tommorrow date is = ";
 d1.read(25,4,2018);	
 d1.show();
 getch();
 return 0;
}
