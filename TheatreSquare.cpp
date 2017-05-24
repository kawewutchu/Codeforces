#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int64_t n, m, a;
	int64_t ans = 1;
	cin >> n >> m >> a;
	if( n % a == 0) {
		ans *= n/a;
	} else { 
		ans *= n/a + 1;
	}
	if( m % a == 0) {
		ans *= m/a;
	} else {
		ans *= m/a + 1;
	}
	cout << ans;
	return 0;
}