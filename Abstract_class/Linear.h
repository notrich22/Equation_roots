#pragma once
#include "Equation.h"
class Linear : public equation {
protected:
	double a = 0, b = 0;
public:
	Linear() {
		cout << "Linear: " << endl;
#ifdef DEBUG
		cout << "LnConst: " << this << endl;
#endif // DEBUG
	}
	~Linear() {
#ifdef DEBUG
		cout << "LnDest: " << this << endl;
#endif // DEBUG
	}
	void eq_roots() {
		cout << "Enter 'a': "; cin >> a;
		if (a == 0) {
			cout << "Try something else!" << endl; 
			eq_roots();
		}
		cout << "Enter 'b': "; cin >> b;
		double x;
		x = -b / a;
		cout << "Root: x=" << x << endl << endl;
	}
};