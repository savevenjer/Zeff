#include <iostream>
#include <string>
using namespace std;
int main()
{	
	int num[4];
	int total=0;
	int min=999;
	int max=0;
	string name[4];
	for(int i=0;i<4;i++)
	{	cout<<"Enter Name["<< i<<"] :";
		cin>>name[i];
		cout<<"Enter Score["<< i <<"] :";
		cin>>num[i];
		
	}
	
	cout<<"-----------------------\n";
	cout<<"Name            Score\n";
	cout<<"-----------------------\n";
	for(int i=0; i<4;i++)
	{
		cout<<name[i]<<"\t\t"<<num[i]<<endl;
		total = total+num[i];
		if(num[i]>max)
			max = num[i];
		else if(num[i]<min)
			min = num[i];
	}
		cout<<"-----------------------\n";
		cout<<"Max Score"<<max<<endl;
		cout<<"Min Score"<<min<<endl;
		cout<<"Total = "<<total<<endl;
		cout<<"Average = "<<(float)total/4<<endl;
	system("pause");
	return 0;
}
