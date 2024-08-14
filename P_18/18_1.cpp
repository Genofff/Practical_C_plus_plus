#include <iostream>
#include <string>

class ShopItemOrder {
private:
    std::string name;
    int unit_price;
    int items_ordered;

public:
    void set_name(std::string name) {
        this->name = name;
    }

    void set_unit_price(int unit_price) {
        this->unit_price = unit_price;
    }

    void set_items_ordered(int items_ordered) {
        this->items_ordered = items_ordered;
    }

    std::string get_name() {
        return this->name;
    };

    int get_unit_price() {
        return this->unit_price;
    };

    int get_items_ordered() {
        return this->items_ordered;
    };

    int total_price() {
        return unit_price * items_ordered;
    };

    void print() {
        std::cout << "name: " << this->name << ", unit price: " << this->unit_price << ", items_ordered: "
                  << this->items_ordered << ", total_price: " << total_price() << std::endl;
    }
};

int main() {
    ShopItemOrder order;
    order.set_name("Apple");
    order.set_unit_price(10);
    order.set_items_ordered(5);

    std::cout << "Order Details:\n";
    order.print();

    return 0;
}