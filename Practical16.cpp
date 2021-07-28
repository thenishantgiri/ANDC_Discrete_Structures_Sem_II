/*
Program 16: 

Write a Program to represent Graphs using the Adjacency Matrices and check if it is a complete graph.
*/

#include <iostream>
using namespace std;

int main()
{
    char choice;
    int v = 0;
    int flag = 0, q;
    cout << "enter the number of vertices";
    cin >> v;
    int ar[v][v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << "\n How many edge from " << (char)(97 + i) << " to " << (char)(97 + j) << " - ";
            cin >> ar[i][j];
        }
    }

    cout << "the adjancy matrix of graph is \n";
    for (int k = 0; k < v; k++)
    {
        cout << endl;
        for (int l = 0; l < v; l++)
            cout << ar[k][l] << " ";
    }

    for (int p = 0; p < v; p++)
    {
        cout << endl;
        for (int q = 0; q < v; q++)
        {
            if ((p != q) && (p < q))
            {
                if (ar[p][q] != 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        cout << "this is a not complete graph\n";
    }
    else
    {
        cout << "this is a complete graph\n";
    }
}