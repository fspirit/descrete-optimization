//
// Created by Stanislav Olekhnovich on 25/09/2018.
//

#ifndef CPP_DYNAMICPROGRAMMINGSOLVER_H
#define CPP_DYNAMICPROGRAMMINGSOLVER_H


#include <vector>
#include "KnapsackItem.h"

class DynamicProgrammingSolver {
public:
    std::vector<bool> Solve(std::vector<KnapsackItem> items, int knapsackSize, int& resultValue);

};


#endif //CPP_DYNAMICPROGRAMMINGSOLVER_H
