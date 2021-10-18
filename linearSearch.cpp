// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number[25], n, data, i, flag = 0;
    cout << "Enter the number of elements: "; //9
    cin >> n;
    cout << "Enter the elements: "; //5, -4
    for (i = 0; i < n; i++)
        cin >> number[i];
    cout << "Enter the element to be searched: ";
    cin >> data;
    for (i = 0; i < n; i++)
    {
        if(number[i] == data)
        {
            flag = 1;
            break;
        }
            
    }
    if(flag == 1)
        cout << "Data found at location: "<< i+1;
    else
        cout << "Data not found";
}
