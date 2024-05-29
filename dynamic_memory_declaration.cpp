#include <bits/stdc++.h>
using namespace std;

int main()
{

    // dynamic variable declaration
    // int *a = new int;
    // * a = 5;

    // cout << *a  << endl;
    // delete a; // delete dynamic memory

    // dynamic array declaration
    int *a = new int[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << i << " value " << a[i] << endl;
    }
    delete []a; // delete dynamic array 

    return 0;
}