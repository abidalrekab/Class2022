//
// Created by The Big Boss on 6/16/2022.
//
#include <iostream>

using namespace std;

int main(){
    // PayHourly = $15.50
    // tax = 14%
    // ClothingAcc = 10%
    // SchoolSupp = 1%
    // SavingBond = 25%
    // HelpParents = $0.50
    double Your_Pay, Num_Hours, IncomeBeforeTaxes;
    const double PayHourly = 15.50;
    const float Tax = 0.14;
    const float ClothingAcc = 0.1;
    const float SchoolSupply = 0.01;
    const float SavingBonds = 0.25;
    const float HelpParents = 0.5;
    cout << " Please Enter your Hourly rate = $" ;
    cin >> Your_Pay;
    cout << " Please Enter your total hours = $";
    cin >> Num_Hours;
    // a) Your income before and after taxes from your summer job
    IncomeBeforeTaxes = Num_Hours * Your_Pay;
    cout << "\nYOur income Before Taxes = $" << IncomeBeforeTaxes << endl;
    cout << "YOur income After Taxes = $" << IncomeBeforeTaxes * (1-Tax) << endl;
    // b) The money you spend on clothing and other accessories
    cout << "Your Spending on Clothing and Accessories = $" << IncomeBeforeTaxes * (1-Tax) * ClothingAcc << endl;
    // c) The money you spend on school supplies.
    cout << "Your Spending on School supplies = $" << IncomeBeforeTaxes * (1-Tax) * (1-ClothingAcc) * (SchoolSupply) << endl;
    // d) The money you spend to buy savings bonds
    cout << "Your Spending on Saving Bonds = $" << IncomeBeforeTaxes * (1-Tax) * (1-ClothingAcc) * (1-SchoolSupply) * (SavingBonds)  << endl;
    // e) The money your parents spend to buy additional savings bonds for
    //you.
    cout << "Your Spending on additional savings bonds = $" << IncomeBeforeTaxes * (1-Tax) * (1-ClothingAcc) * (1-SchoolSupply) * (SavingBonds) * HelpParents << endl;

    return 0;

}