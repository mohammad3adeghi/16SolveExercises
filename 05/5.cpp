#include <iostream>

using namespace std;
int main ()
{
    int num1,num2,num3,num4;
    num1 = 6;
    num2 = 7;
    num3 = 11;
    num4 = 23;

    // sum the all numbers;
    float sum = num1 + num2 + num3 + num4;

    float average = sum / 4;

    // print the sum all 4 numbers;
    cout << "Sum The 4 Number: " << sum << endl;
    // print the average numbers;
    cout << "Average Numbers: " << average << endl;
}