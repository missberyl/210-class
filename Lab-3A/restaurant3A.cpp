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
     while (r.priceRange <= 0 || r.priceRange >= 6) {
        cout << "Invalid Input. Try Again." << endl;
        cout << "Restaurant Price? (1 thru 5, 1 being lowest)" << endl;
        cin >> r.priceRange;
        cin.ignore(100, '\n');
    }
//review score 1-5 (prints as stars?)
    cout << "Restaurant Review Score? (1 thru 5, 1 being lowest)" << endl;
    cin >> r.reviewScore;
    cin.ignore(100, '\n');
    while (r.reviewScore <= 0 || r.reviewScore >= 6) {
        cout << "Invalid Input. Try Again." << endl;
        cout << "Restaurant Review Score? (1 thru 5, 1 being lowest)" << endl;
        cin >> r.reviewScore;
        cin.ignore(100, '\n');
    }
    return r;
}
//function to format and output created struct, overloaded for multiple input
void restaurantFormat(const Restaurant &r) {
//NAME      [ADDRESS]            [CUISINE]     [PRICE]  [REVIEW]
    string reviewS, priceR;
    switch(r.reviewScore) {
        case 1:
            reviewS = "!";
            break;
        case 2:
            reviewS = "!!";
            break;
        case 3:
            reviewS = "!!!";
            break;
        case 4:
            reviewS = "!!!!";
            break;
        case 5:
            reviewS = "!!!!!";
            break;
        default:
            reviewS = "";
            break;
}
    switch(r.priceRange) {
        case 1:
            priceR = "$";
        break;
        case 2:
            priceR = "$$";
        break;
        case 3:
            priceR = "$$$";
        break;
        case 4:
            priceR = "$$$$";
        break;
        case 5:
            priceR = "$$$$$";
        break;
        default:
            priceR = "";
        break;
}

    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r.name << setw(30) << r.address << setw(15) << r.cuisine << right << setw(7) << priceR << right << setw(7) << reviewS << endl;
}
void restaurantFormat(const Restaurant &r1, const Restaurant &r2) {
    string reviewS1, priceR1, reviewS2, priceR2;
    switch(r1.reviewScore) {
        case 1:
            reviewS1 = "!";
        break;
        case 2:
            reviewS1 = "!!";
        break;
        case 3:
            reviewS1 = "!!!";
        break;
        case 4:
            reviewS1 = "!!!!";
        break;
        case 5:
            reviewS1 = "!!!!!";
        break;
        default:
            reviewS1 = "";
        break;
    }
    switch(r1.priceRange) {
        case 1:
            priceR1 = "$";
        break;
        case 2:
            priceR1 = "$$";
        break;
        case 3:
            priceR1 = "$$$";
        break;
        case 4:
            priceR1 = "$$$$";
        break;
        case 5:
            priceR1 = "$$$$$";
        break;
        default:
            priceR1 = "";
        break;
    }
    switch(r2.reviewScore) {
        case 1:
            reviewS2 = "!";
        break;
        case 2:
            reviewS2 = "!!";
        break;
        case 3:
            reviewS2 = "!!!";
        break;
        case 4:
            reviewS2 = "!!!!";
        break;
        case 5:
            reviewS2 = "!!!!!";
        break;
        default:
            reviewS2 = "";
        break;
    }
    switch(r2.priceRange) {
        case 1:
            priceR2 = "$";
        break;
        case 2:
            priceR2 = "$$";
        break;
        case 3:
            priceR2 = "$$$";
        break;
        case 4:
            priceR2 = "$$$$";
        break;
        case 5:
            priceR2 = "$$$$$";
        break;
        default:
            priceR2 = "";
        break;
    }

    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << priceR1 << right << setw(7) << reviewS1 << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << priceR2 << right << setw(7) << reviewS2 << endl;
}
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3) {
    string reviewS1, priceR1, reviewS2, priceR2, reviewS3, priceR3;
    switch(r1.reviewScore) {
        case 1:
            reviewS1 = "!";
        break;
        case 2:
            reviewS1 = "!!";
        break;
        case 3:
            reviewS1 = "!!!";
        break;
        case 4:
            reviewS1 = "!!!!";
        break;
        case 5:
            reviewS1 = "!!!!!";
        break;
        default:
            reviewS1 = "";
        break;
    }
    switch(r1.priceRange) {
        case 1:
            priceR1 = "$";
        break;
        case 2:
            priceR1 = "$$";
        break;
        case 3:
            priceR1 = "$$$";
        break;
        case 4:
            priceR1 = "$$$$";
        break;
        case 5:
            priceR1 = "$$$$$";
        break;
        default:
            priceR1 = "";
        break;
    }
    switch(r2.reviewScore) {
        case 1:
            reviewS2 = "!";
        break;
        case 2:
            reviewS2 = "!!";
        break;
        case 3:
            reviewS2 = "!!!";
        break;
        case 4:
            reviewS2 = "!!!!";
        break;
        case 5:
            reviewS2 = "!!!!!";
        break;
        default:
            reviewS2 = "";
        break;
    }
    switch(r2.priceRange) {
        case 1:
            priceR2 = "$";
        break;
        case 2:
            priceR2 = "$$";
        break;
        case 3:
            priceR2 = "$$$";
        break;
        case 4:
            priceR2 = "$$$$";
        break;
        case 5:
            priceR2 = "$$$$$";
        break;
        default:
            priceR2 = "";
        break;
    }
    switch(r3.reviewScore) {
        case 1:
            reviewS3 = "!";
        break;
        case 2:
            reviewS3 = "!!";
        break;
        case 3:
            reviewS3 = "!!!";
        break;
        case 4:
            reviewS3 = "!!!!";
        break;
        case 5:
            reviewS3 = "!!!!!";
        break;
        default:
            reviewS3 = "";
        break;
    }
    switch(r3.priceRange) {
        case 1:
            priceR3 = "$";
        break;
        case 2:
            priceR3 = "$$";
        break;
        case 3:
            priceR3 = "$$$";
        break;
        case 4:
            priceR3 = "$$$$";
        break;
        case 5:
            priceR3 = "$$$$$";
        break;
        default:
            priceR3 = "";
        break;
    }
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << priceR1 << right << setw(7) << reviewS1 << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << priceR2 << right << setw(7) << reviewS2 << endl;
    cout << left<< setw(15) << r3.name << setw(30) << r3.address << setw(15) << r3.cuisine << right << setw(7) << priceR3 << right << setw(7) << reviewS3 << endl;
}
//I can think of ways this would be a lot easier and cleaner to implement using classes instead of structures
void restaurantFormat(const Restaurant &r1, const Restaurant &r2, const Restaurant &r3, const Restaurant &r4) {
    string reviewS1, priceR1, reviewS2, priceR2, reviewS3, priceR3, reviewS4, priceR4;
    switch(r1.reviewScore) {
        case 1:
            reviewS1 = "!";
        break;
        case 2:
            reviewS1 = "!!";
        break;
        case 3:
            reviewS1 = "!!!";
        break;
        case 4:
            reviewS1 = "!!!!";
        break;
        case 5:
            reviewS1 = "!!!!!";
        break;
        default:
            reviewS1 = "";
        break;
    }
    switch(r1.priceRange) {
        case 1:
            priceR1 = "$";
        break;
        case 2:
            priceR1 = "$$";
        break;
        case 3:
            priceR1 = "$$$";
        break;
        case 4:
            priceR1 = "$$$$";
        break;
        case 5:
            priceR1 = "$$$$$";
        break;
        default:
            priceR1 = "";
        break;
    }
    switch(r2.reviewScore) {
        case 1:
            reviewS2 = "!";
        break;
        case 2:
            reviewS2 = "!!";
        break;
        case 3:
            reviewS2 = "!!!";
        break;
        case 4:
            reviewS2 = "!!!!";
        break;
        case 5:
            reviewS2 = "!!!!!";
        break;
        default:
            reviewS2 = "";
        break;
    }
    switch(r2.priceRange) {
        case 1:
            priceR2 = "$";
        break;
        case 2:
            priceR2 = "$$";
        break;
        case 3:
            priceR2 = "$$$";
        break;
        case 4:
            priceR2 = "$$$$";
        break;
        case 5:
            priceR2 = "$$$$$";
        break;
        default:
            priceR2 = "";
        break;
    }
    switch(r3.reviewScore) {
        case 1:
            reviewS3 = "!";
        break;
        case 2:
            reviewS3 = "!!";
        break;
        case 3:
            reviewS3 = "!!!";
        break;
        case 4:
            reviewS3 = "!!!!";
        break;
        case 5:
            reviewS3 = "!!!!!";
        break;
        default:
            reviewS3 = "";
        break;
    }
    switch(r3.priceRange) {
        case 1:
            priceR3 = "$";
        break;
        case 2:
            priceR3 = "$$";
        break;
        case 3:
            priceR3 = "$$$";
        break;
        case 4:
            priceR3 = "$$$$";
        break;
        case 5:
            priceR3 = "$$$$$";
        break;
        default:
            priceR3 = "";
        break;
    }
    switch(r4.reviewScore) {
        case 1:
            reviewS4 = "!";
        break;
        case 2:
            reviewS4 = "!!";
        break;
        case 3:
            reviewS4 = "!!!";
        break;
        case 4:
            reviewS4 = "!!!!";
        break;
        case 5:
            reviewS4 = "!!!!!";
        break;
        default:
            reviewS4 = "";
        break;
    }
    switch(r4.priceRange) {
        case 1:
            priceR4 = "$";
        break;
        case 2:
            priceR4 = "$$";
        break;
        case 3:
            priceR4 = "$$$";
        break;
        case 4:
            priceR4 = "$$$$";
        break;
        case 5:
            priceR4 = "$$$$$";
        break;
        default:
            priceR4 = "";
        break;
    }
    cout << left<< setw(15) << "NAME" << setw(30) << "ADDRESS" << setw(15) << "CUISINE" << right << setw(7) << "PRICE" << right << setw(7) << "SCORE" << endl;
    cout << left<< setw(15) << r1.name << setw(30) << r1.address << setw(15) << r1.cuisine << right << setw(7) << priceR1 << right << setw(7) << reviewS1 << endl;
    cout << left<< setw(15) << r2.name << setw(30) << r2.address << setw(15) << r2.cuisine << right << setw(7) << priceR2 << right << setw(7) << reviewS2 << endl;
    cout << left<< setw(15) << r3.name << setw(30) << r3.address << setw(15) << r3.cuisine << right << setw(7) << priceR3 << right << setw(7) << reviewS3 << endl;
    cout << left<< setw(15) << r4.name << setw(30) << r4.address << setw(15) << r4.cuisine << right << setw(7) << priceR4 << right << setw(7) << reviewS4 << endl;
}

int main() {
    Restaurant r1, r2, r3, r4;
    int rMake = 0;

    cout << "How many restaurants do you want to enter? (1-4) " << endl;
    cin >> rMake;
    cin.ignore(100, '\n');
    while (rMake <= 0 || rMake >= 5) {
        cout << "Input Error, Try Again." << endl;
        cout << "How many restaurants do you want to enter? (1-4) " << endl;
        cin >> rMake;
        cin.ignore(100, '\n');
    }

    if (rMake == 1) {
        restaurantInput(r1);
        restaurantFormat(r1);
}
    else if (rMake == 2) {
        restaurantInput(r1);
        restaurantInput(r2);
        restaurantFormat(r1, r2);
}
    else if (rMake == 3) {
        restaurantInput(r1);
        restaurantInput(r2);
        restaurantInput(r3);
        restaurantFormat(r1, r2, r3);
}
    else if (rMake == 4) {
        restaurantInput(r1);
        restaurantInput(r2);
        restaurantInput(r3);
        restaurantInput(r4);
        restaurantFormat(r1, r2, r3, r4);
}
    return 0;
}