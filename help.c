#include <stdio.h> // Подключаем библиотеку предпроцессора
  
int main() { // обозначаем главную функцию программы
    int A = 100; // объявляем значение переменной А с типом данных - целое число
    int *p; // объявляем переменную р и указывыаем что эта пременная указатель для целого числа
 
    p = &A;  //Получаем адрес переменной A
 
    //Выводим адрес переменной A
    printf("%p\n", p); // 000000000061FE14 - адрес памяти 
 
    //Выводим содержимое переменной A
    printf("%d\n", *p); // 100 - значение переменной 
 
}


