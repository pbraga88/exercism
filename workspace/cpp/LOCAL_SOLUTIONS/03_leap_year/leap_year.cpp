#include <iostream>

using namespace std;

namespace leap {
	int is_leap_year(int year) {
		return (!(year%4) && (year%100) && (year%400)) || (!(year%4) && !(year%100) && !(year%400));
	}
}  // namespace leap

using namespace leap;

int main() {
	int year;
	cin>>year;

	if(is_leap_year(year)) {
		cout<<year<<" is leap year"<<endl;
	}
	else {
		cout<<year<<" is NOT leap year"<<endl;
	}

	return 0;
}


