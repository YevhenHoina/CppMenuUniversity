#include <iostream>

using namespace std;

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();
void lab6();
void lab7();
void lab8();
void lab9();
void lab10();
void lab11();
void lab12();
void lab13();
void lab14();
void lab15();
void lab16();
void lab17();
void lab18();

int main()
{
    int menuKey = 0;
    do
    {
        cout << "----Menu----" << endl;
        cout << "1. " << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. " << endl;
        cout << "6. " << endl;
        cout << "7. " << endl;
        cout << "8. " << endl;
        cout << "9. " << endl;
        cout << "10. " << endl;
        cout << "11. " << endl;
        cout << "12. " << endl;
        cout << "13. " << endl;
        cout << "14. " << endl;
        cout << "15. " << endl;
        cout << "16. " << endl;
        cout << "17. " << endl;
        cout << "18. " << endl;
        cout << "0. Exit" << endl;
        cout << "Choose number: ";
        cin >> menuKey;
        system("cls");


        switch (menuKey)
        {
        case 1:
            lab1();
            break;
        case 2:
            lab2();
            break;
        case 3:
            lab3();
            break;
        case 4:
            lab4();
            break;
        case 5:
            lab5();
            break;
        case 6:
            lab6();
            break;
        case 7:
            lab7();
            break;
        case 8:
            lab8();
            break;
        case 9:
            lab9();
            break;
        case 10:
            lab10();
            break;
        case 11:
            lab11();
            break;
        case 12:
            lab12();
            break;
        case 13:
            lab13();
            break;
        case 14:
            lab14();
            break;
        case 15:
            lab15();
            break;
        case 16:
            lab16();
            break;
        case 17:
            lab17();
            break;
        case 18:
            lab18();
            break;
        case 0:
            lab18();
            break;
        default:
            cout << "Invalid argument";
            cout << endl;
            system("pause");
            system("cls");
            break;
        }
    } while (menuKey != 0);
}

void lab1(){}
void lab2(){}
void lab3(){}
void lab4(){}
void lab5(){}
void lab6(){}
void lab7(){}
void lab8(){}
void lab9(){}
void lab10(){}
void lab11(){}
void lab12(){}
void lab13(){}
void lab14(){}
void lab15(){}
void lab16(){}
void lab17(){}
void lab18(){}

