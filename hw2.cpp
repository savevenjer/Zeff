#include<iostream>
#include<string>
using namespace std;
int main()
{	string Name;
	int sa  ;
	int sale;
	float com ;
	cout<<"Enter Name   : ";
	cin>>Name ;
	cout<<"Enter Salary : ";
	cin>>sa;
	cout<<"Enter Sale   : ";
	cin>>sale;
	cout<<"Enter Commission Percent: " ;
	cin >> com;
	cout<<"**********output***********"<<endl;
	cout<<"Your Name:"<<Name <<endl;
	cout<<"Total Revenue: "<< sa+(sale*(com/100))<<"Bath" << endl;

	return(0) ;
   
   
  
}