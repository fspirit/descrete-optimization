//
// Created by Stanislav Olekhnovich on 24/09/2018.
//

#include "SimpleGreedySolver.h"
#include <algorithm>

std::vector<bool> SimpleGreedySolver::Solve(std::vector<KnapsackItem> items, int knapsackSize, int& resultValue) {

    std::sort(std::begin(items), std::end(items), [](KnapsackItem& lhs, KnapsackItem& rhs) { return lhs.Value / lhs.Weight > rhs.Value / rhs.Weight; });

    int currentSize = 0;
    int currentValue = 0;

    std::vector<bool> result(items.size());

    for (int i = 0; i != items.size(); i++) {
        auto& item = items[i];
        if (currentSize + item.Weight <= knapsackSize) {
            currentSize += item.Weight;
            currentValue += item.Value;
            result[i] = true;
        }
    }

    resultValue = currentValue;
    return result;
}
