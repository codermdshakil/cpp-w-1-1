#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    // create dynamic array
    int *ar = new int[n];
    // input value
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // sort assending order
    sort(ar, ar + n );
    return ar;
}

int main()
{

    // take size of array
    int n;
    cin >> n;

    // called sort_it fucntion
    int *p = sort_it(n);

    // print output
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}