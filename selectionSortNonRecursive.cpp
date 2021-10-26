// Selection Sort Algorithm - Non-Recursive
#include <iostream>

using namespace std;

void selection_sort(int a[25], int low, int high){
    int i = 0, j = 0, temp = 0, minindex = 0;
    for (i = low; i <= high; i++){
        minindex = i;
        for (j = i + 1; j <= high; j++ ){
            //use "<" to sort in ascending order
            //or use ">" to sort in descending order
            if (a[j] < a[minindex]){
                minindex = j;
            }
        }
        temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
    }
}

int main()
{
    int a[25], num, i = 0;
    cout << "Enter the number of elements: ";
    cin >> num;
    cout << "Enter the data to be sorted: ";
    // code to store the elements inside the array
    for (i = 0; i < num; i++){
        cin >> a[i];
    }
    selection_sort(a, 0, num - 1);
    cout << "Array elements after sorting: ";
    //code to display the contents of the Array
    for (i = 0; i < num; i++){
        cout << a[i] << " ";
    }

    return 0;
}
