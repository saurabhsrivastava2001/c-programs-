#include<iostream>
using namespace std;

int main() {
    int **arr = new int*[3];
    for (int i = 0; i < 3; i++) {
        arr[i] = new int[3];
    }

    int *counter = new int(1);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = *counter;
            (*counter)++;
        }
    }

    int *max = new int(0);
    int *current = new int(0);

    for (int i = 0; i < 3; i++) {
        *current = 0;
        for (int j = 0; j < 3; j++) {
            *current += arr[i][j];
        }
        *max = (*current > *max) ? *current : *max;
    }

    cout << "Maximum row sum: " << *max << endl;

    for (int i = 0; i < 3; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete max;
    delete current;

    return 0;
}
