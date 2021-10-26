// Binary Search Algorithm - Recursive
#include <iostream>

using namespace std;

void binary_search(int a[], int data, int low, int high){
    int mid;
    if (low <= high){
        mid = (low + high) / 2;
        if (a[mid] == data){
            cout << endl << "Data found at location: " << mid + 1;
        }
        else {
            if (data < a[mid]){
                binary_search(a, data, low, mid - 1);
            }
            else {
                binary_search(a, data, mid + 1, high);
            }
        }
    }
    else {
        cout << endl << "Data not found!";
    }
}

int main()
{
    int a[25], i, n, data;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in ascending order: "; 
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> data;
    binary_search(a, data, 0, n - 1);

    return 0;
}
