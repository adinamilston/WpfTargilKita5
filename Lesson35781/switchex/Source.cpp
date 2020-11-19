#include <iostream>
using namespace std;

int main()
{

	int day;
	cout << " enter anumber between 1 and 7: " << endl;
	cin >> day;

	
	/*switch (day)
	{
	case 1: cout << " Sunday\n";
		break;
	case 2: cout << " Monday\n";
		break;
	case 3: cout << " Tuesday\n";
		break;
	case 4: cout << " Wednesday\n";
		break;
	case 5: cout << " Thursday\n";
		break;
	case 6: cout << " Friday\n";
		break;
	case 7: cout << " Shabbat\n";
		break;
	default:
		cout << "ERROR: wrong day number\n";
		break;
	}*/



	
	cout << "enter another number from 1 to 7\n";
	cin >> day;
	switch (day)
	{
	case 1: cout << "Long ";
	case 2:	case 3:  case 4: 	case 5: cout << "Work Day";
		break;
	case 6:
	case 7: cout << "Not a Working Day";
		break;
	default: cout << "No such day";
	}
	return 0;

	

}