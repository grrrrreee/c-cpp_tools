#include <iostream>

using namespace std;

int main() {
    int arr[2][2] = {0};
    arr[1][1] = {1};
    // the code will show the result
    for (int i=0; i<2; i++) {
    puts(" ");
        for (int j =0; j <2; j++) {
            printf("%d", arr[i][j]);
        }
    }
    puts(" ");
}