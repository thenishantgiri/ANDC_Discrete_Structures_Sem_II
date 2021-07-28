/*
Program 5:

Write a Program to generate the Fibonacci Series using recursion.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int n)
{
    if ((n == 0) || (n == 1))
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
    int n, i = 0;
    cout << "enter the size of fibonacci series" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "error!!!!";
        exit(0);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << " " << fibonacci(i);
        }
    }
    getch();
    return 0;
}