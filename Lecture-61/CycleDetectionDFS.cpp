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

	bool isCyclicDFS(T src,
	                 unordered_map<T, bool > &visited,
	                 unordered_map<T, T> &parent) {
		visited[src] = true;
		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				parent[ch] = src;
				bool isCylic = isCyclicDFS(ch, visited, parent);
				if (isCylic) return true;
			}
			else {
				if (ch != parent[src]) return true;
			}
		}

		return false;
	}

	bool CyclePresent() {
		unordered_map<T, bool > visited;
		unordered_map<T, T> parent;
		for (auto n : adj) {
			if (!visited[n.first]) {
				parent[n.first] = n.first;
				bool ans = isCyclicDFS(n.first, visited, parent);
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
	g.addEdge(3, 1);

	if (g.CyclePresent()) {
		cout << "Yes! Cycle hai\n";
	}
	else {
		cout << "No! Cycle nahi hai\n";
	}


	return 0;
}
















