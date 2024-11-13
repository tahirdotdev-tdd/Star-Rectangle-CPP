#include <iostream>

using namespace std;

int main()
{
    int m; // number of rows
    int n; // number of cols
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;

    for (int i = 1; i <= m; i++) // for number of rows
    {
        for (int i = 1; i <= n; i++) // for number of columns
        {
            cout << " * ";
        }
        cout << endl;
    }
}