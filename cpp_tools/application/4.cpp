#include <iostream>
#include <cmath>
#include <list>

using namespace std;

void address_divide() {
    int i,j,k,l_1,l_2,m,n_1,n_2;
    cout << "enter the value : ";
    cin >> i;
    cout << "enter the number : ";
    cin >>n_1;
    cout << "enter the number_2 : ";
    cin >> n_2;
    j = pow(10,n_1);
    l_1 = i % j;
    k = i-l_1; 
    k = k/pow(10, n_1);
    j = pow(10, n_2);
    l_2 = k % j;
    k = k -l_2;
    k = k/pow(10, n_2);
    cout << "the value of i : " << i << endl;
    cout << "the value of j : " << j << endl;
    cout << "the value of k : " << k << endl;
    cout << "the value of l_1 : " << l_1 << endl;
    cout << "the value of l_2 : " << l_2 << endl;
    cout << i << "is divided to " << k << "  " << l_2 << "  " << l_1 << endl;
}


int main() {
    address_divide();
}