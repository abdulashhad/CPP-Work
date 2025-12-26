#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; 
    int i = low + 1;      
    int j = high;        

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) i++; 
        while (i <= j && arr[j] > pivot) j--; 
        if (i < j) { 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; 
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    srand(time(0));

    cout << "Randomly generated elements: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generates a random number between 0 and 99
       // cout << arr[i] << " ";
    }
    cout << endl;

    clock_t start = clock();
    quickSort(arr, 0, n - 1);
    clock_t end = clock();

    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken to sort the array: " << time_taken << " seconds." << endl;

    return 0;
}








 