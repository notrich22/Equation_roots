#pragma once
#include "Equation.h"
class Square : public equation {
protected:
    double a = 0, b = 0, c = 0;
public:
    Square() {
        cout << "Square:" << endl;
#ifdef DEBUG
        cout << "SqConst: " << this << endl;
#endif // DEBUG
    }
    ~Square() {
#ifdef DEBUG
        cout << "SqDest: " << this << endl;
#endif // DEBUG
    }
	void eq_roots() {
        cout << "Enter 'a': "; cin >> a;
        if (a == 0) {
			cout << "Try something else!" << endl; 
			eq_roots();
		}
        cout << "Enter 'b': "; cin >> b;
        cout << "Enter 'c': "; cin >> c;
        double x1, x2;
        double d = b * b - 4 * a * c;
        if (d < 0)
        {
            cout << "No roots" << endl << endl;
            return;
        }
        if (d == 0)
        {
            x1 = x2 = -b / (2 * a);
        }
        else if (d > 0)
        {
            x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
            x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        }

        cout << "Roots: x1=" << x1 << "; x2=" << x2 << endl << endl;
	}
};