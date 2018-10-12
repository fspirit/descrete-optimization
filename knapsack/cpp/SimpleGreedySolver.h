//
// Created by Stanislav Olekhnovich on 24/09/2018.
//

#ifndef CPP_SIMPLEGREEDYSOLVER_H
#define CPP_SIMPLEGREEDYSOLVER_H


#include <vector>
#include "KnapsackItem.h"

class SimpleGreedySolver {

public:
    std::vector<bool> Solve(std::vector<KnapsackItem> items, int knapsackSize, int& resultValue);
};


#endif //CPP_SIMPLEGREEDYSOLVER_H
