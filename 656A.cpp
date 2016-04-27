
/*
problem link :: http://codeforces.com/contest/656/problem/A

--------Description--------------
Input
The input contains a single integer a (0 ≤ a ≤ 35).

Output
Output a single integer.

--------Examples 1 ------------
input
3
output
8

-------Example 2 -------------
input
10
output
1024

------------- Hint -----------

The Da Vinci retarded the 2 ^ n miscalculated, he miscalculated 2 ^ 13

Counted as of 8092 which should be 8192

*/






#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int a[36], n, i ;
	a[0] = 1;
	for(i = 1 ; i <= 12 ; i++) a[i] = 2* a[i-1];
	a[13] = 8092;
	for(i = 14; i <=35 ; i++) a[i] = 2 * a[i-1];
	
	cin >> n;
	cout << a[n];
	return 0;
}