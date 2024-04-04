#include <iostream>
#include "Asset.h"
#include <string>
using namespace std;

Asset::Asset()
{
    _value=0;
    _product_type="";
}

Asset::Asset(int value, string product_type)
{
    _value= value;
    _product_type= product_type;

}

string Asset::get_product_type()
{
    return _product_type;
}

int Asset::get_value()
{
    return  _value;
}