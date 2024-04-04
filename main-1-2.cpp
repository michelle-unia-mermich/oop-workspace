#include <iostream>
#include "AssetPortfolio.h"
#include "Asset.h"

using namespace std;

int main()
{
    int number_of_assets_to_add=6;
    Asset* list_asset=new Asset[number_of_assets_to_add];
    Asset asset1(8000,"equipment");
    list_asset[0]= asset1;
    Asset asset2(1000000,"bonds");
    list_asset[1]= asset2;
    Asset asset3(5000000, "stocks");
    list_asset[2]= asset3;
    Asset asset4(10000000,"real_estate");
    list_asset[3]= asset4;
    Asset asset5(100000,"cash");
    list_asset[4]= asset5;
    Asset asset6;
    list_asset[5]= asset6;

    AssetPortfolio AssetPortfolio1;           
    AssetPortfolio AssetPortfolio2(5); 

    for(int i=0; i<number_of_assets_to_add; i++)
    {
        if (AssetPortfolio2.add_asset(list_asset[i]))//if this is true, an asset has already been added.
        {
            cout<< "An asset has been added and the current size of the list is "<< AssetPortfolio2.get_num_assets()<< endl;
        }
        else
        {
            cout<< "The list is full and cannot add a new asset into it."<< endl;
        }
    }

    string to_check="inventory";
    cout << "Does the portfolio has asset "<<   to_check<<": ";
    if (AssetPortfolio2.has_asset(to_check))
    {
        cout<< "Yes"<< endl;
    }
    else
    {
        cout<< "No"<<endl;
    }

    cout<< "Print out all assets in the portfolio: "<< endl;
    for(int j=0;j<AssetPortfolio2.get_num_assets();j++)
    {
        cout<<"Asset "<<(j+1)<<" is: "<<AssetPortfolio2.get_assets()[j].get_product_type()<<" with the value of "<<AssetPortfolio2.get_assets()[j].get_value()<<"."<<endl; 
    }

    delete []list_asset;
    return 0;
}
