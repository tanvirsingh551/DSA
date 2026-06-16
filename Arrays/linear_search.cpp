#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 3, 4, 5, 6};
    int small = -1;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 3)
        {
            small = i;
        }
    }
    cout << small << endl;
    return 0;
}