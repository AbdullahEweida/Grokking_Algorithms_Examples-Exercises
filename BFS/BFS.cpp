// BFS to find shortest path from source to destination
/*
Algorithm: Breadth-First Search (BFS)
	1- create a queue Q (FIFO), hash map to keep track of visited nodes M
	2- add source vertex to Q and mark it visited in M
	3- while Q is not emptys
		1- dequeue a vertex v from Q
		4- dequeue a vertex v from Q
		5- if v is the destination vertex, return the path from source to v
		6- for each neighbor n of v
		7- if n is not visited in M
		8- mark n as visited in M
		9- enqueue n to Q

	- Time Complexity: O(|V|+|E|)
	- Space Complexity: O(|V|)
*/
// implementation
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;
void BFS(int start, int goal, const vector<vector<int>>& adjList) {
	queue<vector<int>> q; // Queue to store paths
	unordered_set<int> visited; // Set to keep track of visited nodes
	// Start with the path containing only the start node
	q.push({start});
	visited.insert(start);
	while (!q.empty()) {
		// Get the current path
		vector<int> path = q.front();
		q.pop();
		int node = path.back();
		// Check if we reached the goal
		if (node == goal) {
			cout << "Path found:";
			for (int n : path) {
				cout <<	" -> " << n; 
			}
			cout << endl;
			return;
		}
		// Explore neighbors
		for (int neighbor : adjList[node]) {
			if (visited.find(neighbor) == visited.end()) {
				visited.insert(neighbor);
				vector<int> newPath = path;
				newPath.push_back(neighbor);
				q.push(newPath);
			}
		}
	}
	if(visited.find(goal) == visited.end())
		cout << "Path not found" << endl;

}
int main() {
	// Create a sample graph using adjacency list representation
	// notice this graph is undirected and contains self-loops 
	vector<vector<int>> adjList = {
		{1, 2},    // Neighbors of node 0
		{0, 3, 4}, // Neighbors of node 1
		{0, 4},    // Neighbors of node 2
		{1, 5},	   // Neighbors of node 3
		{1, 2, 5}, // Neighbors of node 4
		{3, 4}     // Neighbors of node 5
	};
	int start = 0; // Starting node
	int goal = 5;  // Goal node
	BFS(start, goal, adjList);
	return 0;
}