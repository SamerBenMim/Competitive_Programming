// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}



void buildMaxHeap(int* arr ,int n){
	for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}



// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    buildMaxHeap(arr,n);

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
void printTree(int * t ,int n){
//	int h = floor(log2(n))+1 ;
cout<<"			"<<t[0]<<endl;
cout<<"		"<<t[1]<<"		"<<t[2]<<endl;	
cout<<"	      "<<t[3]<<"    	"<<t[4]<<"  	"<<t[5]<<"  	"<<t[6]<<endl;
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 ,5};
    int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = n / 2 - 1; i >= 0; i--)
	printTree(arr,7);

//
//    heapSort(arr, n);
//
//    cout << "Sorted array is \n";
//    printArray(arr, n);
}
