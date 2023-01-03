#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

template <typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;
	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	bool isCyclicBFS(T src,
	                 unordered_map<T, bool> &visited,
	                 unordered_map<T, T> &parent) {
		queue<T> q;

		parent[src] = src;
		visited[src] = true;
		q.push(src);
		while (!q.empty()) {
			T node = q.front();
			q.pop();

			for (auto ch : adj[node]) {
				if (visited[ch] and ch != parent[node]) {
					return true;
				}
				else if (!visited[ch]) {
					parent[ch] = node;
					visited[ch] = true;
					q.push(ch);
				}
			}
		}

		return false;
	}

	bool CyclePresent() {
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;

		for (auto n : adj) {
			if (!visited[n.first]) {
				bool ans = isCyclicBFS(n.first, visited, parent);
				if (ans == true) return true;
			}
		}

		return false;
	}

};

int main() {

	Graph <int> g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(3, 2);
	// g.addEdge(3, 1);

	if (g.CyclePresent()) {
		cout << "Yes! Cycle hai\n";
	}
	else {
		cout << "No! Cycle nahi hai\n";
	}
	// g.addEdge("Hindi", "Maths");
	// g.addEdge("English", "Maths");
	// g.addEdge("English", "Computer");
	// g.addEdge("Computer", "C++");
	// g.addEdge("Computer", "Java");
	// g.addEdge("Java", "Web");
	// g.addEdge("Java", "Android");
	// g.addEdge("C++", "Web");
	// g.addEdge("Maths", "C++");

	// g.tpsBfs();

	return 0;
}
















