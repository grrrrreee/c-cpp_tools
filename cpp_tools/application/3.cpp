#include <iostream>

using namespace std;

int main() {
    // build array
    int arr[4][4] = {0};
    // put value in the element
    arr[1][1] = {1};
    int i = 7;
    arr[1][0]= {i};
    /*
    0 0
    0 1
    */
    
    int a = 5 % 3;
    int b = 7 % 3;
    arr[a][b] = {9};
    
    for (int i=0; i<4; i++) {
    puts(" ");
        for (int j =0; j <4; j++) {
            printf("%d", arr[i][j]);
        }
    }
    puts(" ");
}
