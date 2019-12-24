#include <iostream>
#include <string>

using namespace std;

enum Alphabet {
    A,
    B,
    C,
    D,
    E,
    F,
    G
};

void showAlphabet(Alphabet alphabet) {
    switch(alphabet) {
        case A:
            cout << "A";
            break;
        case B:
            cout << "B";
            break;
        case C:
            cout << "C";
            break;
        case D:
            cout << "D";
            break;
        case E:
            cout << "E";
            break;
        case F:
            cout << "F";
            break;
        case G:
            cout << "G";
            break;
        default:
            cout << "Unknown";
            break;
    }
}

int main() {
    cout << "input the alphabet : " ;
    cin >> Alphabet;
}