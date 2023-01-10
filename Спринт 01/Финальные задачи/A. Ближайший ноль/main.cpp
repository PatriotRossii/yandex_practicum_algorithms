#include <iostream>
#include <algorithm>
#include <limits>

template <typename Iterator>
std::vector<int> prefixDistance(Iterator begin, Iterator end) {
	int lastZero = -1;
	int i = 0;
	std::vector<int> distance(end - begin);

	for (auto it = begin; it != end; ++it, ++i) {
		if (*it == 0) {
			lastZero = i;
		}
		if (lastZero == -1) {
			distance[i] = std::numeric_limits<int>::max();
		} else {
			distance[i] = std::abs(i - lastZero);
		}
	}

	return distance;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> households(n);

	for (int& household: households) {
		std::cin >> household;
	}

	std::vector<int> leftDistance = prefixDistance(households.begin(), households.end());
	std::vector<int> rightDistance = prefixDistance(households.crbegin(), households.crend());

	for (int i = 0; i != n; ++i) {
		std::cout << std::min(leftDistance[i], rightDistance[n - i - 1]) << ' ';
	}
	std::cout << '\n';
}