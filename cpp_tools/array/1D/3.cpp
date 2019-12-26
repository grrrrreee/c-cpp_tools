#include <iostream>
#include <list>

using namespace std;

int* test(int a, int b) {
    int* pointer;
    int info[1];
    pointer = info;
    info[0] = a;
    info[1] = b;
    return pointer;
}

int main() {
    int* ptr = test(10, 20);
}
