// september bonus.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<locale>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "1)Узнать в год какого животного родился\n";
    cout << "2)Узнать свой знак зодиака\n";
    int v;
    cin >> v;
    if (v == 1)
    {
        cout << "Введите год рождения"<<endl;
        int g,o;
        cin >> g;
        o = g % 12;
        switch (o)
        {
        case 0:

             cout << "Год обезьяны" << endl;

            break;
        case 1:

            cout << "Год петуха" << endl;
            break;
        case 2:

            cout << "Год собаки" << endl;
            break;
        case 3:

            cout << "Год свиньи" << endl;
            break;
        case 4:

            cout << "Год крысы" << endl;
            break;
        case 5:

            cout << "Год коровы" << endl;

            break;
        case 6:

            cout << "Год тигра" << endl;

            break;
        case 7:

            cout << "Год зайца" << endl;

            break;
        case 8:

            cout << "Год дракона" << endl;

            break;
        case 9:

            cout << "Год змеи" << endl;
            break;
        case 10:

            cout << "Год лошади" << endl;

            break;
        case 11:

            cout << "Год овцы" << endl;

            break;
        }
    }
    else
    {
        int m, d;
        cout << "Введите месяц и число рождния\n";
        cin >> m >> d;
        cout << "Вы ";
        switch (m)
        {
        case 1:

            if (d < 20) cout << "козерог" << endl;

            else cout << "водолей" << endl;

            break;

        case 2:

            if (d < 19) cout << "водолей" << endl;

            else cout << "рыбы" << endl;

            break;

        case 3:

            if (d < 21) cout << "рыбы" << endl;

            else cout << "овен" << endl;

            break;

        case 4:

            if (d < 20) cout << "овен" << endl;

            else cout << "телец" << endl;

            break;

        case 5:

            if (d < 21) cout << "телец" << endl;

            else cout << "близнецы" << endl;

            break;

        case 6:

            if (d < 22) cout << "близнецы" << endl;

            else cout << "рак" << endl;

            break;

        case 7:

            if (d < 23) cout << "рак" << endl;

            else cout << "лев" << endl;

            break;

        case 8:

            if (d < 23) cout << "лев" << endl;

            else cout << "дева" << endl;

            break;

        case 9:

            if (d < 23) cout << "дева" << endl;

            else cout << "весы" << endl;

            break;

        case 10:

            if (d < 23) cout << "весы" << endl;

            else cout << "скорпион" << endl;

            break;

        case 11:

            if (d < 23) cout << "скорпион" << endl;

            else cout << "стрелец" << endl;

            break;

        case 12:

            if (d < 22) cout << "стрелец" << endl;

            else cout << "козерог" << endl;
        }
    }
    cout << "Автор: Яроцкий Дмитрий, ПИН-201" << endl;
    return(0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
