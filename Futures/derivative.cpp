#include <iostream>

class ForwardContract
{
private:
    double spotPrice;
    double forwardPrice;
    double riskFreeRate;
    double timeToMaturity;

public:
    // Constructor
    ForwardContract(double spot, double forward, double rate, double maturity)
    {
        spotPrice = spot;
        forwardPrice = forward;
        riskFreeRate = rate;
        timeToMaturity = maturity;
    }

    // Calculate the fair value of the forward contract
    double calculateFairValue()
    {
        double discountFactor = exp(-riskFreeRate * timeToMaturity);
        return (spotPrice - forwardPrice) * discountFactor;
    }
};

int main()
{
    double spot = 100.0;    // Spot price of the underlying asset
    double forward = 105.0; // Forward price agreed upon
    double rate = 0.05;     // Risk-free interest rate
    double maturity = 1.0;  // Time to maturity in years

    // Create a forward contract object
    ForwardContract contract(spot, forward, rate, maturity);

    // Calculate the fair value of the forward contract
    double fairValue = contract.calculateFairValue();

    // Display the fair value
    std::cout << "Fair value of the forward contract: " << fairValue << std::endl;

    return 0;
}
