#include <iostream>
#include "Equation.h"
#include "Square.h"
#include "Linear.h"
using namespace std;

int main(int argc, char* argv[]) {
	equation* sq = new Square();
	sq->eq_roots();
	delete sq;
	equation* ln = new Linear();
	ln->eq_roots();
	delete ln;
}