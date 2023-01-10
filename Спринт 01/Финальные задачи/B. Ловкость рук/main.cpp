#include <iostream>

#include "solution.hpp"

int main() {
	int k; // 1 <= k <= 5
	std::cin >> k; std::cin.ignore(1);

	std::array<std::string, ROWS_COUNT> table;
	for (int i = 0; i != ROWS_COUNT; ++i) {
		std::string row;
		std::getline(std::cin, row);
		table[i] = row;
	}

	std::cout << gameTotal(k, table) << '\n';
}