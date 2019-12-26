#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    // jhnyang.tistory.com/115
    string str1 = "hi";
    string str2 = "hello";
    string str3("hi!!");
    string str4 = "안녕";
    string str5("안녕하세요.");
    //getting the byte of string. size() and length() are same
    //getting the length of string.
    //more precisely the number of characters in the string.
    cout << "length of str 1: " << str1.size() << endl;
    cout << "length of str 2: " << str2.size() << endl;
    cout << "length of str 3: " << str3.size() << endl;
    cout << "length of str 4: " << str4.size() << endl;
    cout << "length of str 5: " << str5.size() << endl;
}
