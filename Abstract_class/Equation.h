#pragma once
#include <iostream>
using namespace std;
class equation {
protected:
	double a = 0, b = 0;
public:
	equation() {
		cout << "Equation: " << endl;
#ifdef DEBUG
		cout << "EqConst: " << this << endl;
#endif // DEBUG
	}
	virtual ~equation() {
#ifdef DEBUG
		cout << "Have a nice day! " << this << endl;
#endif // DEBUG
	}
	virtual void eq_roots() = 0;
};