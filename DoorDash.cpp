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
    //Items for the order
    vector<MenuItem> orderItems;

    //Ask the user to enter the name on the order
    cout << "Welcome to DoorDash! What is the first name on the order? " << endl;
    cin >> orderName;

    //Ask the user to enter items until they type "checkout"
    while (true) {
        // Ask the user to enter the item name
        cout << "What item would you like to add (or type checkout to complete order)" << endl;
        string name;
        cin >> name;

        // break; if they enter "checkout"


        // Ask the user to enter the price of the menu item
 

        // Ask the user to enter how many of the menu item they want


        // Create a MenuItem object, set the object values to what the user entered, 
        // and push the object onto the vector
   
    }


    cout << endl;
    cout << "*************" << endl;
    cout << "Order Summary " << endl;
    cout << "*************" << endl;

    //Display the MenuItems


    //Display the final order total



    system("pause");
}

