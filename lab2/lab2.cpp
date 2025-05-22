#include <iostream>
#include <fstream>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main() {
    ifstream inputFile("file.in");
    ofstream outputFile("file.out");

    int height, mass;
    while (inputFile >> height >> mass) {
        if (height == 0 && mass == 0) break;

        BMI person(height, mass);
        double bmi = person.calBMI();
        string category = person.calCategory();

        outputFile << setprecision(4) << left << setw(5) << bmi << " " << category << "\n";
    }

    inputFile.close();
    outputFile.close();

    return 0;
}