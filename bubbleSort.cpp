// Bubble Sort Algorithm
#include <iostream>

using namespace std;

void bubble_sort(int x[], int n){
    int i, j, t;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-1; j++){
            //use ">" to sort in ascending order
            //or use "<" to sort in descending order
            if (x[j] > x[j+1]){
                t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    }
}

int main()
{

    int i, n, x[25];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the data to be sorted: ";
    // code to store the elements inside the array
    for (i = 0; i < n; i++){
        cin >> x[i];
    }
    bubble_sort(x, n);
    cout << "Array elements after sorting: ";
    //code to display the contents of the Array
    for (i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    return 0;
}
