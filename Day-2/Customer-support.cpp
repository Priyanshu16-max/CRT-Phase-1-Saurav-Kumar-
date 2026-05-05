#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. General Support" << endl;
    cout << "2. Billing Support" << endl;
    cout << "3. Technical Issue" << endl;
    cout << "4. Exit"           << endl;
    cout << "0. Talk to Agent"  << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "General Support  - Visit our FAQ."          << endl; break;
        case 2: cout << "Billing Support  - Have your invoice ready." << endl; break;
        case 3: cout << "Technical Issue  - Try restarting device."   << endl; break;
        case 4: cout << "Goodbye!"                                    << endl; break;
        case 0: cout << "Connecting to live agent. Please wait..."    << endl; break;
        default:cout << "Invalid Choice!"                             << endl;
    }

    return 0;
}