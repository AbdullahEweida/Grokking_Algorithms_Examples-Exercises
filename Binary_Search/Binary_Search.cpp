
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int target, int low = 0, int high = 99)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == target)
		{
			return mid;
		}
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int target;
	cout << "Please, Enter the target : ";
	cin >> target;
	int arr[100];
	// to intalize the array
	int j = 0;
	for (int i = 0; j < 100; i++)
	{
		if (i % 2 == 0)
		{
			arr[j] = i;
			j++;
		}
	}

	int index = BinarySearch(arr, target);
	if (index == -1)
	{
		cout << "The target is not found" << endl;
	}
	else
	{
		cout << "The target is found at index " << index << endl;
	}
	return 0;
}
//Exercise 1.1
//Suppose you have a sorted list of 128 names, and you’re searching through it using binary search.
//What’s the maximum number of steps it would take ?
//solution: Log2(128), 2 ^ x = 128 => x = 7

//Exercise 1.2
// Suppose you double the size of the list. What’s the maximum number of steps now ?
// solution: Log2(256), 2 ^ x = 256 => x = 8

//Give the run time for each of these scenarios in terms of Big O.
// 1.3 You have a name, and you want to ind the person’s phone number in the phone book. Answer: O(log n).
// 1.4 You have a phone number, and you want to ind the person’s name in the phone book. Answer: O(n).
// 1.5 You want to read the numbers of every person in the phone book. Answer: if persons can have many phone number O(n^2) or O(n) if has one phone number.
// 1.6 You want to read the numbers of just the As. Answer: O(n).