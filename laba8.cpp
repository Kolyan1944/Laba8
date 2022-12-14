#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10;
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int mas[MAX][MAX];
    int a, b;
    int k, p;
    int i, j;
    int sum = 0;
    cout << "Введите количество строк: ";
    cin >> a;
    cout << "Введите количество столбцов: ";
    cin >> b;
    cout << "----------------------------------\n";
    cout << "Строка k = ";
    cin >> k;
    cout << "Строка p = ";
    cin >> p;
    cout << "----------------------------------\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            mas[i][j] = rand() % 20 - 10;
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = k; i < p - 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += mas[i][j];
        }
    }
    cout << "Сумма елементов между " << k << " и " << p << " строкой: " << sum << endl;
    system("PAUSE");
    return 0;
}