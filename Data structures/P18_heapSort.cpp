#include <iostream>

using namespace std;

// Function to swap two elements
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Heapify the given subtree rooted at index i
void heapify(int arr[], int n, int i)
{
    // Find the largest element among the root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap the largest element with the root if needed, and heapify the modified subtree
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Sort the given array using heap sort
void heapSort(int arr[], int n)
{
    // Build the heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one from the heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Move the current root to the end
        swap(arr[0], arr[i]);

        // Heapify the modified heap
        heapify(arr, i, 0);
    }
}
int main()
{
    int arr[] = {5, 2, 9, 1, 3, 7, 4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
