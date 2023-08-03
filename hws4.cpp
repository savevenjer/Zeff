#include<iostream>
#include<string>
using namespace std;
int main()
{
	int f;
	int s;
	int t;
	int m;
	int F;
	float t1;
	float t2;
	cout << "========QUIZZES=========" << endl;
	cout << "Enter first quizz(10)    :";
	cin  >> f;
	cout << "Enter second quizz(10)    :";
	cin  >> s;
	cout << "Enter third quizz(10)    :";
	cin  >> t;
	cout << "========MID-TERM========="<<endl;
	cout << "Enter mid-term(40) :";
	cin  >> m;
	cout << "========Final========="<<endl;
	cout << "Enter final(50) :";
	cin  >> F;
	t1 = ((f + s + t) / 3.0f);
	cout << "Quizz total:" << t1 ;
	cout << "\nMid term : " << m;
	cout << "\nfinal : " << F << endl;
	t2 = ((t1 + m + F));
	cout << "total :" << t2<<endl;
	cout << ((t2 >= 50) ? "You score is pass " : "You score is fall.") << endl;
	system("pause");
	return(0);
}