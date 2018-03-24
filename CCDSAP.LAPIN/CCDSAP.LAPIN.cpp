// CCDSAP.LAPIN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <memory.h>
#include <sstream>
#include <complex>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int ntest;
	cin >> ntest;
	while (ntest--) {
		string s;
		cin >> s;

		int len = s.size();

		string a = s.substr(0, (len + 1) / 2);
		string b = s.substr(len - (len + 1) / 2, (len + 1) / 2);

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		if (a == b) printf("YES\n");
		else printf("NO\n");
	}

    return 0;
}

