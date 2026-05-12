#include <iostream>
#include <vector>
#include <string>
using namespace std;


void problem1() {
    vector<int> nums = {3, 7, 2, 9, 5, 8, 1, 4, 6, 10};

    cout << "\n--- Problem 1 ---\n";
    cout << "3rd number: " << nums[2] << endl;

    nums.pop_back();

    cout << "Numbers after removing last:\n";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;
}


void problem2() {
    vector<int> v;
    int choice;

    cout << "\n--- Problem 2 ---\n";

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
}


void problem3() {
    vector<string> colors;
    string color, again;

    cout << "\n--- Problem 3 ---\n";

    do {
        cout << "Enter a favorite color: ";
        cin >> color;
        colors.push_back(color);

        cout << "Add another? (yes/no): ";
        cin >> again;

    } while (again == "yes");

    cout << "\nYour favorite colors:\n";
    for (string c : colors) {
        cout << c << endl;
    }
}

void greet(const vector<string>& names) {
    cout << "\nHello ";
    for (const string& n : names) {
        cout << n << " ";
    }
    cout << "!\n";
}

void problem4() {
    int count;
    cout << "\n--- Problem 4 ---\n";
    cout << "How many names do you have? ";
    cin >> count;

    vector<string> names(count);
    for (int i = 0; i < count; i++) {
        cout << "Enter name #" << (i + 1) << ": ";
        cin >> names[i];
    }

    greet(names);
}

int main() {
    cout << "Running all 4 vector programs...\n";

    problem1();
    problem2();
    problem3();
    problem4();

    cout << "\nAll programs complete.\n";
    return 0;
}
