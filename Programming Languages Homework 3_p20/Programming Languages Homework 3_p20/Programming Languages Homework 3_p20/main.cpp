#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i;

    srand(time(0));

    for (i = 1; i <= 20; i++)
    {
        cout << 1 + (rand() % 6) << "\t";

        if (i % 5 == 0)
        {
            cout << endl;
        }
    }

    system("pause");
    return 0;
}