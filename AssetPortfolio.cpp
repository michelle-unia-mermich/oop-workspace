#include <iostream>
#include "AssetPortfolio.h"
#include <string>
using namespace std;

AssetPortfolio::AssetPortfolio()
{
    _max_assets=0;   
    current_size=0;
    //do not declare, _pointer_assets_list is a pointer pointing to null?
}

AssetPortfolio::AssetPortfolio(int size)
{
    _max_assets=size;
    current_size=0;
    _pointer_assets_list= new Asset[size];

}

// returns the (pointer to) array of assets of the portfolio
Asset* AssetPortfolio::get_assets()
{
    return _pointer_assets_list;
}    

// returns true and adds new asset to the portfolio if the portfolio is not full otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset)
{
    bool ans=false;
    if (current_size<_max_assets)
    {
        ans=true;
        //if current_size=0; _max_assets=5, add new asset to array element index 0
        //if current_size=1; _max_assets=5, add new asset to array element index 1
        //if current_size=4; _max_assets=5, add new asset to array element index 4 (the last one)
        _pointer_assets_list[current_size]=new_asset;
        current_size++;
    }
    return ans;
}

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets()
{
    return current_size;
}


// returns true if any asset in the portfolio is of the specified product type otherwise returns false
bool AssetPortfolio::has_asset(string product)
{
    //let's say when current_size =5, max size=5; the add function will stop adding.
    //when current_size=4; there are only 3 elements from 0,1,2,3 => put i<current_size
    bool ans=false;
    for(int i=0; i<current_size;i++)
    {
        if(_pointer_assets_list[i].get_product_type()==product)
        {
            ans=true;
        }
    }
    return ans;
}
