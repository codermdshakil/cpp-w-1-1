#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 5;

    // create a pointer and stored other variable address
    // int *a_ptr = &a;

    // cout << a << endl;
    // cout << &a << endl;

    // dereference using variable address get variable value
    // cout << *a_ptr << endl; // 5

    // int x = 100;
    // int *x_ptr = &x;

    // using dereference change x variable value
    // *x_ptr = 500;
    // cout << x << endl;

    int a = 5;
    int *b = &a;

    // store pointer of pointer address
    int **c = &b;

    cout << &a << endl; // 0x61ff08
    cout << b << endl;  // 0x61ff08

    // get value of a using **
    cout << **c << endl; // 5

    return 0;
}

/**
 * Summary
 *  * pointer variable = value
 *  & pointer variable = address
 *  Dereference - Using variable address get variable value it's called Dereference
 *
 */