#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void displaymenu();
float Area(const float r);
float Area(const float Length,const float Widht);
float Area(const double base,const double high);
float Area(const float w1,const float w2,const float h);
int main()
{
	char Choice;
	bool flag = true;
	do{
			displaymenu();
			cin>>Choice;
			if(Choice == '1'){
					float r;
					cout<<"\nEnter radius :";
					cin >> r;
					cout<<"Area of Circle = " <<fixed;
					cout<<setprecision(2)<<Area(r)<<endl;
			}
			else if(Choice == '2'){
					float Length,Widht;
					cout<<"Enter length and width : ";
					cin >> Length >> Widht;
					cout<<"Area of Rectangle = "<<fixed;
					cout<< setprecision(2)<<Area(Length,Widht);
					cout<<endl;
			}
			else if(Choice == '3'){
					float base,high;
					cout<<"Enter Area of Triangle : ";
					cin>> base >>high;
					cout<<"Area of Triangle : "<<fixed;
					cout<<setprecision(2)<<Area(base,high);
					cout<<endl;
			}
			else if(Choice == '4'){
					float w1,w2,h;
					cout<<"Enter Area of Trapezoid :";
					cin>>w1>>w2>>h;
					cout<<"Area of Trapezoid : "<<fixed;
					cout<<setprecision(2)<<Area(w1,w2,h);
					cout<<endl;
			}

			else if(Choice == '5') flag = false;
			else {
				cout<<"\nYou choose out of range is ";
				cout<<"not process.\n";
			}
	}while(flag);
	cout <<"\n...Exit Program...\n";
	return(0);
}

float Area(const float r)
{
	return(3.14159f * r * r);
}
float Area(const float Length,const float Widht)
{
	return(Length*Widht);
}
float Area(const double base,const double high)
{
	return(0.5 *base *high);
}
float Area(const float w1,const float w2,const float h)
{
	return((w1+w2)*0.5*h);
}

void displaymenu()
{
	cout << endl;
	cout <<" Program Calculate Area"<<endl;
	cout <<" 1.Clrcle"<<endl;
	cout <<" 2.Rectangle"<<endl;
	cout <<" 3.Triangle"<<endl;
	cout <<" 4.Trapezoid"<<endl;
	cout <<" 5.Exit"<<endl;
	cout <<" Enter your choose number : ";
}
