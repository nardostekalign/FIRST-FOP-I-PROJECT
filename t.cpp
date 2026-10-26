#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <algorithm>
using namespace std;


void carRental() {
    int numPeople;
    int paymentMethod;
    int rentalHours;
    int carChoice;
    int lateHours;
    double totalAmount;

    string name;
    string faydaID;
    string gender;
    const int pricePerHour = 800;
    const int lateFeePerHour = 300;
    
    string carModels[3][3] = {
        {"Toyota Yaris", "Honda Civic", "Hyundai Accent"},
        {"Toyota Corolla", "Honda City", "Nissan Sentra"},
        {"Toyota Hiace", "Ford Transit", "Mercedes Sprinter"}
    };