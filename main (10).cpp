#include <iostream>
#include <iomanip>
using namespace std;

void createArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void printArray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i];
    cout << endl;
}

int findMinIndex(const int a[], int n)
{
    int minIndex = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[minIndex])
            minIndex = i;
    return minIndex;
}

int findMaxIndex(const int a[], int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (a[i] > a[maxIndex])
            maxIndex = i;
    return maxIndex;
}

double averageOfIndexes(int minIndex, int maxIndex)
{
    return (minIndex + maxIndex) / 2.0;
}

int main()
{
    int n;
    cout << "Vvedit kilkist elementiv masyvu: ";
    cin >> n;

    int* a = new int[n];

    cout << "\n--- Formuvannia masyvu ---\n";
    createArray(a, n);

    cout << "\n--- Masyv ---\n";
    printArray(a, n);

    int minIndex = findMinIndex(a, n);
    int maxIndex = findMaxIndex(a, n);

    double avg = averageOfIndexes(minIndex, maxIndex);

    cout << "\nIndeks minimalnoho elementa: " << minIndex << endl;
    cout << "Indeks maksymalnoho elementa: " << maxIndex << endl;

    cout << "Serednie arytmetychne indeksiv = " << avg << endl;

    delete[] a;
    return 0;
}	


