﻿//1.       Создайте переменную со значением на Ваше усмотрение.
//
//2.       Объявите указатель на созданную переменную.
//
//3.       Выведите в консоль адрес указателя и значение, которое хранится по этому адресу.
//
//4.       Измените значение, которое хранится по адресу указателя.
//
//5.       Убедитесь, что переменная из 1 - го пункта так же изменила своё значение.
//
//6.       Создайте массив из нескольких элементов(тип и значение на Ваше усмотрение).
//
//7.       Выведите все элементы массива в консоль, используя указатель.
//
//8.       Объявите целую переменную со значением 5.
//
//9.       Создайте такой указатель на эту переменную, чтобы нельзя было менять адрес, на который он ссылается, но при этом, чтобы через него можно было менять значение.
//
//10.   Убедитесь, что Вы всё сделали правильно, попытавшись поменять адрес на другой и получив ошибку компилятора, а также поменяв значение через указатель и выведя переменную в консоль, у которой должно быть уже новое значение.

#include <iostream>
using namespace std;

int main()
{
    int myVariable = 10;
    int* ptr = &myVariable;
    cout << &ptr << " " << *ptr << endl;
    *ptr = 15;
    cout << myVariable << endl;

    int arr[3] = { 99, 88, 77 };
    int* ptrArr = arr;
    for (int i = 0; i < 3; i++) {
        cout << *(ptrArr + i) << endl;
    }

    int var5 = 5;
    int var10 = 10;
    int* const ptrConst = &var5;
    *ptrConst = 99;
    // ptrConst = &var10
    cout << var5;

}


