#include <bits/stdc++.h>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <algorithm>

using namespace std;
long counter = 0;

void permute(int n,int level,string &str,string &op,vector <char> &taken)
{
	for(int i=0; i<=n; ++i)
	{
		if(taken[i]) continue;
		
		int check = 0;
		for(int j=0; j<i; ++j)
			if(str[j]==str[i] && !taken[j]) { check = 1; break; }
		if(check) continue;

		taken[i] = 1;
		op[level] = str[i];

		if(n==level) cout << op << endl;
		else permute(n, level+1, str, op, taken);

		taken[i] = 0;
	}
}

int main()
{
	string str, op;
	vector <char> taken;

	cin >> str;
	op = str;
	taken.resize(str.size(), 0);
	
	sort(str.begin(), str.end());
	permute(str.size()-1, 0, str, op, taken);
	return 0;
}