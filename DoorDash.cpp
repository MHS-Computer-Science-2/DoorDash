// DoorDash Order
#include <iostream>
#include <vector>
using namespace std;

//Struct for a MenuItem
struct MenuItem {
   //Add your 3 attributes here
    
};


int main()
{
    //Name for the order
    string orderName;

    //vector to hold the MenuItems
    vector<MenuItem> orderItems;

    //Ask the user to enter the name on the order
    cout << "Welcome to DoorDash! What is the first name on the order? " << endl;
    cin >> orderName;

    //Ask the user to enter items until they type "checkout"
    while (true) {
        // Create a MenuItem object. You will set the object's attributes to what the user enters below.
       
       
        // Ask the user to enter the item name
        cout << "What item would you like to add (or type checkout to complete order)?" << endl;
   

        // break; the loop if they enter "checkout"


        // Ask the user to enter the price of the menu item
        cout << "What is the price of this item?" << endl;
 

        // Ask the user to enter how many of the menu item they want
        cout << "How many of this item do you want?" << endl;

       
        // Add the object to the vector
   
    } //End of while loop


    // Add the order name to the cout below
    cout << endl;
    cout << "**************************" << endl;
    cout << "Order Summary for " << endl;
    cout << "**************************" << endl;
   

    // Display the MenuItems


    // Display the order total



    system("pause");
}

