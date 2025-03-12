#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char ch = 'a';
    cout << ch << endl;
    cout << +ch << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    return 0;
}