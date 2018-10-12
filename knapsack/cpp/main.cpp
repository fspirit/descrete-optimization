#include <iostream>
#include <fstream>
#include <vector>

#include "KnapsackItem.h"
#include "SimpleGreedySolver.h"
#include "DynamicProgrammingSolver.h"

int main(int argc, char* argv[]) {
        
    if (argc < 2) {
        // Tell the user how to run the program
        std::cerr << "Usage: " << argv[0] << " INPUT_FILE_PATH" << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);

    int itemsCount = 0;
    int capacity = 0;

    infile >> itemsCount >> capacity;

    std::vector<KnapsackItem> items;
    int counter = 0;
    while(counter++ < itemsCount) {
        int value = 0;
        int weight = 0;
        infile >> value >> weight;

        items.emplace_back(value, weight);
    }

    auto solver = DynamicProgrammingSolver();
    int resultValue;

    auto result = solver.Solve(items, capacity, resultValue);

    std::cout << resultValue << " " << 0 << std::endl;
    for (auto b: result) {
        if (b) std::cout << 1 << " ";
        else std::cout << 0 << " ";
    }

    return 0;
}