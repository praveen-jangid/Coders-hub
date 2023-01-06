#include <iostream>
using namespace std;
void user(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int n = 4;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Value before swap are ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    for (int i = 0; i < n; i += 2)
    {
        if (i < n - 1)
        {
            int a = arr[i], b = arr[i + 1];
            user(&a, &b);
            arr[i] = a;
            arr[i + 1] = b;
        }
    }
    cout << endl;
    cout << "Value after swap is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}