#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	int b, t, areaTotal, area1, area2;
	areaTotal = 70 * 160;

	cin >> b >> t;

	area1 = (b + t) * 35;
	area2 = areaTotal - area1;

	if (area1 > (areaTotal / 2)) {
		cout << 1 << endl;
	} else if(area2 > (areaTotal / 2)) {
		cout << 2 << endl;
	}else{
	    cout << 0 << endl;
	}

	return 0;
}