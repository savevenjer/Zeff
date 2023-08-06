#include <iostream>
#include <string>
using namespace std;

int main() 
{  
    string a, b, c;
    int num1, num2, num3, sum;

    cout << "Enter Character (A,B,C) : ";
    cin >> a;

    if (a == "A") {
        num1 = 10;
    }
    else if (a == "B") {
        num1 = 20;
    }
    else if (a == "C") {
        num1 = 30;
    }
    else {
        num1 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> b;

    if ( b == "A") {
        num2 = 10;
    }
    else if ( b == "B") {
        num2 = 20;
    }
    else if ( b == "C") {
        num2 = 30;
    }
    else {
        num2 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> c;

    if (c == "A") {
        num3 = 10;
    }
    else if (c == "B") {
        num3 = 20;
    }
    else if (c == "C") {
        num3 = 30;
    }
    else {
        num3 = 0;
    }

    sum = num1 + num2 + num3;

    cout << "A = " << num1 << " , B = " << num2 << " , C = " << num3 << endl;
    cout << "A + B + C = " << num1 << " + " << num2 << " + " << num3 << " = " << sum << endl;

    return 0;
}


