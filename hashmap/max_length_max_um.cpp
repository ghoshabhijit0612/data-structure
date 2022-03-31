// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function that counts the subarrays
// with sum of its elements as its length
int countOfSubarray(int arr[], int N)
{
	// Decrementing all the elements
	// of the array by 1
	for (int i = 0; i < N; i++)
		arr[i]--;

	// Making prefix sum array
	int pref[N];
	pref[0] = arr[0];

	for (int i = 1; i < N; i++)
		pref[i] = pref[i - 1] + arr[i];

	// Declare map to store count of
	// elements upto current element
	map<int, int> mp;
	int answer = 0;

	// To count all the subarrays
	// whose prefix sum is 0
	mp[0]++;

	// Iterate the array
	for (int i = 0; i < N; i++) {

		// Increment answer by count of
		// current element of prefix array
		answer += mp[pref[i]];
		mp[pref[i]]++;
	}

	// Return the answer
	return answer;
}

\
int main()
{
	// Given array arr[]
	int arr[] = { 1, 1, 0 };
	int N = sizeof arr / sizeof arr[0];

	// Function call
	cout << countOfSubarray(arr, N);
	return 0;
}
