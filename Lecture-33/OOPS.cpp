// OOPS.cpp
#include <iostream>
using namespace std;

///////////////////////////////// BLUE PRINT /////////////////////////////////
class Car {
public:
	char name[100];
	int seats;
	int mileage;
	int model;
	// DEFAULT FUNCTIONS/METHODS
	// 1. Constructor: It is used to create an Object
	// Constructor: Default Methods
	Car() {
		cout << "Inside Default Constructor" << endl;
	}

	// 2. Parameterised constructor
	Car(char *n, int s, int m, int md) {
		cout << "Inside Parameterised Constructor" << endl;
		strcpy(name, n);
		seats = s;
		model = md;
		mileage = m;
	}

	// 3. Copy Constructor: Default Methods
	// Car C = B; or Car C(B);
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		mileage = X.mileage;
	}

	// 4. Copy Assignment Operator: Default Method
	// Car C("AUDI",4,6,2018);
	// Car B("BMW",2,10,2020);
	// C = B; // Assignment
	void operator=(Car &X) { // Car &X = B;
		cout << "Inside Copy Assignment Operator" << endl;
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		mileage = X.mileage;
	}

	// 5. Destructor: Default Method
	~Car() {
		cout << "Deleting car " << name << endl;
	}

	// Functions
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Mileage: " << mileage << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}
};
///////////////////////////////// BLUE PRINT /////////////////////////////////

int main() {

	Car A;
	// A.name = "BMW";
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	strcpy(A.name, "BMW");
	A.mileage = 10;
	A.model = 2022;
	A.seats = 2;
	A.print();
	// char x[] = "AUDI";
	Car B("AUDI", 2, 12, 2020);
	// strcpy(B.name, "AUDI");
	// B.mileage = 12;
	// B.model = 2020;
	// B.seats = 4;
	B.print();

	// Copy constructor: Default Function
	// Car C = B;
	Car C(B);

	C = A; // Calling copy assignment operator
	C.print();

	Car D("Maruti", 5, 15, 2021);
	D.print();



	return 0;
}
















