﻿//Lab_03.3cpp
// < Зробок Іван>
// Лабораторна робота № 3.3
//  Розгалуження, задане графіком 
// Варіант 0.9

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double y;
    cout << "input x "; cin >> x;
    if (x <= -7.0) 
        y = 0;
    else
        if (x<=-3)
            y = x;
        else
            if (x <= -2) 
                y = 4;
            else
                if (x <= 2)
                    y = x * x;
                else
                    if (x <= 4)
                        y = 8 - (2. * x);
                    else
                        if (x>4)
                            y = 0;
    cout << endl;
    cout << "y = " << y;
            
    return 0;
    cin.get();
    
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
