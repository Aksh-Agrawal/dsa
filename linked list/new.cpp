#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, element, position;

    cout << "Enter number of elements (max 100): ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert at (0 to " << n << "): ";
    cin >> position;

    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
