#include <iostream>
using namespace std;

int main(){
    cout<<"Please enter three numbers as asked: "<<endl;

    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>b && a>c)
    cout<<a<<" is greatest among three";
    if(b>a && b>c)
    cout<<b<<" is greatest among three";
    if(c>a && c>b)
    cout<<c<<" is greatest among three";
    else{
        if(a==b and b==c)
        cout<<"All three are greatest";
        else
        cout<<"Two numbers are equally largest";
    }
    return 0;
}