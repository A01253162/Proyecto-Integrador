#include "Inventario.h"
#include <iostream>
using namespace std;

Inventory::Inventory(){
    quantities = new float[100];
    products = new Product[100];
    p_registrades = 0;
}

Inventory::Inventory(float * cts, Product * prods, int p_r){
    quantities = cts;
    products = prods;
    p_registrades = p_r;
    
}

int Inventory::searchProduct(string c){
    for (int i=0; i<=p_registrades; i++){
        if(products[i].code == c){
            return 1;

        }
    }
    return -1;
}
 void Inventory::addProduct(Product p, int cant){
     products[p_registrades] = p;
     quantities[p_registrades] = cant;
     p_registrades += 1;
 }

void Inventory::showInventory(){
    for (int i=0; i<p_registrades; i++){
        products[i].showProduct();
        cout << "quantitie : "<< quantities[i]<< endl;
    }
}

void Inventory::eraseProduct(string c){
    if(p_registrades>0){
        int i = searchProduct(c);
        if(i>=0){
        products[i] = products[p_registrades-1];
        quantities[i] = quantities[p_registrades-1];

        products[p_registrades-1] = products[p_registrades];
        quantities[p_registrades-1] = 0;

        p_registrades--;

        cout << "Erase -> "<< c << "The amount is: "<<p_registrades << endl;
        }else{
            cout << c << ": Product dont found" << endl;
        }
    }else{
        cout << "No products" << endl;
    }         
    
}

void Inventory::editProduct(string c, int cant){
    int i = searchProduct(c);
    quantities[i] = cant;
}