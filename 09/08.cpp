#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "Old Value For Variable A: " << a << endl;
    int b;

    cout << "Please Enter The Number For Changed The Variable Value: ";
    cin >> b;

    a = b;

    cout << "Changed The Value From Variable A: " << a;
}