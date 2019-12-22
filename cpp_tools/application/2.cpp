#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int i,j,k,l,n;
    cout << "enter the value : ";
    cin  >>  i;
    cout << "enter the number : ";
    cin >> n;
    j = pow(10,n);
    l = i % j;
    k = i-l; k = k/ pow(10,n);
    cout << "the value of i : " << i << endl;
    cout << "the value of j : " << j << endl;
    cout << "the value of k : " << k << endl;
    cout << "the value of l : " << l << endl;
    cout << i << "is divided to " << k << "  " << l << endl;  
    /*
    i : 1101110, n : 3, k : 1101, l : 110
    */
}