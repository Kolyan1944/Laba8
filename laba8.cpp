#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10;
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int mas[MAX][MAX];
    int a, b;
    int g, o;
    int i, j;
    int sum = 0;
    cout << "Введите количество строк: ";
    cin >> a;
    cout << "Введите количество столбцов: ";
    cin >> b;
    cout << "----------------------------------\n";
    cout << "Строка g = ";
    cin >> g;
    cout << "Строка o = ";
    cin >> o;
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
    for (int i = g; i < o - 1; i++)
    {
        for (j = 0; j < b; j++)
        {
            sum += mas[i][j];
        }
    }
    cout << "Сумма елементов между " << g << " и " << o << " строкой: " << sum << endl;
    system("PAUSE");
    return 0;
}