#include <iostream>
using namespace std;

int main(){
    cout<<"hello there"<<endl;
    cout<<"Enter the starting and ending points of the range: ";
    int m,n;
    cin>>m>>n;
    cout<<"m=="<<m<<endl<<"n=="<<n<<endl;
    cout<<"Enter a number to check its presence: ";
    int x;
    cin>>x; 
    if (x>=m && x<=n){
        cout<<"Inside range";

    }
    else{
        cout<<"Outside range";
    }

    return 0;

}