#include <iostream>
#include<cmath>
#define STAR '*'
#define SPACE ' '
using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    cout << "\n==================================================Домашнее задание. Циклы!==============================================\n";
    cout << "\n==================================================Задача №1 ЗАПУЩЕНА!===================================================\n";
    /*int height;
    int length;
    int figureNumber;
    int i = 1;
    int j = 1;
    do {
        cout << "Введите размер треугольника: ";
        cin >> height;
        length = height;

        cout << "Введите номер треугольника (1...10): ";
        cin >> figureNumber;

        switch (figureNumber)
        {
        case 1:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= i)
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 2:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j > i)
                    {
                        cout << SPACE;
                    }
                    else
                    {
                        cout << STAR;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 3:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= i && j <= (length - i + 1))
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 4:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= (length - i + 1) && j <= i)
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 5:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= i && j <= (length - i + 1) || j >= (length - i + 1) && j <= i)
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 6:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j > i && j < (length - i + 1) || j >(length - i + 1) && j < i)
                    {
                        cout << SPACE;
                    }
                    else
                    {
                        cout << STAR;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 7:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j <= i && j <= (length - i + 1))
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 8:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= i && j >= (length - i + 1))
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 9:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j <= (length - i + 1))
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        case 10:
            while (i <= height)
            {
                while (j <= length)
                {
                    if (j >= (length - i + 1))
                    {
                        cout << STAR;
                    }
                    else
                    {
                        cout << SPACE;
                    }
                    j++;
                }
                cout << "\n";
                j = 1;
                i++;
            }
            break;
        default:
            break;
        }
    } while (height != 0);
   
    cout << "\n==================================================Задача №1 завершена===================================================\n";
    cout << "\n==================================================Задача №2 ЗАПУЩЕНА!===================================================\n";
    
    int doubleDigit = 0;
    for (int i = 100; i <= 999; i++)
    {
        if (i / 100 == i / 10 % 10 || i / 10 % 10 == i % 10 || i / 100 == i % 10)
            doubleDigit++;

    } cout << doubleDigit << "\n\n";
    cout << "\n==================================================Задача №2 завершена===================================================\n";
    cout << "\n==================================================Задача №3 ЗАПУЩЕНА!===================================================\n";
    int unequal = 0;
    for (int i = 100; i <= 999; i++)
    {
        if (i / 100 != i / 10 % 10 && i / 10 % 10 != i % 10 && i / 100 != i % 10)
            unequal++;

    } cout << unequal << "\n\n";
    cout << "\n==================================================Задача №3 завершена===================================================\n";
    cout << "\n==================================================Задача №4 ЗАПУЩЕНА!===================================================\n";
   
    int a1 = 0, numb0;
    do
    {
        cout << "\nВведите любое целое число и я удалю из него цифры 3 и 6 если они там есть: " << "\n";
        cin >> numb0;
        cout << "Вы ввели число " << numb0 << "\n";
        while (numb0 > 0)
        {
            if (numb0 % 10 != 3 && numb0 % 10 != 6)
            {
                a1 *= 10;
                a1 += numb0 % 10;
            }
            numb0 /= 10;
        }
        cout << "Новое число: ";
        while (a1 > 0)
        {
            cout << a1 % 10 ;
            a1 /= 10;
        }
        
    } while (numb0 != 0);
    
    cout << "\n==================================================Задача №4 завершена===================================================\n";
    cout << "\n==================================================Задача №5 ЗАПУЩЕНА!===================================================\n";
    
    int number1;
    do {
        cout << "\nВведите число: ";
        cin >> number1;
        for (int b = 2; b * b < number1, b * b * b < number1; b++)
        {
            if (number1 % (b * b) == 0 and number1 % (b * b * b) != 0) {

            }
            cout << "Эти числа " << b * b << " деляться без остатка на " << number1 << "\n"
                << "Эти числа " << b * b * b << " деляться с остатком на " << number1 << "\n\n";
        }
    } while (number1 != 0);
    cout << "\n==================================================Задача №5 завершена===================================================\n";
    cout << "\n==================================================Задача №6 ЗАПУЩЕНА!===================================================\n";
    int a, b;
    do {
        cin >> a;
        b = a;
        int sum = 0;
        while (abs(b) > 0) {
            sum += b % 10;
            b /= 10;
        }
        if ((sum * sum * sum) == (a * a)) {
            cout << "Куб суммы цифр этого числа равен А*А.\n";
        }
        else {
            cout << "Куб суммы цифр этого числа не равен А*А.\n";
        }
    } while (a != 0);
    cout << "\n==================================================Задача №6 завершена===================================================\n";
    cout << "\n==================================================Задача №7 ЗАПУЩЕНА!===================================================\n";
    int numb;
    do {
        cout << "Введите число: ";
        cin >> numb;
        for (int i = 1; i < numb; i++)
        {
            if (numb % i == 0)
                cout << "Числа без остатка делящиеся на " << numb << ": " << i << "\n";
        }
    } while (numb != 0);
    
            
    cout << "\n==================================================Задача №7 завершена===================================================\n";
    cout << "\n==================================================Задача №8 ЗАПУЩЕНА!===================================================\n";
    
    int numb1, numb2, l;
    do {
        cout << "Введите два целых числа: ";
        cin >> numb1 >> numb2;
        if (numb1 > numb2) {
            l = numb1;
        }
        else {
            l = numb2;
        }
        for (int i = 1; i <= l; i++) {
            if (numb1 % i == 0 && numb2 % i == 0)
                cout << i << endl;
        }
    } while (numb1 != 0 || numb2 != 0);

    cout << "\n==================================================Задача №8 завершена===================================================\n";
    cout << "\n==================================================Задача №9 ЗАПУЩЕНА!===================================================\n";
   
    int numb3, cp, amountDigit = 0, sumDigit = 0, amountOfZero = 0;
    cout << "Number:";
    cin >> numb3;
    cp = numb3;
    while (numb3)
    {
        if (numb3 % 10 == 0)
            amountOfZero++;
        numb3 /= 10;
    }
    cout << "\nКол-во нулей: " << amountOfZero;

    for (amountDigit = 0; cp > 0; amountDigit++)
    {
        sumDigit += cp % 10;
        cp /= 10;
    }
    cout << "\nКол-во цифр = " << amountDigit << " \nСумма чисел = " << sumDigit << "\nСреднее арифметическое значение = " << (double)sumDigit / amountDigit << "\n";
    
    cout << "\n==================================================Задача №9 завершена===================================================\n";
    cout << "\n==================================================Задача №10 ЗАПУЩЕНА!===================================================\n";
    
    int sizeBoard;
    int cell;
    do{
        cout << "Введите размер доски: ";
        cin >> sizeBoard;
        cout << "Введите размер клетки: ";
        cin >> cell;
        for (int i = 0; i < sizeBoard; i++) {
            for (int j = 0; j < sizeBoard; j++) {
                if ((i + j) % cell)
                    cout << ("|||");
                else
                    cout << ("   ");
            }
            cout << ("\n");
        }
    } while (sizeBoard != 0);

    cout << "\n==================================================Задача №10 завершена===================================================\n";
    cout << "\n==================================================Домашнее задание. Циклы ЗАВЕРШЕНО!==============================================\n";
    
    */
    /*cout << "\n==================================================Домашнее задание. Массивы одномерные!==============================================\n";
    cout << "\n==================================================Задача №1 ЗАПУЩЕНА!===================================================\n";

    const int size1 = 8;
    int arr[size1] = { 23, -12, 11, 9, 18, -54, 25, 3 };
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size1; i++)
    {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        } 
    }
    cout << "Максимальное значение массива: " << max << "\n";
    cout << "Минимальное значение массива: " << min << "\n";
    
    cout << "\n==================================================Задача №1 завершена===================================================\n";
    cout << "\n==================================================Задача №2 ЗАПУЩЕНА!===================================================\n";
     
    const int sizeM = 12;

    int array[sizeM];

    cout << "Введите прибыль фирмы за год(12 месяцев)\n\n";
    for (int i = 0; i < sizeM; i++)
    {
        cout << "Прибыль за " << i + 1 << " месяц :";
        cin >> array[i];
    }

    cout << "\nВведите диапазон(например, 3 и 6 - поиск между 3-м и 6-м месяцем)\n\n";
    int firstMonth, secondMonth;
    cout << "Первый месяц :";
    cin >> firstMonth;
    cout << "Второй месяц :";
    cin >> secondMonth;    
    int maxIncome = array[firstMonth], minIncome = array[firstMonth];

    for (int i = firstMonth; i <= secondMonth; ++i)
    {
        if (array[i] > maxIncome)
            maxIncome = array[i];
        if (array[i] < minIncome)
            minIncome = array[i];
    }
    cout << "Максимальная прибыль - " << maxIncome << " в ";

    for (int i = firstMonth; i <= secondMonth; i++) {
        if (array[i] == maxIncome)
            cout << i + 1 << " Месяце " << "\n";
    }
    cout << "Минимальная прибыль - " << minIncome << " в ";

    for (int i = firstMonth; i <= secondMonth; i++) {
        if (array[i] == minIncome)
            cout << i + 1 << " Месяце \n";
    }*/

    cout << "\n==================================================Задача №2 завершена===================================================\n";
    cout << "\n==================================================Задача №3 ЗАПУЩЕНА!===================================================\n";

    
    int a[100];
    int i, n, summa_otr = 0, kmin = 0, kmax = 0, proizv = 1, proizv1 = 1;
    cout << "Введите кол-во элементов массива : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
    cout << "\n";
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            summa_otr = summa_otr + a[i];
        }
    }
    cout << "\n";
    cout << "Cумма отрицательных элементов = " << summa_otr << "\n";
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            kmin = i;
        }
    }
    cout << "Минимальное значение массива : " << min << "\n";
    cout << "Минимальный элемент массива :" << kmin << "\n";
    int max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            kmax = i;
        }
    }
    cout << "Максимальное значение массива : " << max << "\n";
    cout << "Максимальный элемент массива : " << kmax << "\n";
    if (kmax > kmin)
    {
        for (i = kmin; i <= kmax; i++)
        {
            proizv = proizv * a[i];
        }
    }
    else
    {
        for (i = kmax; i <= kmin; i++)
        {
            proizv = proizv * a[i];
        }
    }
    cout << "Произведение между минимальным и максимальным элементами массива = " << proizv << "\n";
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            proizv1 = proizv1 * a[i];
        }
    }
    cout << "Произведение элементов с четными номерами : " << proizv1 << "\n";
    int one_chislo = 0;
    int kone_chislo = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            one_chislo = a[i];
            kone_chislo = i; break;
        }
    }
    int two_chislo = 0;
    int ktwo_chislo = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[n - 1] < 0)
        {
            two_chislo = a[n - 1];
            ktwo_chislo = n - 1; break;
        }
    }
    int summotr = 0;
    if (kone_chislo > ktwo_chislo)
    {
        for (i = ktwo_chislo; i < n; i++)
        {
            summotr = summotr + a[i];
        }
    }
    else
    {
        for (i = kone_chislo; i < n; i++)
        {
            summotr = summotr + a[i];
        }
    }
    cout << "Сумма элементов между первым и последним отрицательным числом : " << summotr << "\n";
    
    cout << "\n==================================================Задача №3 завершена===================================================\n";
    cout << "\n==================================================Задача №4 ЗАПУЩЕНА!===================================================\n";

    srand(time(NULL));

    int a1[10], b1[5], c1[5];                  

    for (int i = 0; i < 10; i++)            
    {
        a1[i] = rand() % 41 - 20;            
        cout << "a1[" << i << "] = " << a1[i] << endl;  
    }
    cout << endl;

    for (int i = 0; i < 5; i++)            
    {
        b1[i] = a1[i];                       
        cout << "b1[" << i << "] = " << b1[i] << endl;  
    }
    cout << endl;

    for (int i = 0; i < 5; i++)             
    {
        c1[i] = a1[i + 5];                    
        cout << "c1[" << i << "] = " << c1[i] << endl;  
    }

    cout << "\n==================================================Задача №4 завершена===================================================\n";
    cout << "\n==================================================Задача №5 ЗАПУЩЕНА!===================================================\n";

    const int size = 10;
    int arr11[size];
    int arr22[size];
    int arr33[size];
    cout << "Заполняем первый массив:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr1[" << i << "] = ";
        cin >> arr11[i];
    }
    cout << "\nЗаполняем второй массив:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr2[" << i << "] = ";
        cin >> arr22[i];
    }
    cout << "\nСумма сложения двух массивов поэлементно:\n";
    for (int i = 0; i < size; i++)
    {
        arr33[i] = arr11[i] + arr22[i];
        cout << "arr3[" << i << "] = ";
        cout << arr33[i] << "\n";
    }
   
        
    
    
                
}



       
    

                
       

                
    

   

    
    

