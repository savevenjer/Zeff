#include <iostream>
#include <string>
using namespace std;
int main()
{    int age;
	 float w;
	 float h;
	float bmi;
	 string name,sex;
	
	cout<<"Enter name :";
	cin>> name;
	cout<<"Enter age  :";
	cin>> age;
	cout<<"Enter Gender :";
	cin>> sex;
	cout<<"Enter Weight :";
	cin>> w;
	cout<<"Enter Height :";
	cin>>h;
	bmi = w / (h/100 * h/100) ;
	cout<<"BMI : "<< bmi <<endl;
	
	

	if (bmi <= 18.5) cout <<"underweight\n";
		else if(bmi<= 25) cout<<"normal\n";
		else if(bmi<=30) cout<<"overweight\n";
		else if(bmi<=40) cout<<"Obesity\n";
		
		system("pause");	
		
}