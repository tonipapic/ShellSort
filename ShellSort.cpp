#include <iostream>
using namespace std;

void ShellSort(int arr[], int n) {
    int h = 1;
    while (h < n / 3) 
    {
        h = 3 * h + 1;
    }
   
    while (h >= 1) {
        for (int i = h; i < n; i++) 
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= h && arr[j - h] > temp; j -= h) 
            {
                arr[j] = arr[j - h];
            }
            arr[j] = temp;
        }
        h = h / 3;
    }
}

void PrintArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Unesi n: ";
    cin >> n;
    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Element "<< (i + 1) <<": ";
        cin >> array[i];
    }
    cout << "----Uneseni niz-----" << endl;
    PrintArray(array, n);

    ShellSort(array, n);
   
    cout << "----Sortirani niz-----" << endl;
    PrintArray(array, n);
   

    delete[] array;
}


