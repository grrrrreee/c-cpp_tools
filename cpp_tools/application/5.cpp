#include <iostream>
#include <cmath>
#include <list>

using namespace std;

// 지릿수 구하기
void seperate() {
    int a;
    cout << "input the number : " ;
    cin >> a;
    int num =0;
    while(a > pow(10,num)) {
        num = num+1;
    }
    cout << "num is : " << num << endl;
}

// 2387 , 4
// 2387는 4자리임. 

int main() {
    seperate();
}