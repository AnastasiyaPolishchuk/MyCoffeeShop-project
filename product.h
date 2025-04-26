#include <string>

class Product{
    public:
    Product(const std::string& name, uint64_t price);
    const std::string& getName() const;
    uint64_t getPrice() const;
    void printInfo() const;
    virtual void print() const;
    private:
    std::string _name;
    uint64_t _price;
};

class Drinkable:public Product{
    public:
    Drinkable(const std::string& name, uint64_t price, uint16_t volume);
    void print() const override;
    private:
    uint16_t _volume;
};

class Eatable:public Product{
    public:
    Eatable(const std::string& name, uint64_t price, uint16_t weight);
    void print() const override;
    private:
    uint16_t _weight;
};

