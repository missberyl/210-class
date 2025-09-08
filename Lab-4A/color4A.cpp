// COMSC-210 | Lab 4A | Beryl
// IDE used: CLion

#include <iostream>
#include <vector>
#include <iomanip>
#include <random>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
//store red, green, blue hue values
};

int main() {
//vector of structs type <Color>
    vector<Color> colors;
//random n between 25-50
    int minNval = 25;
    int maxNval = 50;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(minNval, maxNval);
    int n = distrib(gen);
//create n structs
    for (int i = 0; i < n; i++) {
//randomize RGB (xyz) values for structs to be made
        int min_val = 1;
        int max_val = 255;
        uniform_int_distribution<> distrib(min_val, max_val);
        int x = distrib(gen);
        int y = distrib(gen);
        int z = distrib(gen);
        Color c = {x, y, z};
//add n structs to vector <Color>
        colors.push_back(c);
}
//formatted output of vector <Color>
    cout << left << setw(5) << "#" << setw(5) << "R" << setw(5) << "G" << setw(5) << "B" << endl;
    cout << "------------------" << endl;
    for (int i = 0; i < colors.size(); i++) {
      cout << left << setw(5) << (i + 1) << setw(5)<< colors[i].red << setw(5) << colors[i].green << setw(5) << colors[i].blue << endl;
}
    return 0;
}