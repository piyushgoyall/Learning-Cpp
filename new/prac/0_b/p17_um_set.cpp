// C++ program to demonstrate various function of unordered_multiset
#include <bits/stdc++.h>
using namespace std;

// making typedef for short declaration
typedef unordered_multiset<int>::iterator umit;

// Utility function to print unordered_multiset
void printUset(unordered_multiset<int> ums)
{
	// begin() returns iterator to first element of set
	umit it = ums.begin();
	for (; it != ums.end(); it++)
		cout << *it << " ";
	cout << endl;
}

// Driver program to check all function
int main()
{
	// empty initialization
	unordered_multiset<int> ums1;

	// Initialization by intializer list
	unordered_multiset<int> ums2(
		{ 1, 3, 1, 7, 2, 3, 4, 1, 6 });

	// Initialization by assignment
	ums1 = { 2, 7, 2, 5, 0, 3, 7, 5 };

	// empty() function return true if set is empty
	// otherwise false
	if (ums1.empty())
		cout << "unordered multiset 1 is empty\n";
	else
		cout << "unordered multiset 1 is not empty\n";

	// size() function returns total number of elements
	// in data structure
	cout << "The size of unordered multiset 2 is : "
		<< ums2.size() << endl;

	printUset(ums1);

	ums1.insert(7);

	printUset(ums1);

	int val = 3;

	// find function returns iterator to first position
	// of val, if exist otherwise it returns iterator
	// to end
	if (ums1.find(val) != ums1.end())
		cout << "unordered multiset 1 contains " << val
			<< endl;
	else
		cout << "unordered multiset 1 does not contains "
			<< val << endl;

	// count function returns total number of occurrence in
	// set
	val = 5;
	int cnt = ums1.count(val);
	cout << val << " appears " << cnt
		<< " times in unordered multiset 1 \n";

	val = 9;

	// if count return >0 value then element exist
	// otherwise not
	if (ums1.count(val))
		cout << "unordered multiset 1 contains " << val
			<< endl;
	else
		cout << "unordered multiset 1 does not contains "
			<< val << endl;

	val = 1;

	// equal_range returns a pair, where first is iterator
	// to first position of val and second it iterator to
	// last position to val
	pair<umit, umit> erange_it = ums2.equal_range(val);
	if (erange_it.first != erange_it.second)
		cout << val
			<< " appeared atleast once in "
				"unoredered_multiset \n";

	printUset(ums2);

	// erase function deletes all instances of val
	ums2.erase(val);

	printUset(ums2);

	// clear function deletes all entries from set
	ums1.clear();
	ums2.clear();

	if (ums1.empty())
		cout << "unordered multiset 1 is empty\n";
	else
		cout << "unordered multiset 1 is not empty\n";
}
