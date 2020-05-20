#include "stdafx.h"
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int> q;
	stack<int> st;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 3 == 0)
		{
			q.push(x);
		}
		else
			if (x % 3 == 1) st.push(x);
			else vec.push_back(x);
	}
	while (!q.empty())
	{
		int x = q.front();
		cout << x << ' ';
		q.pop();
	}
	while (!st.empty())
	{
		int x = st.top();
		cout << x << ' ';
		st.pop();
	}
	for (int i = 0; i < vec.size() / 2; i++)
	{
		cout << vec[i] << ' ' << vec[vec.size() - i-1] << ' ';
	}
	return 0;
}









