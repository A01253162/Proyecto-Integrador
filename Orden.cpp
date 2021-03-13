#include "Orden.h"
#include <iostream>
using namespace std;


Order::Order(int i, Inventory inventory, Client client, float total, string way_t_pay){
Client c;
float * quantities;
Product * products;
quantities = new float[100];
products = new Product[100];
id = 0;
Inventory inv(quantities, products, 0);
inventory = inv;
client = c;
total = 0;
way_t_pay = "Cash";
}

Order::Order(int i, Inventory inv, Client c, float t, string wtp){
    id = i;
    inventory = inv;
    client = c;
    total = t;
    way_t_pay = wtp;
}

void Order::addProduct(string c, int cant, Inventory global_inventory){
    int igi = global_inventory.searchProduct(c);
    if(igi >= 0){
        if(global_inventory.quantities[igi] > cant){
            inventory.addProduct(global_inventory.products[igi], cant);
        }
    }else{
        cout << "The product " << c << "It is not on the order " << endl;
    }
        
}

void Order::removeProduct(string c){
    inventory.eraseProduct(c);
}

void Order::processOrder(Inventory global_inventory){
    processTotal();
    string code;
    int quantities;
    int global_quantities;

    int igi;

    for(int i=0; i<inventory.p_registrades; i++){
        code = inventory.products[i].code;
        quantities = inventory.quantities[i];

        igi = global_inventory.searchProduct(code);
        global_quantities = global_inventory.quantities[igi];
        cout << code << endl;
        cout << quantities << ":" << global_quantities << ":" << global_quantities-quantities << endl;
        global_inventory.editProduct(code, global_quantities-quantities);   
    }
}

void Order::processTotal(){
    total = 0;
    float price;
    int quantitie;
    int global;
    for (int i=0; i<inventory.p_registrades; i++){
        price = inventory.products[i].prices;
        quantitie = inventory.quantities[i];
        total += (price*quantitie);
    
    }
}


void Order::showOrder(){
    processTotal();
    cout << "id order : " << id << endl;
    cout << "client name : " << client.name << endl;
    cout << "direction : " << client.direction << endl;
    cout << "rfc : " << client.rfc << endl;
    cout << endl;
    inventory.showInventory();
    cout << "total : " << total << endl;
    cout << "way to pay : " << way_t_pay << endl;
    
}

