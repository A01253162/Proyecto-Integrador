#include "Inventario.h"
#include "Cliente.h"

class Order
{

private:
    int id;
    Inventory inventory;
    Client client;
    float total;
    string way_t_pay;

public:
    Order();
    Order(int i, Inventory inv, Client c, float t, string wtp);
    void addProduct(string c, int cant, Inventory global_inventory);
    void removeProduct(string c);
    void processTotal();
    void processOrder(Inventory global_inventory);
    void showOrder();
};