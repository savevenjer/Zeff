#include <iostream>
using namespace std;
void CalCircle();
void Calrec();

int main()
{	char ch;
	do{ 
		cout<<"Program Calculate of Circle."<<endl;
		cout<<"****************************"<<endl;
		cout<<"1.Circle"<<endl;
		cout<<"2.Rectangle"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Choose Menu :";
		cin>>ch;
		if(ch == '1') CalCircle();
			else if(ch == '2') Calrec();
				else if(ch == '3') cout<<"Exit"<<endl;
				else cout<<"wrong Menu"<<endl;

		
	}while(ch != 3);
	system("pause");
	return(0);
}

void CalCircle()
{
	float Radius,Area,Circumference;
	cout<<"input radius :";
	cin>>Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;
	cout<<endl;
	cout<<"Area of circle :"<<Area<<endl;
	cout<<"Circumference of circle :"<<Circumference<<endl;
	cout<<"Diameter of circle :"<<(2*Radius)<<endl;
}

void Calrec()
{
	float H,L,sum;
	cout<<"in put width"<<endl;
	cin>>H;
	cout<<"in put length"<<endl;
	cin>>L;
	sum = H*L;
	cout<<endl;
	cout<<"Area of Rectangle : "<<sum<<endl;
}

