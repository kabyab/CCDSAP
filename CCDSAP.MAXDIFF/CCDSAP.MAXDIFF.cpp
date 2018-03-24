// CCDSAP.MAXDIFF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <memory.h>
#include <sstream>
#include <complex>

using namespace std;

int main() {
	int ntest;
	cin >> ntest;

	while (ntest--) {
		int n, k;
		cin >> n;
		cin >> k;

		int* narray = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> narray[i];
		}

		sort(narray, narray + n);

		int cheftakes_1 = 0;
		int sontakes_1 = 0;
		int cheftakes_2 = 0;
		int sontakes_2 = 0;

		for (int i = 0; i < n; i++) {
			if (i < k)
				sontakes_1 += narray[i];
			else
				cheftakes_1 += narray[i];
		}
		for (int i = n - 1; i >= 0; i--) {
			if (n - i - 1 < k)
				cheftakes_2 += narray[i];
			else
				sontakes_2 += narray[i];
		}
		
		int diff_1 = 0, diff_2 = 0;
		if (cheftakes_1 > sontakes_1)
			diff_1 = cheftakes_1 - sontakes_1;
		if (cheftakes_2 > sontakes_2)
			diff_2 = cheftakes_2 - sontakes_2;

		printf("%d\n", max(diff_1, diff_2));
	}
	return 0;
}
