#include <iostream>
#include <list>

using namespace std;

int main() {
    // 0,0
    int arr[2] = {0};
    // 101, 111
    arr[0] = {101};
    arr[1] = {111};
    // a =101, b = 111, c = 212
    int a = arr[0];
    int b = arr[1];
    int c = a+b;
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;
    cout << "c is : " << c << endl;
}
