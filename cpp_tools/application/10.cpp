#include <iostream>
#include <list>

using namespace std;

int main() {
    int arr[2] = {0};
    arr[0] = {2};
    arr[1] = {2};
    
    int a = arr[0];
    int b = arr[1];
    int c = a+b;
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;
    cout << "c is : " << c << endl;
    
    int arr2[4][4] = {0};
    arr2[a][b] = {c};
    for (int i=0; i<4; i++) {
        puts(" ");
        for(int j=0; j<4; j++){
            printf("%d", arr2[i][j]);
        }
    }
    puts(" ");
}