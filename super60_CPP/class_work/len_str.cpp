#include <iostream>
using namespace std;

int main()
{
    char name[10] = "Prateek";
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count = count + 1;
    }
    cout<<"Length of '"<<name<< "' is "<< count<<endl;

    return 0;
}