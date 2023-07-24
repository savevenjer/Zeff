#include <iostream>
#include <string> 
using namespace std;
int main()
{ 
	int s ;
	cout<<"Enter score    :";
	cin>>s;
	cout<<((s>=50)?"You pass with score ":"You fall with score.")<<s<<endl;
	system("pause");
	return(0);
}