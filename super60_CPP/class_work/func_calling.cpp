#include <iostream>
using namespace std;

void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void callByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}

int main()
{
    int a = 1, b = 2;

    cout << "before changing using call by value"<<endl<<"a = "<<a<<endl<< "b = "<<b<<endl;
    callByValue(a,b);
    cout << "after changing using call by value"<<endl<<"a = "<<a<<endl<< "b = "<<b<<endl;

    cout<<"<---------------------------XXX--------------------------->"<<endl;

    cout << "Before changing using call by reference"<<endl<<"a = "<<a<<endl<< "b = "<<b<<endl;
    callByReference(&a,&b);
    cout << "After changing using call by reference"<<endl<<"a = "<<a<<endl<< "b = "<<b<<endl;


        return 0;
}