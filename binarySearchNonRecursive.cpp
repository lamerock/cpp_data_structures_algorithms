// Binary Search Algorithm Non-Recursive
#include <iostream>

using namespace std;

int main()
{
    int number[25], n, data, i, flag = 0, low, high, mid;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements in ascending order: "; 
    for (i = 0; i < n; i++){
        cin >> number[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> data;
    
    low = 0;
    high = n-1;
    
    while(low <= high){
        mid = (low + high) / 2;
        if (number[mid] == data){
            flag = 1;
            break;
        }
        else {
            if (data < number[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    if (flag == 1){
        cout << endl << "Data found at location: " << mid + 1;
    }
    else {
        cout << endl << "Data not found!";
    }

    return 0;
}
