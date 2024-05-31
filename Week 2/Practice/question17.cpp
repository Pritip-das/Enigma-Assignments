#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxCount = 0;
    int mostOccurredElement = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++; 
            }
        }
        if (count > maxCount) {
            maxCount = count; 
            mostOccurredElement = arr[i]; 
        }
    }
    cout << "Most occurred element is: " << mostOccurredElement << endl;

    return 0;
}
