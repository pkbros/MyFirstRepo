#include <iostream>
using namespace std;

int fact(int n){
    if (n==1){
        return 1;

    }
    else
    return n * fact(n-1);
}

int main(){
    cout<<"Enter a number to find factorial of: ";
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);

    return 0;
}