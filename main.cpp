#include <iostream>
#include "product.h"
#include <vector>

int main(int, char**){
    Product p{"a", 1};
    Drinkable d{"b", 2, 3};
    Eatable e{"c", 4, 5};
    p.print();
    d.print();
    e.print();
    std::vector<Product*> cart{&d, &e};
    for (Product* i : cart){
        i->print();
    }
}
