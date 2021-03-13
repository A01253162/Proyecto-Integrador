#include "Orden.h"
#include "Inventario.h"
#include "Cliente.h"
#include <iostream>
using namespace std;

int main(){
    float  *  quantities;
    Product  *  products;
    quantities = new float[100];
    products = new Product[100];

    float  * quantities2;
    Product * products2;
    quantities2 = new float[100];
    products2 = new Product[100];

    cout << products[0].code << endl;
    Inventory inv(quantities, products, 0);
    Inventory inv2(quantities2, products2, 0);

    Product p1("432193", "3-Seat Sofa", 1500, 2500, 7, 26);
    Product p2("038475", "Sofa Bed", 700, 1200, 2, 11);
    Product p3("194341", "Bed Frame, Queen", 3000, 4000, 9, 12);
    Product p4("340192", "Corner Base Cabinet", 300, 495, 11, 1);
    Product p5("190349", "Sink Bowl", 177, 250, 22, 12);
    Product p6("034503", "Wood chair", 500, 800, 10, 7);
    Product p7("034812", "Open Cabinet", 2000, 3000, 2, 4);
    Product p8("459283", "TV bench", 3899, 5750, 33, 12);
    Client c1("Rafa Felix", "Golondrinas 528, Hermosillo", "JKSO749321");
    Client c2("Juan Pedro Felix", "Riveras 34, Obregon", "VISE950102");
    Client c1("Aruto Perea", "Calabasas, San Diego ", "JAKS839201");
    Order ord1(1,inv2,c1,0.0,"Cash");

    inv.addProduct(p1,10);
    inv.addProduct(p2,3);
    inv.addProduct(p3,4);
    inv.addProduct(p4,5);
    inv.addProduct(p5,6);
    inv.addProduct(p6,7);
    inv.addProduct(p7,8);
    inv.addProduct(p8,9);
    inv.showInventory();
    inv.editProduct("093021",22);
    inv.eraseProduct("019384");
    inv.showInventory();

    ord1.addProduct("0748283",2,inv);
    ord1.addProduct("029321",3,inv);
    ord1.addProduct("459283",32,inv);
    ord1.showOrder();
    inv.showInventory();
    ord1.processOrder(inv);
    inv.showInventory();
    cout << inv.searchProduct("459283") << endl;


    return 0;
}
 

