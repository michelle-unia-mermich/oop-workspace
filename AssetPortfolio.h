#ifndef ASSET_PORTFOLIO_H
#define ASSET_PORTFOLIO_H
#include "Asset.h"
#include <string>
using namespace std;

class AssetPortfolio 
{
    protected:
        int _max_assets;
        int current_size;
        Asset *_pointer_assets_list;
    public:
        AssetPortfolio();           // default constructor capacity of zero assets
        AssetPortfolio(int size);   // constructor for a portfolio of given size

        // returns the number of assets which are in the portfolio
        int get_num_assets(); 
        
        // returns true if any asset in the portfolio is of the specified product type otherwise returns false
        bool has_asset(string product); 
        
        Asset *get_assets();       // returns the (pointer to) array of assets of the portfolio

        // returns true and adds new asset to the portfolio if the portfolio is not full otherwise returns false
        bool add_asset(Asset new_asset);

    ~AssetPortfolio()
    {
        delete [] _pointer_assets_list;
    };                          
};

#endif 