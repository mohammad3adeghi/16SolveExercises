#include <iostream>
#include <cfloat>

using namespace std;
int main()
{
    int a,b,c;
    a = sizeof(int);
    b = sizeof(int long);
    c = sizeof(int long long);
    ///////////////////////////

    int floatSize,doubleSize,ldoubleSize;
    floatSize = sizeof(float);
    doubleSize = sizeof(double);
    ldoubleSize = sizeof(double long);

    cout << "SizeOfInformation" << endl;
    cout << "=================================" << endl;
    cout << "int: " << a << " byte => 1byte is equals with 8bit" << endl;
    cout << "int long: " << b << " byte => 1byte is equals with 8bit" << endl;
    cout << "int long long: " << c << " byte => 1byte is equals with 8bit" << endl;
    cout << "Calculate Of The All DataTypes (Int) SizeOf: " << a + b + c << " byte" << endl;

    cout << "=================================" << endl;
    cout << "float: " << floatSize << " byte => 1byte is equals with 8bit" << endl;
    cout << "double: " << doubleSize << " byte => 1byte is equals with 8bit" << endl;
    cout << "double long: " << ldoubleSize << " byte => 1byte is equals with 8bit" << endl;
    cout << "Calculate Of The All DataTypes (float,double,doubleLong) SizeOf: " << floatSize + doubleSize + ldoubleSize << " byte" << endl;

    cout << "=================================" << endl;
    cout << "char: " << sizeof(char) << " byte => 1byte is equals with 8bit" << endl;

    cout << "=================================" << endl;
    cout << "boolean: " << sizeof(bool) << " byte => 1byte is equals with 8bit" << endl;

    cout << endl << endl;
    cout << "Minimum Value" << endl;
    cout << "=================================" << endl;

    cout << "int: " << INT_MIN << " minimum byte value" << endl;
    cout << "long: " << LONG_MIN << " minimum byte value" << endl;
    cout << "double: " << DBL_MIN << " minimum byte value" << endl;
    cout << "float: " << FLT_MIN << " minimum byte value" << endl;
    cout << "long double: " << LDBL_MIN << " minimum byte value" << endl;


    cout << "Maximum Value" << endl;
    cout << "=================================" << endl;

    cout << "int: " << INT_MAX << " maximum byte value" << endl;
    cout << "long: " << LONG_MAX << " maximum byte value" << endl;
    cout << "double: " << DBL_MAX << " maximum byte value" << endl;
    cout << "float: " << FLT_MAX << " maximum byte value" << endl;
    cout << "long double: " << LDBL_MAX << " maximum byte value" << endl;
}