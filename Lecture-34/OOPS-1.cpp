#include <iostream>
using namespace std;

///////////////////////////////// BLUE PRINT /////////////////////////////////
class Car {
private:
	int price;
public:
	static int count;
	char *name;
	int seats;
	int model;
	const int tyres;
	// DEFAULT FUNCTIONS/METHODS
	// 1. Constructor: It is used to create an Object
	// Constructor: Default Methods
	Car(): tyres(4) {
		cout << "Inside Default Constructor" << endl;
		name = NULL;
		count++;
		// tyres = 4;
	}

	// 2. Parameterised constructor
	Car(char *n, int s, int p, int md): tyres(4), seats(s), model(md), price(p) {
		cout << "Inside Parameterised Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// seats = s;
		// model = md;
		// price = p;
		count++;
	}

	// 3. Copy Constructor: Default Methods
	// Car C = B; or Car C(B);
	Car(Car &X): tyres(4) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		price = X.price;

		count++;
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
		count--;
	}

	// Functions
	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  :$" << price << endl;
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

	// GETTER AND SETTER
	void setPrice(int p) {
		if (p < 80) {
			price = 100;
		}
		else if (p > 200) {
			price = 120;
		}
		else {
			price = p;
		}
	}

	int getPrice() {
		return price;
	}

	///////////////////////////////////// OPERATOR OVERLOADING
	bool operator>(const Car &X) { // A>B
		return price > X.price ? true : false;
	}
	///////////////////////////////////// !OPERATOR OVERLOADING

	friend int khabri(Car &X);
};

int khabri(Car &X) {
	return X.price;
}

int Car::count = 0;
///////////////////////////////// BLUE PRINT /////////////////////////////////

int main() {

	Car A;
	// A.price = 100;
	A.setPrice(180);
	cout << A.getPrice() << endl;
	A.updateName("BMW");

	A.model = 2022;
	A.seats = 2;
	A.print();
	Car B("AUDI", 2, 120, 2020);

	Car C(B);

	Car D = C;

	cout << "Number of cars: " << Car::count << endl;
	B.name[0] = 'T';


	B.print();
	C.print();
	D.print();

	if (A > B) {
		cout << "A ka price jyada hai" << endl;
	}
	else {
		cout << "B ka price jyada hai" << endl;
	}



	return 0;
}
















