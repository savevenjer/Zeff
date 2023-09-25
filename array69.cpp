#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Input(int &numS,int Quizz[10],int Mid[10],int Final[10]);
void ViewAll(int &numS,int Quizz[10],int Mid[10],int Final[10]);
void ViewID(int &numS,int Quizz[10],int Mid[10],int Final[10]);
int main()
{	int numS=0;
	int Quizz[10],Mid[10],Final[10];
	char menu;
	do {
	cout<<"========================"<<"\n";
	cout<<"	MENU            "<<"\n";
	cout<<"========================"<<"\n";
	cout<<"Input Number of student  "<<"\n";
	cout<<"View all student records "<<"\n";
	cout<<"Show a student by ID"<<"\n";
	cout<<"Exit"<<"\n";
	cout << "Select Menu No.:";
    cin >> menu;
		if (menu == '1')
		{	Input(numS,Quizz,Mid,Final);
		}else if (menu == '2')
		{	ViewAll(numS,Quizz,Mid,Final);
		}else if (menu == '3')
		{	ViewID(numS,Quizz,Mid,Final);
		}else return(0);
	}while(menu !='4');
	return(0);

}
	

void Input(int &numS,int Quizz[10],int Mid[10],int Final[10])
{	cout<<"Input Number of student :";
	cin>>numS;
	for(int i = 0;i<numS;i++)
	{	cout<<"Number "<<i+1<<endl;
		cout<<"Input Quiz :";
		cin>>Quizz[i];
		cout<<"Input Midterm :";
		cin>>Mid[i];
		cout<<"Input Final :";
		cin>>Final[i];
		cout<<endl;
	}
}

void ViewAll(int &numS,int Quizz[10],int Mid[10],int Final[10])
{
	cout<<"-----------------------------"<<endl;
	cout<<"StdId   Quiz  Midterm  Final"<<endl;
	cout<<"-----------------------------"<<endl;
	for(int i =0;i<numS;i++)
	{	cout<<i+1<<setw(9)<<Quizz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
	}
	cout<<"-------------------------------------------"<<endl;
}
void ViewID(int &numS,int Quizz[10],int Mid[10],int Final[10])
{	int id;
	cout<<"In put ID :";
	cin>>id;
	for(int i =0; i<numS;i++)
	{	if(id == i+1)
		{	cout<<"-----------------------------"<<endl;
			cout<<"StdId   Quiz  Midterm  Final"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<i+1<<setw(9)<<Quizz[i]<<setw(9)<<Mid[i]<<setw(9)<<Final[i]<<endl;
			cout<<"-------------------------------------------"<<endl;
		}else 
		{	cout<<"Your ID is not found"<<endl;
		}

	}

}





		
	
	

