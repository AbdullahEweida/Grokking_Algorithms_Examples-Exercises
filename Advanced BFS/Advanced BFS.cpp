#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;

// This code snippet demonstrates how to use an unordered_map to represent a graph
void Advanced_BFS(unordered_map<string, vector<string>>& cities, string start, string goal)
{
	queue<vector<string>> q; // To traversal the graph
	unordered_set<string> visted;// To mark the visited nodes
	q.push({ start });
	visted.insert(start);
	while (!q.empty())
	{
		vector<string> path = q.front() ;
		q.pop();
		string node = path.back();
		if (goal == node)
		{
			cout << "Path found: ";
			for (string city : path)
			{	
				cout << city << " -> ";
			}
			cout << "Arrived" << endl;
			return;
		}
		for (string neighbor : cities[node])
		{
			if (visted.find(neighbor) == visted.end())
			{
				visted.insert(neighbor);
				vector<string> newPath = path; // Create a new path based on the current path, to avoid modifying the original path 
				newPath.push_back(neighbor);
				q.push(newPath);
			}
		}
	}
	cout << "path not found :(" << endl;
}

int main()
{
	unordered_map<string, vector<string>> cities;
	cities["Cairo"] = { "Menofia", "Al-Sa3ed" };
	cities["Menofia"] = { "Alex", "Giza", "Mansoura" };
	cities["Mansoura"] = { "Be7ara", "Alex", "Giza", "Menofai"};
	cities["Al-Sa3ed"] = { "Be7era", "Cairo" };
	//cities["Be7era"] = { "Mansoura"};
	Advanced_BFS(cities, "Al-Sa3ed", "Alex");
	Advanced_BFS(cities, "Al-Sa3ed", "Giza");
	return 0;
}