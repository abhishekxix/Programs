#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define mod 1000000007

void solve(int num) {
    std::vector<int> factorial(INT_MAX);
	factorial[0] = 1;
	int num_digits = 1;
	int carry = 0;

	for(int x = 2; x <= num; x++) {
		carry = 0;

		for(int i = 0; i < num_digits; i++) {
			int product = factorial[i] * x + carry;
			factorial[i] = product % 10;
			carry = product / 10;
		}
		while(carry) {
			factorial[num_digits] = carry % 10;
			carry /= 10;
			num_digits++;
		}
	}

	for(int i = num_digits - 1; i >= 0; i--) {
		std::cout << factorial[i];
	}
	std::cout << '\n';
}

int main() {
	std::cin.tie(nullptr);
	std::ios::sync_with_stdio(false);


	ull test_cases {};
	std::cin >> test_cases;

	int num {};

	while(test_cases--) {
		std::cin >> num;
        solve(num);
	}
	return 0;
}