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

void transposeArray(int arr[][3], int transposedArr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposedArr[j][i] = arr[i][j];
        }
    }
}

int main() {
    int array[3][3];
    int transposedArray[3][3];

    cout << "Enter elements for the 3x3 array:" << endl;
    inputArray(array, 3, 3);

    transposeArray(array, transposedArray);

    cout << "Original array:" << endl;
    printArray(array, 3, 3);

    cout << "Transposed array:" << endl;
    printArray(transposedArray, 3, 3);

    return 0;
}
