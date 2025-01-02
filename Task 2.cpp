#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int arr[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        cout << "Enter 6 numbers : ";
        cin >> arr[i];
    }

    int *ptr = arr;

    for (int i = 0; i < size; i++)
    {

        sum += *ptr;
        ptr++;
    }

    cout << "Average : " << sum / size << endl;
    return 0;
}
