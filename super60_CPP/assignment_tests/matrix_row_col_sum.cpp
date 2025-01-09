#include <iostream>
using namespace std;

int main()
{
    int mat[3][3];
    cout << "Enter values in the matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Your matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of rows: " << endl;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + mat[i][j];
        }
        cout << "row"<<j+1<<" = " << sum << endl;
    }

    return 0;
}
