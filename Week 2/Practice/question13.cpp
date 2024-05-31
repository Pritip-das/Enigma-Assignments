#include <iostream>
using namespace std;


void inputArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}
void printArray(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void addArrays(int arr1[][3], int arr2[][3], int result[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main() {
    int arr1[3][3];
    int arr2[3][3];
    int sumArr[3][3];

    cout << "Enter elements for the first 3x3 array:" << endl;
    inputArray(arr1, 3, 3);

    cout << "Enter elements for the second 3x3 array:" << endl;
    inputArray(arr2, 3, 3);

    addArrays(arr1, arr2, sumArr);

    cout << "Sum of the two arrays:" << endl;
    printArray(sumArr, 3, 3);

    return 0;
}
