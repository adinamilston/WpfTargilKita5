#include <iostream>
using namespace std;

//enum CALCULATE { PLUS, MINUS, MULT = 5, DIV };
enum OPERATOR { PLUS ='+', MINUS='-', MULT = '*', DIV='/' };
int main()
{
	
	int x, y, op;
	cin >> x >> y >> op;
	switch (op) {
	case PLUS: cout << x + y;
		break;
	case MINUS: cout << x – y;
		break;
	case MULT:cout << x * y;
		break;
	case DIV: if (y != 0) cout(float) x / y;
		break;
	}
	return 0;
}
