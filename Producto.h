#include <string>
using namespace std;
class Product
{

public:
    string code;
    string name;
    float pricep;
    float prices;
    float weight;
    float size;

    Product();
    Product(string c, string n, float pp, float ps, float w, float s);
    void showProduct();

};
