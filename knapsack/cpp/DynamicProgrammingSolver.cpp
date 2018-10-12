//
// Created by Stanislav Olekhnovich on 25/09/2018.
//

#include <iostream>
#include "DynamicProgrammingSolver.h"

std::vector<bool> DynamicProgrammingSolver::Solve(std::vector<KnapsackItem> items, int knapsackSize, int &resultValue) {
    std::vector<std::vector<int>> memo(items.size());
    for (auto& row: memo) {
        row.resize(knapsackSize + 1, 0);
    }

    for (int i = 0; i < items.size(); i++) {
        auto item = items[i];
        for (int c = 0; c <= knapsackSize; c++) {
            if (item.Weight > c) {
                if (i > 0) memo[i][c] = memo[i-1][c];
            } else {
                if (i > 0) {
                    memo[i][c] = std::max(memo[i-1][c], memo[i-1][c-item.Weight] + item.Value);
                } else {
                    memo[i][c] = item.Value;
                }
            }
        }
    }

    for (auto& row: memo) {
        for (auto& v: row) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }


    resultValue = memo[items.size() - 1][knapsackSize];

    std::cout << "Result: " << resultValue << std::endl;

    std::vector<bool> result(items.size());

    int i = items.size() - 1;
    int c = knapsackSize;
    while (i >= 0) {
        if (i > 0) {
            if (memo[i][c] == memo[i-1][c]) {
                result[i] = false;
            } else {
                result[i] = true;
                c -= items[i].Weight;
            }
        } else {
            if (memo[i][c] > 0) result[i] = true;
            else result[i] = false;
        }
        i--;
    }

    return result;
}
