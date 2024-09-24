//
//  main.cpp
//  GameTime
//
//  Created by Arjun Trushen Patel on 9/23/24.
//

#include <iostream>

using namespace std;


void selectionSort(int arr[], int n)
{
    // traverse through all array elements. i and everything to the right is unsorted
    for(int i = 0; i < n-1; i++) {
        // find the minimum element in the remaining unsorted array
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if (arr[minIndex] > arr[j]) // this means element at j needs to be swapped
                minIndex = j;
        }
        
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    
    selectionSort(arr, n);
    printArray(arr, n);
    

}
