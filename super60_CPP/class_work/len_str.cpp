#include <iostream>
using namespace std;

char* reversed(int len, char str[]){
    char rv[40];
    char*pr = rv;
    int l=len-1;
    for(int i = 0; i<len;i++){
        rv[i] = str[l];
        l=l-1;
    }
    
    return pr;
}

int palindrome(char str1[], char str2[], int len){
    for(int i = 0; i<len; i++){
        if(str1[i]==str2[i]){
            continue;
        }
        else
        return 0;
    }

    return 1;
}

int main()
{
    char name[40] = "Prateek";

    cout<<"Please enter a string: ";
    cin>>name;
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count = count + 1;
    }
    cout<<"Length of '"<<name<< "' is "<< count<<endl;
    cout<<"reversed = "<<reversed(count,name)<<endl;

    if(palindrome(name, reversed(count,name),count)){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not sorry"<<endl;
    }

    return 0;
}