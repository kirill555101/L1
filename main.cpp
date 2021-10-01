#include <iostream>
#include <list>
#include <memory>

enum MetalType
{
    RARE,
    HEAVY,
    LIGHT
};

struct Exhibit
{
    std::string special_name;

    MetalType metal_type;

    std::string currency_name;

    int count_of_currency, count_of_coins;
};

int main()
{
    std::list<std::shared_ptr<Exhibit>> collection =
        {
            std::make_shared<Exhibit>(Exhibit{"name3", RARE, "RU", 70, 10}),
            std::make_shared<Exhibit>(Exhibit{"name2", HEAVY, "RU", 60, 20}),
            std::make_shared<Exhibit>(Exhibit{"name1", LIGHT, "RU", 50, 30}),
        };

    for (const auto &exhibit : collection)
    {
        std::cout << "Special name: " << exhibit->special_name << std::endl;
        std::cout << "Metal type: " << exhibit->metal_type << std::endl;
        std::cout << "Currency name: " << exhibit->currency_name << std::endl;
        std::cout << "Count of currency: " << exhibit->count_of_currency << std::endl;
        std::cout << "Count of coins: " << exhibit->count_of_coins << std::endl;

        std::cout << std::endl;
    }

    return 0;
}
