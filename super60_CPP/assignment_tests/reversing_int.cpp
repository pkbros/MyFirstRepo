#include <iostream>
using namespace std;

int reverser(int a){
    int rev;
    rev = 0;
    while(a!=0){
        // increasing a zero to add a digit
        rev = rev * 10;
        // adding the last digit here
        rev = rev + a%10;
        // removing that last digit
        a=a/10;
    }
    // returning the reversed value 
    return rev;
}

int main(){
    cout<<"Please give a number: ";
    int a;
    cin>>a;
    cout<<"original = "<<a<<endl<<"reversed = "<<reverser(a)<<endl;

    return 0;
}