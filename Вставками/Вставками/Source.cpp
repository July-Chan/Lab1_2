#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int MaxN = 100;
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    float arr[MaxN];

    for (int i = 0; i < n; i++) {
        cout << "Введіть " << i + 1 << "-ий елемент масиву: ";
        cin >> arr[i];
    }

    cout << "\nПочатковий масив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "\nВідсортований масив у порядку збільшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "\nВідсортований масив у порядку зменшення:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
