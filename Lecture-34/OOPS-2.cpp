// OOPS - 2.cpp
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
	// FUNCTIONS
	void operator=(Car &X);

	void print();

	void updateName(char *n);

	Car(): tyres(4) {
		cout << "Inside Default Constructor" << endl;
		name = NULL;
		count++;
		// tyres = 4;
	}

	Car(char *n, int s, int p, int md): tyres(4), seats(s), model(md), price(p) {
		cout << "Inside Parameterised Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// seats = s;
		// model = md;
		// price = p;
		count++;
	}

	Car(Car &X): tyres(4) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		seats = X.seats;
		model = X.model;
		price = X.price;

		count++;
	}

	// 5. Destructor: Default Method
	~Car() {
		cout << "Deleting car " << name << endl;
		count--;
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

void Car::operator=(Car &X) {
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

void Car::print() {
	cout << "Name   : " << name << endl;
	cout << "Price  :$" << price << endl;
	cout << "Model  : " << model << endl;
	cout << "Seats  : " << seats << endl << endl;
}

void Car::updateName(char *n) {
	if (name != NULL) {
		delete []name;
	}
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

int khabri(Car &X) {
	return X.price;
}

int Car::count = 0;
///////////////////////////////// BLUE PRINT /////////////////////////////////


////////////// OVERLOADING COUT //////////////////
ostream& operator<<(ostream&os, Car &X) {
	cout << "Name   : " << X.name << endl;
	cout << "Price  :$" << X.getPrice() << endl;
	cout << "Model  : " << X.model << endl;
	cout << "Seats  : " << X.seats << endl << endl;
	return os;
}
////////////// OVERLOADING COUT //////////////////

////////////// OVERLOADING CIN //////////////////
istream& operator>>(istream& is, Car &X) {
	cout << "Enter Name: ";
	char name[1000];
	cin >> name;
	X.updateName(name);
	cout << "Enter Price: ";
	int p;
	cin >> p;
	X.setPrice(p);
	cout << "Enter Model: ";
	cin >> X.model;
	cout << "Enter Seats: ";
	cin >> X.seats;
	return is;
}
////////////// OVERLOADING CIN //////////////////


int main() {

	Car A;
	cin >> A;
	cout << A << endl;
	// cout << A << endl << B << endl << C << endl << D << endl;

	return 0;
}
















