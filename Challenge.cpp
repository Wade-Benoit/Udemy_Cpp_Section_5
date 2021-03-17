// Wade Benoit, 2019

#include <iostream>
#include <climits>
using namespace std;



 // Section 6 Challenge, Wade's Carpet Cleaning Service

// Pseudocode:
// Prompt user for number of small rooms
// Prompt user for number of large rooms
// Display standard price per small room
// Display standard price per large room
// Compute CostOfRooms
// Compute Sales Tax
// Compute Total Cost
// Display Cost
// Display Tax
// Display Total Cost
 


int main()
{
	 
    
    const double smallRoomPrice {25.00};
    const double largeRoomsPrice {35.00};
    const double salesTaxRate        {0.06};
    int largeRooms;
    int smallRooms;
    
    
    // Prompt user for rooms:
    
    cout << "How many Large Rooms will you be booking?" << endl;
    cin >> largeRooms;
    
    cout << "How many Small Rooms will you be booking?" << endl;
    cin >> smallRooms;
    
    
    // Display Room prices
    
    cout << "\nThe price per large room is: " << largeRoomsPrice << endl;
    cout << "The price per small room is: " << smallRoomPrice << endl;
    
    
    // Compute Cost of Rooms, Sales Tax, and Total Cost
    
    double roomTotalCost = (largeRooms * largeRoomsPrice) + (smallRooms * smallRoomPrice);
    double salesTax            = roomTotalCost * salesTaxRate;
    double totalCost           = roomTotalCost + salesTax;
    
    
    
    // Display Cost of Rooms, Taxes, and Total Cost:
    
    
    cout << "\nCost: $" << roomTotalCost << endl;
    cout << "Taxes: $" << salesTax << endl;
    cout << "Total Cost: $" << totalCost << endl;
    
    
    return 0;
}
