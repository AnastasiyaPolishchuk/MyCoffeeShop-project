#include "product.h"
#include <iostream>

Product::Product(const std::string& name, uint64_t price):_name(name), _price(price)
{
}

const std::string& Product::getName() const
{
    return _name;
}

uint64_t Product::getPrice() const
{
    return _price;
}

void Product::printInfo() const
{
    std::cout << _name << ": " << _price;
}

void Product::print() const
{
    printInfo();
    std::cout << '\n';
}

Drinkable::Drinkable(const std::string& name, uint64_t price, uint16_t volume):Product(name, price), _volume(volume)
{
}

void Drinkable::print() const
{
    printInfo();
    std::cout << ' ' << _volume << '\n';
}

Eatable::Eatable(const std::string& name, uint64_t price, uint16_t weight):Product(name, price), _weight(weight)
{
}

void Eatable::print() const
{
    printInfo();
    std::cout << ' ' << _weight << '\n';
}
