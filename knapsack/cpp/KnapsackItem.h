//
// Created by Stanislav Olekhnovich on 24/09/2018.
//

#ifndef CPP_KNAPSACKITEM_H
#define CPP_KNAPSACKITEM_H

struct KnapsackItem {
    int Value;
    int Weight;

    KnapsackItem(int Value, int Weight) : Value(Value), Weight(Weight) {}
};

#endif //CPP_KNAPSACKITEM_H
