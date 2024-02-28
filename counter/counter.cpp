#include <iostream>
#include <string>
#include "counter.h"
using namespace std;
int main()
{
    system("chcp 1251 > nul");
    int n = 1; string answer = "";
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> answer;
    if (answer == "да" || answer == "Да") {
        cout << "Введите начальное значение счётчика: ";
        cin >> n;  
       
    }
    counter object(n);
    char comanda = ' ';
    do {
        cout << "Введите команду ('+', '-', '=' или 'x'):";
        cin >> comanda;
        if (comanda == '+') {
            object.plus();
        }
        else if (comanda == '-') {
            object.minus();
        }
        else if (comanda == '=') {
            cout << object.getNumber() << endl ;
        }
    }
     while (comanda != 'x');  // x английская маленькая 
 }
