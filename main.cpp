#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    bool isNewUser = false;
    cout << isNewUser << endl;
    // true -> 1; false -> 0

    cout << boolalpha << isNewUser << endl;
    cout << noboolalpha << isNewUser << endl;
    return 0;
}