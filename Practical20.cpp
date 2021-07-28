/*
Program 20:

Given a full m-ary tree with i internal vertices, write a program to find the number of leaf nodes.
*/

#include <iostream>
using namespace std;
int main()
{
    int m, l, i;

    cout << "enter the degree of tree:";
    cin >> m;

    cout << "enter the value of internal vertices:";
    cin >> i;

    l = i * (m - 1) + 1;

    cout << "the number of leaves:" << l << endl;
}
