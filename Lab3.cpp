﻿// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <clocale>
#include <complex>
typedef complex <double> ComplexDouble;
#define _RE 0
#define _IM 1


using namespace std;

/*
    Створити клас типу - дата з полями: день (1-31), місяць (1-12), рік (ціле число). У класі
визначити
o конструктори ( не менше двох);
o функції-члени встановлення дня, місяця та року, функції встановлення полів
класу повинні перевіряти коректність параметрів, що задаються;
o функції-члени одержання дня, місяця та року;
o дві функції-члени друку за шаблоном: “5 січня 2019 року” і “05.01.2019”.
Написати програму тестування всіх можливостей цього класу
    */


int A();
int B();


int main()
{
    int n;
    cout << "N: ";
e: cin >> n;

    switch (n) {
    case 1: A(); break; // 1
    case 2: B(); break; // 2
    default: cout << "Error\n"; goto e;
    }

    return 0;
}


class Icosahedron {
    int a, b, c; // day, month, year
    int ai, bi, ci;

public:
    Icosahedron() : a(5), b(1), c(2019) {}
    Icosahedron(int ai) : a(ai), b(1), c(2019) {}
    Icosahedron(double bi) : a(5), c(2019) {if (bi > 0) b = bi; else b = 1;}
    Icosahedron(float ci) : a(20), b(1) { if (ci > 0) c = ci; else c = 2000;}

         double getA() const
         {
            return a;
         }
     
        void setA(int a)
        {
            if (a < 1 || a > 31)
            {
                cout << " Error set a \n";
                return;
            }
            this->a = a;
        }


        double getB() const
        {
            return b;
        }

        void setB(int b)
        {
            if (b < 1 || b > 12)
            {
                cout << " Error set b \n";
                return;
            }
            this->b = b;
        }


        double getC() const
        {
            return c;
        }

        void setC(int c)
        {
            if (c < 1000 || c > 2025)
            {
                cout << " Error set c \n";
                return;
            }
            this->c = c;
        }



        double A() {
            cout << "A: ";
            cin >> a;
            return a;
        }

        double B() {
            cout << "\nB: ";
            cin >> b;
            return b;
        }

        double C() {
            cout << "\nC: ";
            cin >> c;
            return c;
        }



        void printInfo()
        {
            cout << "\n a= " << a << " b = " << b << " c = " << c << "\n";
        }



        void printInfo1()
        {
            cout << "\n";
            if ((a == 1)||(a == 2)||(a == 3)||(a == 4) || (a == 5) || (a == 6) || (a == 7) || (a == 8) || (a == 9)) { cout << "0"; }
            cout << a << ".";
            if ((b == 1) || (b == 2) || (b == 3) || (b == 4) || (b == 5) || (b == 6) || (b == 7) || (b == 8) || (b == 9)) { cout << "0"; }
            cout << b << "." << c << "\n";
        }
        void printInfo2()
        {
            string t;
            if (b == 1) { t = "january"; }
            if (b == 2) { t = "february"; }
            if (b == 3) { t = "march"; }
            if (b == 4) { t = "april"; }
            if (b == 5) { t = "may"; }
            if (b == 6) { t = "june"; }
            if (b == 7) { t = "july"; }
            if (b == 8) { t = "august"; }
            if (b == 9) { t = "september"; }
            if (b == 10) { t = "october"; }
            if (b == 11) { t = "november"; }
            if (b == 12) { t = "december"; }

            cout << "\n" << a << " " << t << " " << c << " year" << "\n";
        }
    };

int A()
{
    
    Icosahedron obj;
    obj.printInfo();
    int in_a, in_b, in_c;
    cout << " Input a, b, c Icosahedron "; cin >> in_a >> in_b >> in_c;
    Icosahedron obj1(in_a), obj2(in_b), obj3(in_c);
    obj1.printInfo();
    obj2.printInfo();
    obj3.printInfo();

    obj.setA(12);
    obj.printInfo();

    obj.setA(2.e100);
    obj.printInfo();

    obj.setA(5);
    obj.printInfo();


    obj.setB(12);
    obj.printInfo();

    obj.setB(2.e100);
    obj.printInfo();

    obj.setB(1);
    obj.printInfo();


    obj.setC(12);
    obj.printInfo();

    obj.setC(2.e100);
    obj.printInfo();

    obj.setC(2019);
    obj.printInfo();

    cout << "\n End testing \n";


    obj.setA(12);
    obj.printInfo1();

    obj.setA(2.e100);
    obj.printInfo1();

    obj.setA(5);
    obj.printInfo1();


    obj.setB(12);
    obj.printInfo1();

    obj.setB(2.e100);
    obj.printInfo1();

    obj.setB(1);
    obj.printInfo1();


    obj.setC(12);
    obj.printInfo1();

    obj.setC(2.e100);
    obj.printInfo1();

    obj.setC(2019);
    obj.printInfo1();

    cout << "\n End testing \n";


    obj.setA(12);
    obj.printInfo2();

    obj.setA(2.e100);
    obj.printInfo2();

    obj.setA(5);
    obj.printInfo2();


    obj.setB(12);
    obj.printInfo2();

    obj.setB(2.e100);
    obj.printInfo2();

    obj.setB(1);
    obj.printInfo2();


    obj.setC(12);
    obj.printInfo2();

    obj.setC(2.e100);
    obj.printInfo2();

    obj.setC(2019);
    obj.printInfo2();

    cout << "End testing \n";


    return 0;

}


class ComplexVector
{
    ComplexDouble* v;
    int num;
    int state;

public:
    ComplexVector() : v(NULL), num(0), state(0) {}  // 1
    ComplexVector(int n);  // 2
    ComplexVector(int n, ComplexDouble&);  // 3
    ComplexVector(int n, ComplexDouble*);  // 4 (копій)
    ComplexVector(const ComplexVector& s);  // 4 (присвоєнь)
    ComplexVector& operator=(const ComplexVector& s);  // ?!
    ~ComplexVector() {   // 5 (пам'ять)
        cout << " del vec";
        if (v) delete[] v;
    }


    /*
  +  - визначити функцію, яка присвоює елементу масиву деяке значення (параметр за замовчуванням);
  +  - функцію яка одержує деякий елемент масиву;
  +  - віднімання, які здійснюють ці арифметичні операції з даними цього класу, 
  +  - множення на ціле типу short;
  +  - визначити функції порівняння: 
        - більше, 
        - менше або рівно, які повертають true або false

    У змінну стани встановлювати код помилки, коли не вистачає пам'яті, виходить за межі масиву. 
    Передбачити можливість підрахунку числа об'єктів даного типу. 
    Написати програму тестуваннявсіх можливостей цього класу.

    */

    ComplexVector(int n, int a); // функцію, яка присвоює елементу масиву деяке значення (параметр за замовчуванням)
    ComplexVector(int n, int b); // функцію яка одержує деякий елемент масиву
    ComplexVector Subtr(ComplexVector& b); // віднімння
    ComplexVector Mult(ComplexVector& b); // множення
    bool More(ComplexVector& s); // більше
    bool Less(ComplexVector& s); // менше
    bool Equal(ComplexVector& s); // рівно



    void Output(); // друк
    void Input();
    ComplexVector Add(ComplexVector& b); // додавання
};


ComplexVector::ComplexVector(int n) {
    if (n <= 0) { v = NULL; num = 0; state = -1; cout << " Vec --> 0 "; }
    num = n;
    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        v[i] = 0.0;
        //v[i]._Val[_RE]=0.0; v[i]._Val[_IM]=0.0;
    }
}
ComplexVector::ComplexVector(int n, ComplexDouble& b) {
    if (n <= 0) { v = NULL; num = 0; state = -1; cout << " Vec --> 0 "; }
    num = n;
    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        v[i] = b;
        //v[i]._Val[_RE]=0.0; v[i]._Val[_IM]=0.0;
    }
}
ComplexVector::ComplexVector(int n, ComplexDouble* p) {
    if (n <= 0 || p == NULL) { v = NULL; num = 0; state = -1; cout << " Vec --> 0 "; }
    num = n;
    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        v[i] = p[i];
    }
}
ComplexVector::ComplexVector(const ComplexVector& s) {
    num = s.num;
    v = new ComplexDouble[num];
    state = 0;
    for (int i = 0; i < num; i++) v[i] = s.v[i];
}
ComplexVector& ComplexVector::operator=(const ComplexVector& s) {
    if (num != s.num)
    {
        if (v) delete[] v;
        num = s.num;
        v = new ComplexDouble[num];
        state = 0;
    }
    for (int i = 0; i < num; i++) v[i] = s.v[i];
    return *this;
}
void ComplexVector::Input() {
    if (num == 0) {
        if (v) delete[] v;
        do {
            cout << "Input size Vec\n";
            cin >> num;
        } while (num <= 0);
        v = new ComplexDouble[num];
    }
    for (int i = 0; i < num; i++) {
        cout << " v [ " << i << " ] real img "; cin >> v[i] >> v[i]._Val[_IM];
    }
}
void ComplexVector::Output() {
    if (num != 0) {
        for (int i = 0; i < num; i++) {
            cout << " v [ " << i << " ] " << v[i] << '\t';
            cout << endl;
        }
    }
}
ComplexVector ComplexVector::Add(ComplexVector& b) {
    int tnum;
    tnum = num < b.num ? num : b.num;
    if (tnum >= 0) {
        ComplexVector tmp(tnum);
        for (int i = 0; i < tnum; i++) tmp.v[i] = v[i] + b.v[i];
        return tmp;
    }
    return ComplexVector(0);
}


//
ComplexVector::ComplexVector(int n, int a){
    a = 1; // параметр за замовчуванням

    cout << "V: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    cout << "Input position of element: ";
    int p;
    cin >> p;

    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        v[p] = a;
    }
}

ComplexVector::ComplexVector(int n, int b) {

    cout << "Input position: ";
    int e, p;
    cin >> p;

    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        e = v[p];
    }
}

ComplexVector ComplexVector::Subtr(ComplexVector& b) {
    int tnum;
    tnum = num < b.num ? num : b.num;
    if (tnum >= 0) {
        ComplexVector tmp(tnum);
        for (int i = 0; i < tnum; i++) tmp.v[i] = v[i] - b.v[i];
        return tmp;
    }
    return ComplexVector(0);
}

ComplexVector ComplexVector::Mult(ComplexVector& b) {
    int tnum;
    short s;
    tnum = num < b.num ? num : b.num;

    cout << "Input Multiplier: ";
    cin >> s;

    if (tnum >= 0) {
        ComplexVector tmp(tnum);
        for (int i = 0; i < tnum; i++) tmp.v[i] = v[i] * s;
        return tmp;
    }
  
    return ComplexVector(0);
}

bool ComplexVector::Less(ComplexVector& s) {

    if (num < s.num && state < s.state) return true;
    return false;
}

bool ComplexVector::More(ComplexVector& s) {

    if (num > s.num && state > s.state) return true;
    return false;
}

bool ComplexVector::Equal(ComplexVector& s) {

    if (num == s.num && state == s.state) return true;
    return false;
}

int B()
{
    ComplexDouble a(1.0, 2), b, c;
    cout << a << endl;
#if defined(_MSC_VER)
    b._Val[_RE] = 21.3;
    b._Val[_IM] = 22.3;
#else 
    b.real(21.3);
    b.imag(22.3);
#endif	

    cout << b << endl;
    c = a + b;
    cout << c << endl;
    cout << " Test  " << endl;
    ComplexVector VecObj, VecObj1(10);
    cout << "VecObj \n";
    VecObj.Output();
    cout << "VecObj1 \n";
    VecObj1.Output();
    cout << " Input a " << endl;

#if defined(_MSC_VER)
    cin >> a >> a._Val[_IM];
#else 
    double re, im;
    cin >> re >> im;
    a.real(re);
    a.imag(im);
#endif		
    cout << a << endl;
    ComplexVector VecObj2(10, a);
    VecObj2.Output();

    VecObj.Input();
    cout << endl;
    VecObj.Output();
    VecObj1 = VecObj.Add(VecObj2);
    VecObj1.Output();

    return 0;
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
