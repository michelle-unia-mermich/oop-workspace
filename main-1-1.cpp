#include <iostream>
#include "Asset.h"

using namespace std;

int main()
{
    Asset asset1(1000000,"bonds");
    Asset asset2;

    cout << "The value of asset 1 is " << asset1.get_value()<< endl;
    cout << "The product type of asset 1 is "<< asset1.get_product_type()<< endl;

    cout << "The value of asset 2 is " << asset2.get_value()<< endl;
    cout << "The product type of asset 2 is "<< asset2.get_product_type()<< endl;

    return 0;
}
