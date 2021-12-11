#include <iostream>
using namespace std;

class vect {
public:
    vect(int= 0, int= 0, int= 0, int= 0, int= 0);

    vect operator+(const vect &);

    vect operator-(const vect &);

    vect operator*(const int &);

    int operator*(const vect &);

    int operator%(const vect &);

    void print();

private:
    int a, b, c, d, e;
};

vect::vect(int a1,int b1,int c1,int d1,int e1) {
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
}

vect vect::operator+(const vect &v) {
    vect sum;
    sum.a = a + v.a;
    sum.b = b + v.b;
    sum.c = c + v.c;
    sum.d = d + v.d;
    sum.e = e + v.e;
    return sum;
}

vect vect::operator-(const vect &v) {
    vect diff;
    diff.a = a - v.a;
    diff.b = b - v.b;
    diff.c = c - v.c;
    diff.d = d - v.d;
    diff.e = e - v.e;
    return diff;
}

vect vect::operator*(const int &v) {
    vect proizv;
    proizv.a = a * v;
    proizv.b = b * v;
    proizv.c = c * v;
    proizv.d = d * v;
    proizv.e = e * v;
    return proizv;
}

int vect::operator*(const vect &v) {
    int s = a * v.a + b * v.b + c * v.c + d * v.d + e * v.e;
    return s;
}

int vect::operator%(const vect &v) {
    float x, y, z;
    x = b * v.c - c * v.b;
    y = a * v.c - c * v.a;
    z = a * v.b - v.a * b;
    cout << "{" << x << ";" << y * (-1) << ";" << z << "}\n";

}

void vect::print() {
    cout << '(' << a << ", " << b << ", " << c << ", " << d << ", " << e << ')' << endl;
}

int main() {
    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    cout << "Enter vector A(x1, x2, x3, x4, x5)\nx1=";
    cin >> x1;
    cout << "x2=";
    cin >> x2;
    cout << "x3=";
    cin >> x3;
    cout << "x4=";
    cin >> x4;
    cout << "x5=";
    cin >> x5;
    cout << "Enter vector B(y1, y2, y3, y4, y5)\ny1=";
    cin >> y1;
    cout << "y2=";
    cin >> y2;
    cout << "y3=";
    cin >> y3;
    cout << "y4=";
    cin >> y4;
    cout << "y5=";
    cin >> y5;
    vect A(x1, x2, x3, x4, x5), B(y1, y2, y3, y4, y5), z;
    int scl, t;
    int v;
    cout << "Vector A: ";
    A.print();
    cout << "Vector B: ";
    B.print();
    cout << "A + B = ";
    z = A + B;
    z.print();
    cout << "A - B = ";
    z = A - B;
    z.print();
    cout << "AB = ";
    t = A * B;
    cout << t << endl;
    cout << "|A*B| = ";
    v = A % B;
    cout << "Enter scalar\nscl =";
    cin >> scl;
    cout << "scl*A = ";
    z = A * scl;
    z.print();
    cout << "scl*B = ";
    z = B * scl;
    z.print();
    return 0;
}