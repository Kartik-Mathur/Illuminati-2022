#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string n, int p) {
		value = p;
		key = n;
		next = NULL;
	}
};

class hashmap {
	node** a;
	int ts;
	int cs;

	int hashFunction(string key) {
		int ans = 0;
		int  mul = 1;
		for (int i = 0; i < key.length(); ++i)
		{
			ans += (key[i] % ts) * (mul % ts);
			ans %=  ts;
			mul *= 13;
			mul %= ts;
		}

		return ans % ts;
	}

	void rehash() {
		node** olda = a;
		int oldts = ts;

		a = new node*[2 * oldts];
		ts *= 2;

		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}
		cs = 0;

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head != NULL) {
				insert(head->key, head->value);
				head = head->next;
			}
		}
	}

public:
	hashmap(int s = 7) {
		a = new node*[s];
		ts = s;
		cs =  0;
		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int value) {
		int hashIndex = hashFunction(key);

		node* n = new node(key, value);
		n->next = a[hashIndex];
		a[hashIndex] = n;
		cs++;

		float load_factor = cs / (1.0 * ts);
		if (load_factor > 0.6) {
			rehash();  // not implemented yet
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << "-->";
			while (head != NULL) {
				cout << "(" << head->key << "," << head->value << ") ";
				head = head->next;
			}
			cout << endl;
		}
	}

};

int main() {


	hashmap h;
	h.insert("Mango", 100);
	h.insert("Grape", 80);
	h.insert("Apple", 120);
	h.insert("Kiwi", 10);
	h.insert("Pineapple", 50);

	h.print();

	return 0;
}
















