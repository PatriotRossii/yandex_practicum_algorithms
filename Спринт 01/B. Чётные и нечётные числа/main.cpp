#include <iostream>

bool winCheck(int a, int b, int c) {
	bool aEven = a % 2, bEven = b % 2, cEven = c % 2;
	return (aEven == bEven) && (aEven == cEven) && (bEven == cEven);
}

int main() {
	int a, b, c; // a, b, c are integers <= 10^9
	std::cin >> a >> b >> c;
	std::cout << (winCheck(a, b, c) ? "WIN" : "FAIL") << '\n';
}