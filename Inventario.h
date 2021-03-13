#include "Producto.h"

class Inventory
{
public:

    float * quantities; //apuntador 
    Product * products;
    int p_registrades;


    Inventory();
    Inventory(float * cts, Product * prods, int p_r);
    int searchProduct(string c);
    void addProduct(Product p, int cant);
    void showInventory();
    void editProduct(string c, int cant);
    void eraseProduct(string c);
};
