#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a = 2;
    int b = 4;
    // sum;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // subtract;
    int subtract = a - b;
    cout << "Subtract: " << subtract << endl;

    // Multiple;
    int Multiple = a * b;
    cout << "Multiple: " << Multiple << endl;

    // Division;
    int Division = a / b;
    cout << "Division: " << Division << endl;

    // Power;
    int Power = pow(a,b);
    cout << "Power: " << Power << endl;
}