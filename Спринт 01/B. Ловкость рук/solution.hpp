#pragma once

#include <array>

constexpr int ROWS_COUNT = 4;
constexpr int COLUMNS_COUNT = 4;
constexpr int MAXIMUM_TIME = 9; // by task definition

int gameTotal(int k, std::array<std::string, ROWS_COUNT> table) {
	k *= 2; // cause there are two players by task definition
	std::array<int, MAXIMUM_TIME + 1> requiredSkill = { 0 };

	for (const auto& row: table) {
		for (char symbol: row) {
			if (symbol != '.') {
				requiredSkill[symbol - '0'] += 1;
			}
		}
	}

	int total = 0;
	for(int skill: requiredSkill) {
		if (skill != 0 && k >= skill) total += 1;
	}
	return total;
}