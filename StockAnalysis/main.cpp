#include <iostream>
#include <string>
#include <vector>

double getInput(const std::string& assetName) {
    double value;
    std::cout << "Enter the " << assetName << " held: \n";
    std::cin >> value;
    if (std::cin.fail()) {
        throw std::runtime_error("Invalid input. Please enter a numeric value.");
    }
    return value;
}

double calculateTotalAsset() {
    std::vector<std::string> assetNames = {
        "Cash",
        "Deposits",
        "Federal Funds Sold & Securities Purchased",
        "Securities Borrowed",
        "Trading Assets",
        "Securities",
        "Loans",
        "Accrued Interest",
        "PP&E",
        "Goodwill",
        "Other Assets"
    };

    double totalAssets = 0.0;
    for (const auto& assetName : assetNames) {
        double assetValue = getInput(assetName);
        totalAssets += assetValue;
    }
    return totalAssets;
}

int main() {
    try {
        double totalAssets = calculateTotalAsset();
        std::cout << "Total assets: " << totalAssets << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
