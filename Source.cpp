#include <iostream>

using namespace std;

int main()
{
    int matrix[3][3];

    cout << "Ingrese los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}