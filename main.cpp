// Галкин Артём ИУ10-17
// Проверьте 1 летучку, пожалуйста
#include <iostream>

struct MobilePhone
{
    double weight;
    bool is_broken;
    double price;
};

void printXML()
{
    int num_phones;
    std::cin >> num_phones;

    MobilePhone *phones = new MobilePhone[num_phones];

    for (int i = 0; i < num_phones; i++)
    {
        std::cin >> phones[i].weight >> phones[i].is_broken >> phones[i].price;
    }
    std::cout << "<MobilePhones>" << std::endl;
    for (int i = 0; i < num_phones; i++)
    {
        std::cout << "<MobilePhone id=\"" << i << "\" weight =\""
                  << phones[i].weight << "\" is_broken=\"" << (phones[i].is_broken ? "true" : "false")
                  << "\" price=\"" << phones[i].price << "\"/>" << std::endl;
    }
    std::cout << "</MobilePhones>" << std::endl;

    delete[] phones;
}

int main()
{
    printXML();
    return 0;
}