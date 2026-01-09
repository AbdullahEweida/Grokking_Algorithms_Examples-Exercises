//Quicksort algorithm: base case : if the array has 0 or 1 element, it is already sorted.
//Recursive case: partition the array into two parts, sort each part recursively, and then combine the sorted parts.
#include <vector>
#include <iostream>

using namespace std;

vector<int> quicksort(vector<int> arr) {
    // Base case
    if (arr.size() < 2) {
        return arr;
    }

    // Recursive case
    int pivot = arr[0];
    vector<int> less;
    vector<int> greater;

    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] <= pivot)
            less.push_back(arr[i]);
        else
            greater.push_back(arr[i]);
    }

    // quicksort(less) + pivot + quicksort(greater)
    vector<int> sorted_less = quicksort(less);
    vector<int> sorted_greater = quicksort(greater);

    sorted_less.push_back(pivot);
    sorted_less.insert(sorted_less.end(), sorted_greater.begin(), sorted_greater.end());

    return sorted_less;
}

int main()
{
	vector<int> arr = { 3,6,8,10,1,2,1 };
	vector<int> sorted_arr = quicksort(arr);
	for (int i = 0; i < sorted_arr.size(); i++)
	{
		cout << sorted_arr[i] << " ";
	}
}
