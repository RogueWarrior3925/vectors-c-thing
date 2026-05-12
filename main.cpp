#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {3, 7, 2, 9, 5, 8, 1, 4, 6, 10};

    cout << "3rd number: " << nums[2] << endl;

    nums.pop_back();

    cout << "All numbers:" << endl;
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
