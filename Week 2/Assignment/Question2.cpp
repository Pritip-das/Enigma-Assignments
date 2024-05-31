#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArr[MAX_SIZE * 2];
    int n1, n2; 

    
    cout << "Enter the size of arr1: ";
    cin >> n1;
    cout << "Enter " << n1 << " elements for arr1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
        mergedArr[i] = arr1[i]; 
    }

    
    cout << "Enter the size of arr2: ";
    cin >> n2;
    cout << "Enter " << n2 << " elements for arr2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
        mergedArr[n1 + i] = arr2[i];
    }

    cout << "Merged array in reverse order: ";
    for (int i = n1 + n2 - 1; i >= 0; i--) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

