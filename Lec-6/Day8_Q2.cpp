#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }
}