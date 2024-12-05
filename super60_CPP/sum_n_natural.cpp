#include <iostream>
using namespace std;

int main(){

    cout<<"hello world"<<endl;

    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i < n+1; i++)
    {
        sum = sum +i;
    }

    cout<<"Sum = "<<sum<<endl;
    

    return 0;
}