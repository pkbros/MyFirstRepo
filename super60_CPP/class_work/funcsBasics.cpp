#include <iostream>
using namespace std;

void display(){
    cout<<"i am a void function"<<endl;

}

int main(){
    for (int i = 0; i<10; i++){
        cout<<"its iteration "<< i <<" and ";
        display();
    }
    display();

    return 0;
}