#include<bits/stdc++.h>
using namespace std;
double epsilon = 1e-6;
int main()
{
	int num; cin >> num;
	double l = 1, r = num;
	while ((r - l) > epsilon) {
		double mid = l + (r - l) / 2;
		if ((mid * mid) <= num) {
			l = mid;
		}
		else r = mid;
	}
	cout << fixed << setprecision(8) << endl;
	cout << l << " " << r << endl;
	cout << "\n";
	return 0;
}