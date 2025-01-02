#include <iostream>
using namespace std;

void add(float *a, float *b, float *result)
{

    *result = *a + *b;

}
void subtract(float *a, float *b, float *result)
{

    *result = *a - *b;

}
void multiply(float *a, float *b, float *result)
{

    *result = *a * *b;

}
void divide(float *a, float *b, float *result)
{

    *result = *a / *b;

}
int main()
{

    float a, b, result;
    int choice;

    cout << "Select an operation : " << endl;
    cout << "1) Add 2) Subtract 3) Multiply 4) Divide " << endl;

    cout << "Enter your choice: " << endl;
    cin >> choice;

    if (choice < 1 || choice > 4)
    {

        cout << "Invalid choice. Please select a valid operation." << endl;
        return 1;

    }

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    switch (choice)
    {

    case 1:
        add(&a, &b, &result);
        cout << "Result = " << result << endl;
        break;
    case 2:
        subtract(&a, &b, &result);
        cout << "Result = " << result << endl;
        break;
    case 3:
        multiply(&a, &b, &result);
        cout << "Result = " << result << endl;
        break;
    case 4:
        divide(&a, &b, &result);
        if (b == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else
        {
            divide(&a, &b, &result);
            cout << "Result = " << result << endl;
        }
    }

    return 0;
}