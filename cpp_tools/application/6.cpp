#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> i;
    
    //5
    i.push_back(5);
    //5,6
    i.push_back(6);
    //1,5,6
    i.push_front(1);

    list<int>::iterator ii;

    cout << "list i is : ";
    for(ii = i.begin(); ii!= i.end(); ii++) {
        cout << *ii << " ";
    }

}
