#include <iostream>

using namespace std;
int main()
{
    float Foot;
    cout << "Please Enter The Foot Value: ";
    cin >> Foot;

    float Meter = Foot * 0.3048;
    cout << "Foot To Meter: " << Meter;
}