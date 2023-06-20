#include <iostream>

double getInput(const std::string& assetName){
    double value;
    std::cout << "Enter the " << assetName << " held: \n";
    std::cin >> value;
    return value;
}
double calculateTotalAsset(){
    double cash = getInput("Cash");
    double deposits = getInput("Deposits");
    double federalFundsAndSecurties = getInput("Federal Funds Sold & Securities Purchased");
    double securitiesBorrowed = getInput("Securities Borrowed");
    double tradingAssets = getInput("Trading Assets");
    double securities = getInput("Securities");
    double loans = getInput("Loans");
    double accuredInterest = getInput("Accured Interest");
    double ppAnde = getInput("PP&E");
    double goodwill = getInput("Goodwill");
    double other = getInput("Other Assets");
    double totalAssets = cash+deposits+federalFundsAndSecurties+securitiesBorrowed+tradingAssets+securities+loans+accuredInterest+ppAnde+goodwill+other;
    std::cout << totalAssets << '\n';
}
int main(){
    double totalAssets = calculateTotalAsset();
    std::cout << "Total assets: " << totalAssets << std::endl;
}