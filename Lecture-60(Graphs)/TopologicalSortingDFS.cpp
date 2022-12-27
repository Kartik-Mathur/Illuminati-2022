#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

template <typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;
	void addEdge(T u, T v, bool bidir = false) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void tpsDfsHelper(T node,
	                  list<T> &l,
	                  unordered_map<T, bool> &visited) {

		visited[node] = true;
		for (auto ch : adj[node]) {
			if (!visited[ch]) {
				tpsDfsHelper(ch, l, visited);
			}
		}
		l.push_front(node);
	}

	void tpsDfs() {
		unordered_map<T, bool> visited;
		list<T> l;
		for (auto n : adj) {
			if (!visited[n.first]) {
				tpsDfsHelper(n.first, l, visited);
			}
		}

		for (auto c : l) {
			cout << c << " ";
		}
		cout << endl;
	}
};

int main() {

	Graph <string> g;

	g.addEdge("Hindi", "Maths");
	g.addEdge("English", "Maths");
	g.addEdge("English", "Computer");
	g.addEdge("Computer", "C++");
	g.addEdge("Computer", "Java");
	g.addEdge("Java", "Web");
	g.addEdge("Java", "Android");
	g.addEdge("C++", "Web");
	g.addEdge("Maths", "C++");

	g.tpsDfs();

	return 0;
}
















