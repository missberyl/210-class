#include <iostream>
#include <iomanip>
using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisine;
    int priceRange{};
    int reviewScore{};
};
//function prototypes
Restaurant restaurantInput(Restaurant &r);
void restaurantFormat(const Restaurant &r);
void restaurantFormat(const Restaurant &r1, const Restaurant &r2);
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3);
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3, const Restaurant &r4);

//function to create struct, receive user input and return to main
Restaurant restaurantInput(Restaurant &r) {
    //name
    cout << "Restaurant Name? " << endl;
    getline(cin, r.name);
    //address
    cout << "Restaurant Address? " << endl;
    getline(cin, r.address);
    //cuisine
    cout << "Restaurant Cuisine? " << endl;
    getline(cin, r.cuisine);
    //price range, 1-5 (prints as $)
    cout << "Restaurant Price? (1 thru 5, 1 being lowest)" << endl;
    cin >> r.priceRange;
    cin.ignore(100, '\n');
    //review score 1-5 (prints as stars?)
    cout << "Restaurant Review Score? (1 thru 5, 1 being lowest)" << endl;
    cin >> r.reviewScore;
    cin.ignore(100, '\n');
    return r;
}
//function to format and output created struct, overloaded for multiple input
void restaurantFormat(const Restaurant &r) {
//NAME      [ADDRESS]            [CUISINE]     [PRICE]  [REVIEW]
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r.name << setw(30) << r.address << setw(15) << r.cuisine << right << setw(7) << r.priceRange << right << setw(7) << r.reviewScore << endl;
}
void restaurantFormat(const Restaurant &r1, const Restaurant &r2) {
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << r1.priceRange << right << setw(7) << r1.reviewScore << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << r2.priceRange << right << setw(7) << r2.reviewScore << endl;
}
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3) {
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << r1.priceRange << right << setw(7) << r1.reviewScore << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << r2.priceRange << right << setw(7) << r2.reviewScore << endl;
    cout << left<< setw(15) << r3.name << setw(30) << r3.address << setw(15) << r3.cuisine << right << setw(7) << r3.priceRange << right << setw(7) << r3.reviewScore << endl;
}
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3, const Restaurant &r4) {
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << r1.priceRange << right << setw(7) << r1.reviewScore << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << r2.priceRange << right << setw(7) << r2.reviewScore << endl;
    cout << left<< setw(15) << r3.name << setw(30) << r3.address << setw(15) << r3.cuisine << right << setw(7) << r3.priceRange << right << setw(7) << r3.reviewScore << endl;
    cout << left<< setw(15) << r4.name << setw(30) << r4.address << setw(15) << r4.cuisine << right << setw(7) << r4.priceRange << right << setw(7) << r4.reviewScore << endl;
}

int main() {
    Restaurant r1, r2, r3, r4;
    restaurantInput(r1);
    //restaurantInput(r2);
    //restaurantInput(r3);
    //restaurantInput(r4);

    restaurantFormat(r1);
    //restaurantFormat(r2);
    //restaurantFormat(r3);
    //restaurantFormat(r4);
    return 0;
}
