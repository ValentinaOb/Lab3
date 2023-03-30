// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <string>
#include <clocale>
#include <complex>
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
/*
- конструктор без параметрів( виділяє місце для одного елемента та інінціалізує
його в нуль);
- конструктор з одним параметром - розмір вектора( виділяє місце та інінціалізує
масив значенням нуль);
- конструктор із двома параметрами - розмір вектора та значення
ініціалізації(виділяє місце (значення перший аргумент) та інінціалізує
значенням другого аргументу).
- конструктор копій та операцію присвоєння; // !!!
- деструктор звільняє пам'ять.
- визначити функцію, яка присвоює елементу масиву деяке значення (параметр за
замовчуванням);
- функцію яка одержує деякий елемент масиву;
- визначити функції друку, додавання, віднімання, які здійснюють ці
арифметичні операції з даними цього класу, множення на ціле типу short;
- визначити функції порівняння: більше, менше або рівно, які повертають true
або false.

У змінну стани встановлювати код помилки, коли не вистачає пам'яті, виходить за межі масиву.
Передбачити можливість підрахунку числа об'єктів даного типу. Написати програму тестування
всіх можливостей цього класу.
*/

int A();
int B();
int C();


int main()
{
    int n;
    cout << "N: ";
e: cin >> n;

    switch (n) {
    case 1: A(); break; 
    case 2: B(); break; 
    case 3: C(); break; 
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
    Icosahedron(double bi) : a(5), c(2019) { if (bi > 0) b = bi; else b = 1; }
    Icosahedron(float ci) : a(20), b(1) { if (ci > 0) c = ci; else c = 2000; }

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
        if ((a == 1) || (a == 2) || (a == 3) || (a == 4) || (a == 5) || (a == 6) || (a == 7) || (a == 8) || (a == 9)) { cout << "0"; }
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
    cout << " Input a Icosahedron "; cin >> in_a >> in_b >> in_c;
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



typedef double ComplexDouble;


enum STATE {
    OK, BAD_INIT, BAD_DIV
};

class ComplexVector
{
    ComplexDouble* v;
    int num; 
    int state = 0;
public:
    ComplexVector() : ComplexVector(2) {}
    ComplexVector(int n);
    ComplexVector(int n, ComplexDouble&);
    ComplexVector(int n, ComplexDouble*);
    ComplexVector(const ComplexVector& s);
    ComplexVector& operator=(const ComplexVector& s);
    ~ComplexVector() {
        num = 0;
    }
    ComplexDouble& El(int i);
    // функцію, яка присвоює елементу масиву деяке значення (параметр за замовчуванням)
    ComplexDouble& Poss(double& b);
    // функцію яка одержує деякий елемент масиву

    ComplexVector Subtr(ComplexVector& b); // віднімння
    ComplexVector Mult(short  s); // множення
    bool More(ComplexVector& s); // більше
    bool Less(ComplexVector& s); // менше
    bool Equal(ComplexVector& s); // рівно

    void Output();
    void Input();
    ComplexVector Add(ComplexVector& b);
};

ComplexVector::ComplexVector(int n) {
    if (n <= 0)    n = 2;  // default num =2;
    num = n;
    v = new ComplexDouble[n];
    for (int i = 0; i < n; i++) {
        v[i] = 0.0;
    }
}
ComplexVector::ComplexVector(int n, ComplexDouble& b) : ComplexVector(n) {
    for (int i = 0; i < num; i++) {
        v[i] = b;
    }
}

ComplexVector::ComplexVector(int n, ComplexDouble* p) : ComplexVector(n) {
    if (p != nullptr)
        for (int i = 0; i < num; i++)
            v[i] = p[i];

}

ComplexVector::ComplexVector(const ComplexVector& s) {
    // if (this == &s) return;  // the expression is used in the old standard
    num = s.num;
    v = new ComplexDouble[num];
    state = 0;
    for (int i = 0; i < num; i++)   v[i] = s.v[i];
}

ComplexVector& ComplexVector::operator=(const ComplexVector& s) {

    if (num != s.num)
    {
        if (v) delete[] v;
        num = s.num;
        v = new ComplexDouble[num];
        state = 0;
    }
    for (int i = 0; i < num; i++)   v[i] = s.v[i];

    return *this;
}


double& ComplexVector::El(int  index) {
 //   if (index >= 0 && index < num) return v[index];
   // return err;

    int p;
    cout << "\nInput position: ";
    cin >> p;
    cout << "V: ";
    for (int i = 0; i < num; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    ComplexDouble e;
        for (int i = 0; i < num; i++) {

            if (i == p) {
                e = v[i];
                cout << "Element: " << e;
            }
        }
        return e;

}

double& ComplexVector::Poss(double& b) {

    int a = 1; // параметр за замовчуванням

    cout << "V: ";
    if (num >= 0) {
        for (int i = 0; i < num; i++) {
            cout << v[i] << " ";
        }
    }

    cout << "\nInput position of element: ";
    int p;
    cin >> p;

    cout << "\nV: ";

    if (num >= 0) {
        for (int i = 0; i < num; i++) {

            if (i == p) { v[i] = a; }
            cout << v[i] << " ";
        }
    }

    for (int i = 0; i < num; i++) {
        return v[i];
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

ComplexVector  ComplexVector::Mult(short s) {

    cout << "Input Multiplier: "; cin >> s;

    cout << "V: ";
  ComplexVector tmp(num);  for (int i = 0; i < num; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    

    for (int i = 0; i < num; i++) {
        tmp.v[i] = v[i] * s;

    }
    return tmp;
}


bool ComplexVector::Less(ComplexVector& s) {

    return ((num < s.num) && (state < s.state)); // якщо виконується умова, вертаємться true, інакше false 
}

bool ComplexVector::More(ComplexVector& s) {

    if ((num > s.num) && (state > s.state)) return true;
    return false;
}

bool ComplexVector::Equal(ComplexVector& s) {

    if ((num == s.num) && (state == s.state)) return true;
    return false;
}


void ComplexVector::Input() {
    int in_num = 0;
    do {
        cout << "Input size Vec\n";
        cin >> in_num;
    } while (in_num <= 0);
    if (num != in_num) {
        num = in_num;
        if (v) delete[] v;
        v = new ComplexDouble[num];
    }
    for (int i = 0; i < num; i++) {

#if defined(_MSC_VER)
        cout << " v [ " << i << " ] real img  "; cin >> v[i];
#else 
        double re, im;
        cout << " v [ " << i << " ] real img  "; cin >> re >> im;
        v[i].real(re);
        v[i].imag(im);
#endif    
    }
}

void ComplexVector::Output() {
    if (num != 0) {
        for (int i = 0; i < num; i++) {
            cout << " v [ " << i << " ]   " << v[i] << '\t';
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
    return ComplexVector(1);
}


int B()
{
    ComplexDouble a(1), b, c; 
    cout << a << endl;
#if defined(_MSC_VER)
    b = 21.3;
    b = 22.3;
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
    cin >> a;
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


    cout << "\nEl \n";
    VecObj1 = VecObj.El(1);
    cout << "\n";

    cout << "\nPoss \n";
    VecObj1 = VecObj.Poss(b);
    cout << "\n";


    cout << "\nAdd \n"; 
    VecObj1 = VecObj.Add(VecObj2);
    VecObj1.Output();

    cout << "\nSubtr \n"; 
    VecObj1 = VecObj.Subtr(VecObj2);
    VecObj1.Output();
    cout << endl;


    cout << "\Mult \n"; 
    VecObj1 = VecObj.Mult(5);
    VecObj1.Output();
    cout << endl;


    cout << "\nLess \n"; 

    if (VecObj.Less(VecObj2) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";


    cout << "\nMore \n"; 

    if (VecObj.More(VecObj2) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";


    cout << "\nEqual \n";

    if (VecObj.Equal(VecObj2) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";



    return 1;
}




 

typedef double ComplexDouble1;


class ComplexVector1
{
    ComplexDouble** v;
    int num;  
    int state = 0;
public:
    ComplexVector1() : ComplexVector1(2) {}
    ComplexVector1(int n);
    ComplexVector1(int n, ComplexDouble1&);
    ComplexVector1(int n, ComplexDouble1*);
    ComplexVector1(const ComplexVector1& s);
    ComplexVector1& operator=(const ComplexVector1& s);
    ~ComplexVector1() {
        num = 0;
    }
    ComplexDouble1& El(int i);
    ComplexDouble1& Poss(double& b);

    ComplexVector1 Subtr(ComplexVector1& b); 
    ComplexVector1 Mult(short  s); 
    bool More(ComplexVector1& s); 
    bool Less(ComplexVector1& s); 
    bool Equal(ComplexVector1& s);

    void Output1();
    void Input1();
    ComplexVector1 Add(ComplexVector1& b);
};

ComplexVector1::ComplexVector1(int n) {
    if (n <= 0)    n = 2;  
    num = n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        v[i][j] = 0;
    }
}
ComplexVector1::ComplexVector1(int n, ComplexDouble1& b) : ComplexVector1(n) {
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
        v[i][j] = b;
    }
}

ComplexVector1::ComplexVector1(int n, ComplexDouble1* p) : ComplexVector1(n) {
    if (p != nullptr)
        
        for (int i = 0; i < num; i++) for (int j = 0; j < num; j++)
        {
            v[i][j] = p[i];
        }

}

ComplexVector1::ComplexVector1(const ComplexVector1& s) {
    num = s.num;
    state = 0;
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) v[i][j] = s.v[i][j];
}

ComplexVector1& ComplexVector1::operator=(const ComplexVector1& s) {

    if (num != s.num)
    {
        if (v) delete[] v;
        num = s.num;
        state = 0;
    }
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++)  v[i][j] = s.v[i][j];

    return *this;
}


double& ComplexVector1::El(int  index) {

    int p, p1;
    cout << "\nInput position: ";
    cin >> p;
    cin >> p1;
    cout << "V: ";
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
        cout << v[i][j] << " ";
    }
    cout << "\n";

    ComplexDouble e;
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {

        if ((i == p)&&(j==p1)) {
            e = v[i][j];
            cout << "Element: " << e;
        }
    }
    return e;

}


double& ComplexVector1::Poss(double& b) {

    int a = 1;

    cout << "V: ";
    if (num >= 0) {
        for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
            cout << v[i][j] << " ";
        }
    }

    cout << "\nInput position of element: ";
    int p, p1;
    cin >> p;
    cin >> p1;
    cout << "\nV: ";

    if (num >= 0) {
        for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
            if ((i == p) && (j == p1)) { v[i][j] = a; }
            cout << v[i][j] << " ";
            return v[i][j];
        }
    }
       
}


ComplexVector1 ComplexVector1::Subtr(ComplexVector1& b) {
    int tnum;
    tnum = num < b.num ? num : b.num;
    if (tnum >= 0) {
        ComplexVector1 tmp(tnum);
        for (int i = 0; i < tnum; i++) for (int j = 0; j < num; j++) tmp.v[i][j] = v[i][j] - b.v[i][j];
        return tmp;
    }
    return ComplexVector1(0);
}

ComplexVector1  ComplexVector1::Mult(short s) {

    cout << "Input Multiplier: "; cin >> s;

    cout << "V: ";
    ComplexVector1 tmp(num);  for (int i = 0; i < num; i++) for (int j = 0; j < num; j++)
    {
        cout << v[i][j] << " ";

    }
    cout << "\n";


    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
        tmp.v[i][j] = v[i][j] * s;

    }
    return tmp;
}


bool ComplexVector1::Less(ComplexVector1& s) {

    return ((num < s.num) && (state < s.state));
}
bool ComplexVector1::More(ComplexVector1& s) {

    if ((num > s.num) && (state > s.state)) return true;
    return false;
}
bool ComplexVector1::Equal(ComplexVector1& s) {

    if ((num == s.num) && (state == s.state)) return true;
    return false;
}


void ComplexVector1::Input1() {
    int in_num = 0;
    do {
        cout << "Input size Vec\n";
        cin >> in_num;
    } while (in_num <= 0);
    if (num != in_num) {
        num = in_num;
        if (v) delete[] v;
    }
    for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {

#if defined(_MSC_VER)
        cout << " v [ " << i << " ][ " << j << " ] real img  "; cin >> v[i][j];
#else 
        double re, im;
        cout << " v [ " << i << " ][ " << j << " ] real img  "; cin >> re >> im;
        v[i].real(re);
        v[i].imag(im);
#endif    
    }
}

void ComplexVector1::Output1() {
    if (num != 0) {
        for (int i = 0; i < num; i++) for (int j = 0; j < num; j++) {
            cout << " v [ " << i << " ][ " << j << " ]   " << v[i][j] << '\t';
            cout << endl;
        }
    }
}
ComplexVector1 ComplexVector1::Add(ComplexVector1& b) {
    int tnum;
    tnum = num < b.num ? num : b.num;
    if (tnum >= 0) {
        ComplexVector1 tmp(tnum);
        for (int i = 0; i < tnum; i++) for (int j = 0; j < num; j++) tmp.v[i][j] = v[i][j] + b.v[i][j];
        return tmp;
    }
    return ComplexVector1(1);
}


int C()
{
    ComplexDouble1 a(1), b, c; 
    cout << a << endl;
#if defined(_MSC_VER)
    b = 21.3;
    b = 22.3;
#else 
    b.real(21.3);
    b.imag(22.3);
#endif  

    cout << b << endl;
    c = a + b;
    cout << c << endl;
    cout << " Test  " << endl;
    cout << "\n!!!";
    ComplexVector1 VecObj2, VecObj3(10);
    cout << "VecObj \n";
    VecObj2.Output1();
    cout << "VecObj1 \n";
    VecObj3.Output1();
    cout << " Input a " << endl;

#if defined(_MSC_VER)
    cin >> a;
#else 
    double re, im;
    cin >> re >> im;
    a.real(re);
    a.imag(im);
#endif    

    cout << a << endl;
    ComplexVector1 VecObj4(10, a);
    VecObj4.Output1();


    VecObj2.Input1();
    cout << endl;
    VecObj2.Output1();


    cout << "\nEl \n";
    VecObj3 = VecObj2.El(1);
    cout << "\n";

    cout << "\nPoss \n";
    VecObj3 = VecObj2.Poss(b);
    cout << "\n";


    cout << "\nAdd \n";
    VecObj3 = VecObj2.Add(VecObj4);
    VecObj3.Output1();

    cout << "\nSubtr \n";
    VecObj3 = VecObj2.Subtr(VecObj4);
    VecObj3.Output1();
    cout << endl;


    cout << "\Mult \n";
    VecObj3 = VecObj2.Mult(5);
    VecObj3.Output1();
    cout << endl;


    cout << "\nLess \n";

    if (VecObj2.Less(VecObj4) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";


    cout << "\nMore \n";

    if (VecObj2.More(VecObj4) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";


    cout << "\nEqual \n";

    if (VecObj2.Equal(VecObj4) == 1) {
        cout << "true";
    }
    else cout << "false";
    cout << "\n";



    return 1;
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
