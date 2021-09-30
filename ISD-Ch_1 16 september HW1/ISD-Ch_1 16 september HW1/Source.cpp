//ISD-TEMPLATE CPP FILE. PROF. WEI FANG V1
#include "std_lib_facilities.h" 
/*string conversion(int val, char unit) {
	const double cm2inch = 2.54;
	if (unit == 'i') {
		cout << val << "in==" << val*cm2inch << "cm\n";
		}
	else if (unit == 'c') {
		cout << val << "cm==" << val / cm2inch << "in\n";
		}
	else
		return 0;
	}*/


int main(int argc, char *argv[]) {
	cout << "Please type in unit and value";
	string help;
	cin >> help;

	if (help == "help") {
		cout << "Message convert in to value\n" << "i for inch to cm converting\n" << "c for cm to inch converting\n"
			<< "unit value in digits";
	}
	const double cm2inch = 2.54;
	double val = atof(argv[2]);
	if (strcmp(argv[1], "i")==0) {
		cout << val << "in==" << val*cm2inch << "cm\n";
	}
	else if (strcmp(argv[1], "c")==0) {
		cout << val << "cm==" << val / cm2inch << "in\n";
	}
	
	else {
		cout << "Warning please type in value and unit\n" << "Type in help for main page";
	}
	
}