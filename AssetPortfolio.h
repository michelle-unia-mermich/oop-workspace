#ifndef ASSET_PORTFOLIO_H
#define ASSET_PORTFOLIO_H
#include <string>
using namespace std;

class AssetPortfolio 

//It has a maximum number of Assets and a list of Assets that currently belong to the portfolio.
{
    protected:
        int _max_assets;
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

#endif 