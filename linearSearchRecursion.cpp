// Example program
#include <iostream>
#include <string>

using namespace std;

void linear_search(int a[], int data, int position, int n)
{
    int mid;
    if (position < n)
    {
        if (a[position] == data)
            cout << "Data found at " << position + 1;
        else
            linear_search(a, data, position + 1, n);
    }
    else
        cout << "Data not found";
}

int main()
{
    int a[25], i, n, data;
    cout << "Enter  the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> data;
    linear_search(a, data, 0, n);
}
