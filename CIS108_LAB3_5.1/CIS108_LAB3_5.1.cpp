/*
*File: PE 5_1.cpp
*Have Fun with these errors
*/


#include <iostream>
using std::cout;
using std::cin;


int main()
{
    double  ProductionHours,
        PreProductionHours,
        ProducersHours,
        ProductionCost,
        PreProductionCost,
        ProducersCost,
        TotalCosts;
    float PRODUCTION_RATE = 100;
    float PRE_PRODUCTION_RATE = 60;
    float PRODUCERS_RATE = 40;
        

    cout <<  "Enter Production Hours: ";
    cin  >>  ProductionHours;
    
    cout <<  "\nEnter Pre-Production Hours: ";
    cin  >>  PreProductionHours;
    
    cout <<  "\nEnter Producers Hours: ";
    cin  >>  ProducersHours;

    ProductionCost = ProductionHours * PRODUCTION_RATE;
    PreProductionCost = PreProductionHours * PRE_PRODUCTION_RATE;
    ProducersCost = ProducersHours * PRODUCERS_RATE;
    
    TotalCosts = ProducersCost + PreProductionCost + ProducersCost;

    cout << "\n\n\t\tCar Dealership Bill\n";
    
    cout << "\n\nProduction Cost: $" << ProductionCost;

    cout << "\n\nPre-Production Cost: $" << PreProductionCost;

    cout << "\n\nProducers Cost: $" << ProducersCost;

    cout << "\n\nWeekly Total Cost: $" << TotalCosts << "\n\n";

    return 0;

}

