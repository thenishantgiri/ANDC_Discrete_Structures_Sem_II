/*
Program 6:

Write a Program to implement Tower of Hanoi using recursion.
*/

#include <iostream>
using namespace std;

int TOH(int n)
{
    if (n == 1)
        return 1;
    else
        return (2 * TOH(n - 1) + 1);
}

int main()
{
    int n, m;
    cout << "\nEnter the no. of discs: ";
    cin >> n;
    m = TOH(n);
    cout << "\nNo. of moves taken are: " << m;
}
