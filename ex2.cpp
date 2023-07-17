#include<iostream>
#include<string>
using namespace std;
int main()
{  string Name;
   int Year;
   cout<<"Enter Name:";
   cin>> Name;
   cout<<"Enter Year of birth:";
   cin>> Year;
   cout<<Name<<endl;
   cout<<"Your Age"<<Year-2566<<"Year old"<<endl;
   return(0);
}