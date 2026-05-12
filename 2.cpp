#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int choice;

    do {
        cout << "\n1. Add Element\n2. Display Vector\n3. Vector Size\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int x;
            cout << "Enter number to add: ";
            cin >> x;
            v.push_back(x);
        }
        else if (choice == 2) {
            cout << "Vector: ";
            for (int n : v) cout << n << " ";
            cout << endl;
        }
        else if (choice == 3) {
            cout << "Size: " << v.size() << endl;
        }

    } while (choice != 4);

    return 0;
}
