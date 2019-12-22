#include <iostream>
#define ROW 3
#define COL 3
//define, array, insert value
using namespace std;

int main() {
    int a = 7 % 5;
    cout << a << endl;
    int arr[ROW][COL] = {0};
    arr[1][a] = {3};
    /*
    0 0 0
    0 0 3
    0 0 0
    */
    for(int i=0; i <COL; i ++) {
        puts(" ");
        for(int j=0; j <ROW; j++) {
            printf("%d", arr[i][j]);
        }
    }
    puts(" ");
}