#include <iostream>
#include "tnayin1.h"
using namespace std;
void fun(int start, int end)
{
    for (int i = start; i <= end; i++) {
        cout << i << "\t";
    }
}
void fun1(int a, int b)
{
    int i = a;
    while (i <= b) {
        i++;
        cout << i << "\t";
    }
}
void fun2(int c, int d)
{
    int i = c;
    do {
        i++;
        cout << i << "\t";
    } while (i <= d);
}
void fun3(int t, int y)
{
    for (int i = t; i <= y; i++) {
        if (i % 2 == false) {
            cout << i << "\t";
        }
    }
}
int fun4(int q, int w)
{
    if (q > w) {
        return q;
    }
    return w;
}
void fun5(int day)
{
    switch (day) {
    case 1:cout << "erku" << "\t"; break;
    case 2:cout << "ereq" << "\t"; break;
    case 3:cout << "choreq" << "\t"; break;
    case 4:cout << "hing" << "\t"; break;
    case 5:cout << "urb" << "\t"; break;
    case 6:cout << "shabat" << "\t"; break;
    case 7:cout << "kiraki" << "\t"; break;
    default:cout << "eror" << "\t";
        break;
    }
}
void fun6(int s, int v, int m)
{
    if (s || v || m == 0) {
        cout << "yes" << "\t";
    }
    else if (s || v || m == 5) {
        cout << "yes" << "\t";
    }
    else if (s != v != m) {
        cout << "yes" << "\t";
    }
    else {
        cout << "no" << "\t";
    }
}
void fun7(int arr[], const int length)
{
    int max = 0;
    for (int i = 0; i < length; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << "\t";
}
void fun8(int j)
{
    for (; j <= 10; j++) {
        cout << j * j << "\t";
    }
    if (j > 10) {
        cout << "eror" << "\t";
    }
}
void fun9(int l, int o)
{
    int sum = 0;
    for (; l <= o; l++) {
        if (l % 2 == true) {
            sum += l;
            cout << sum << "\t";
        }

    }
}
