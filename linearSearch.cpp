#include<iostream>
using namespace std;

bool search(int arr[],int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        } 
    }
    return 0;

}
int main()
{
    int arr[5] = {3,2,4,5,6};
    cout << "Enter the Value to be searched : ";
    int key;
    cin >> key;
    bool found = search(arr,5,key);
    if(found)
    {
        cout << "Value is present";
    }
    else
    cout << "Value is not present";
     


return 0;
}