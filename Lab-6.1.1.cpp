#include <iostream>
using namespace std;

void InArr(int arr[], const int size, int i)
{
    if (i < size)
    {
        arr[i] = -5 + rand() % 18;
        InArr(arr, size, i + 1);
        return;
    }
}

void PrArr(int arr[], const int size, int i)
{
    if (i < size)
    {
        if (i == 0)
            cout << "{";
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
        else cout << "}" << endl;
        PrArr(arr, size, i + 1);
        return;
    }
}

int SumArr(const int* const arr, const int size, int i)
{
    if (i < size)
    {
        if (arr[i] > 0 || arr[i] % 2 == 0)
            return arr[i] + SumArr(arr, size, i + 1);
        else
            return SumArr(arr, size, i + 1);
    }
    else return 0;
}

int CEArr(int const* const arr, const int size, int i)
{
    if (i < size)
    {
        if (arr[i] > 0 || arr[i] % 2 == 0)
            return 1 + CEArr(arr, size, i + 1);
        else
            return CEArr(arr, size, i + 1);
    }
    else return 0;
}

void REArr(int arr[], const int size, int i)
{
    if (i < size)
    {
        if (arr[i] > 0 || arr[i] % 2 == 0)
            arr[i] = 0;
        REArr(arr, size, i + 1);
        return;
    }
}

int main()
{
    srand(time(0));
    const int size = 25;
    int arr[size];

    InArr(arr, size, 0);
    PrArr(arr, size, 0);
    cout << "Array sum by condition = " << SumArr(arr, size, 0) << endl;
    cout << "Count element by condition = " << CEArr(arr, size, 0) << endl;
    REArr(arr, size, 0);
    PrArr(arr, size, 0);
}