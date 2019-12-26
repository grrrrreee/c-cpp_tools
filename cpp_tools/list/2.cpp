#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int main() {
    list<int> list1;
    list<int>::iterator list11;

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);

    // 1
    list11=list1.begin();
    // 3
    advance(list11, 2);
    // 3
    cout << *list11 << endl;
    // 5
    int a = 2 + *list11;
    cout << a << endl;
}