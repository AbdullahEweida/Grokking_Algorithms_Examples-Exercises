#include<iostream>
using namespace std;

// 4.1) Write out the code for the earlier sum function.
int sum(int arr[], int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	return arr[n - 1]  + sum(arr, n - 1);
}

// 4.2) Write out the code for the earlier count function.
int count(int arr[], int n)
{
	if(n==1)
	{
		return 1;
	}
	return 1 + count(arr, n - 1);
}

// 4.3) Find the maximum number in a list.
int Max(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int sub_max = Max(arr, n - 1);

    if (arr[n - 1] > sub_max)
    {
        return arr[n - 1];
    }
    else
    {
        return sub_max;
    }
}
/*
4.4) Remember binary search from chapter 1 ? It’s a divide - and -conquer
algorithm, too.Can you come up with the base case and recursive
case for binary search ?
ANS)	-first base case: if (target == arr[mid]) return mid;
		-second base case: if (left > right) return -1; // the target is not in the  array
		-recursive case: if (target < arr[mid]) return binarySearch(arr, left, mid - 1);
						 if (target > arr[mid]) return binarySearch(arr, mid + 1, right);) ;
*/



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,10,9 };
	cout << "Sum: " << sum(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	cout << "Count: " << count(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	cout << "Max: " << Max(arr, sizeof(arr) / sizeof(arr[0])) << endl;
	return 0;
}