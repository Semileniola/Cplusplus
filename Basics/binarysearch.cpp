#include <iostream>

using namespace std;

int aray[10] = {1, 0, 34, 0, 1, 56, 23, 1, 0};

void search(int aray[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (aray[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Data found: " << target << endl;
    } else {
        cout << "Data not found" << endl;
    }
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    search(aray, 10, num);

    return 0;
}
