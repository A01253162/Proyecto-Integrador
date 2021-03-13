#include "Producto.h"
#include <iostream>
using namespace std;

Product::Product(){
    code = "<Default Code>";
    name = "<Default Name>";
    pricep = 0;
    prices = 0;
    weight = 0;
    size = 0;
}

Product::Product(string c, string n, float pp, float ps, float w, float s){
    code = c;
    name = n;
    pricep = pp;
    prices = ps;
    weight = w;
    size = s;
}

void Product::showProduct(){
    cout << "code           : " << code << endl;
    cout << "name           : " << name << endl;
    cout << "purchase price : " << pricep << endl;
    cout << "sale price     : " << prices << endl;
    cout << "price          : " << weight << endl;
    cout << "size         : " << size << endl;
}
