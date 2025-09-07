#include <iostream>
using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisine;
    int priceRange;
    int reviewScore;
};

Restaurant restaurantInput(Restaurant r);
void restaurantFormat(Restaurant &r1, Restaurant &r2, Restaurant &r3, Restaurant &r4);


//function to create struct, receive user input and return to main
Restaurant restaurantInput(Restaurant r) {

  return r;
}


//function to format and output created struct
void restaurantFormat(Restaurant &r1, Restaurant &r2, Restaurant &r3, Restaurant &r4) {

}

int main() {
    Restaurant r1, r2, r3, r4;

    return 0;
}