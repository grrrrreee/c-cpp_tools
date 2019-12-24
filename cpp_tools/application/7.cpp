#include <iostream>
#include <list>
#include <cmath>

using namespace std;

class separate {
    public :
    int a,num;
    int stage1(int a);
    int stage2(int a, int b);
    void stage3();
};

int separate::stage1(int a) {
    // a is the number
    // num is the digits
    int num =0;
    while(a > pow(10,num)) {
        num = num+1;
    }
    cout << "num is : " << num << endl;
    return num;
}

int separate::stage2(int a, int b){
    separate sp;
    b = sp.stage1(a);
    while(b != 0) {
        int c,d;
        c = pow(10,b-1);
        d = a % c;
        a = (a - d) / c;
        b--;
        cout << a <<endl;
        a = d;
    }
    return a;
}

int main() {
    separate sp;
    int a; cout << "a is : "; cin >> a;
    sp.stage1(a);
    int b;
    b= sp.stage1(a);
    sp.stage2(a, b);
}