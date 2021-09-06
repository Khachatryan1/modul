#include <iostream>
#include "tnayin1.h"
using namespace std;
int main()
{
    fun(1, 10);
    fun1(10, 20);
    fun2(20, 30);
    fun3(30, 40);
    int p = fun4(1, 2);
    cout << p << "\t";
    fun5(6);
    fun6(1,2,6);
    const int length = 10;
    int arr[length] = { 1,5,2,6,96,35,62,31,24,75 };
    fun7(arr,length);
    fun8(9);
    fun9(3,5);

    return 0;
}

