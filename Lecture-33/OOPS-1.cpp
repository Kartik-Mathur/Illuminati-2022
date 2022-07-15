// OOPS - 1.cpp
// OOPS.cpp
#include <iostream>
using namespace std;

///////////////////////////////// BLUE PRINT /////////////////////////////////
class Car {
public:
	char *name;
	int seats;
	int price;
	int model;
	// DEFAULT FUNCTIONS/METHODS
	// 1. Constructor: It is used to create an Object
	// Constructor: Default Methods
	Car() {
		cout << "Inside Default Constructor" << endl;
		name = NULL;
	}

	// 2. Parameterised constructor
	Car(char *n, int s, int p, int md) {
		cout << "Inside Parameterised Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		seats = s;
		model = md;
		price = p;
	}

	// 3. Copy Constructor: Default Methods
	// Car C = B; or Car C(B);
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		price = X.price;
	}

	// 4. Copy Assignment Operator: Default Method
	// Car C("AUDI",4,6,2018);
	// Car B("BMW",2,10,2020);
	// C = B; // Assignment
	void operator=(Car &X) { // Car &X = B;
		cout << "Inside Copy Assignment Operator" << endl;
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		price = X.price;
	}

	// 5. Destructor: Default Method
	~Car() {
		cout << "Deleting car " << name << endl;
	}

	// Functions
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price: " << price << endl;
		cout << "Model  : " << model << endl;
		cout << "Seats  : " << seats << endl << endl;
	}

	void updateName(char *n) {
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
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
	// strcpy(A.name, "BMW");
	A.updateName("BMW");
	A.price = 100;
	A.model = 2022;
	A.seats = 2;
	A.print();
	// char x[] = "AUDI";
	Car B("AUDI", 2, 120, 2020);
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

	Car D("Maruti", 5, 150, 2021);
	D.print();



	return 0;
}
















