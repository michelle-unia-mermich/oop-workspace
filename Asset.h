#ifndef ASSET_H
#define ASSET_H
#include <string>
using namespace std;

class Asset 
{
    protected:
        int _value;
        string _product_type;
    public:
        Asset();
        Asset(int value, string product_type);      
        string get_product_type();    // returns the financial asset type 
        int get_value();                   // returns the the value of asset
    
    ~Asset()
    {
        
    };                          // A default destructor
};

#endif //ASSET