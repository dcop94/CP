#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrintVector(vector<int> v);

int main()
{
	vector<int> v = { 10, 20, 30, 20, 40, 10, 50 };
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	PrintVector(v);

	return 0;
}

void PrintVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

// vector 10,20,30,20,40,10,50
