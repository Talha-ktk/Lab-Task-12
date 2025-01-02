#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;

    cout<<"Enter 1st number : ";
    cin>>a;

    cout<<"Enter 2nd number : ";
    cin>>b;

    cout<<"First number is "<<a<<" and second number is "<<b<<endl;

    swap(&a,&b);

    cout<<"Now! first number is "<<a<<" and second number is "<<b<<endl;

}
