#include "Cliente.h"
#include <iostream>
using namespace std;

Client::Client(){
    name = "<Default Name>";
    direction = "<Default Direction>";
    rfc = "<Default RFC";

}

Client::Client(string n, string d, string r){
    name = n;
    direction = d;
    rfc = r;
}