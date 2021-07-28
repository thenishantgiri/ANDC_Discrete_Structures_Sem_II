/*
Program 11:

Write a Program to calculate Permutation and Combination for an input value n and r using recursive formula of nCr and nPr.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int perm(int n, int r)
{
    if (r > n)
        return 0;
    else
    {
        if (r == 0)
            return 1;
        else
            return (n * perm(n - 1, r - 1));
    }
}

int comb(int n, int r)
{
    if (r > n)
        return 0;
    else if ((n == 0) | (r == 0) | (n == r))
        return 1;
    else
        return (comb(n - 1, r - 1) + comb(n - 1, r));
}

int main()
{
    int n, r, ch, a, b, ch1;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << "enter the value of r" << endl;
    cin >> r;
    cout << "enter your choice" << endl
         << "1.permutation" << endl
         << "2.combination" << endl
         << "3.exit" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        a = perm(n, r);
        cout << "permutation is " << a << endl;
        break;
    case 2:
        b = comb(n, r);
        cout << "combination is " << b << endl;
        break;
    case 3:
        exit(0);
    default:
        cout << "wrong choice";
    }
    getch();
}
