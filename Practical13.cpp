/*
Program 13:

Write a Program to accept the truth values of variables x and y, and print the truth table of the following logical operations:

a) Conjunction      f) Exclusive NOR
b) Disjunction      g) Negation
c) Exclusive OR     h) NAND
d) Conditional      i) NOR
e) Bi-conditional 	
*/

#include <iostream>
using namespace std;

int main()
{
    int x[4], y[4], dis[4], con[4], NOR[4], NAND[4], Cond[4], Bicond[4], Negx[4], Negy[4];
    char ch;
    do
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter the"
                 << " " << (i + 1) << " "
                 << "value of x and y" << endl;
            cin >> x[i] >> y[i];
            dis[i] = x[i] | y[i];
            con[i] = x[i] & y[i];
            NOR[i] = !dis[i];
            NAND[i] = !con[i];
            Cond[i] = !x[i] | y[i];
            Bicond[i] = ((!x[i] | y[i]) & (!y[i] | x[i]));
            Negx[i] = !x[i];
            Negy[i] = !y[i];
        }

        cout << "x |y  |or |and|NOR|NAND|Cond|Bicond|Negx|Negy" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << x[i] << " | " << y[i] << " | " << dis[i] << " | " << con[i] << " | " << NOR[i] << " | " << NAND[i] << "  | ";
            cout << Cond[i] << "  |" << Bicond[i] << "     |" << Negx[i] << "   |" << Negy[i] << endl;
        }

        cout << "do you want to continue(y/n)\n";
        cin >> ch;
    } while (ch == 'y');

    return 0;
}
