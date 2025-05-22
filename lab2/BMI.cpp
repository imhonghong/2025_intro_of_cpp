#include "BMI.h"
#include <cmath>

//Constructor
BMI::BMI() {
    height = 0;
    mass = 0;
}
BMI::BMI(int h, int m) {
    height = h;
    mass = m;
}

//Getters and setters
void BMI::setHeight(int h) {
    height = h;
}
void BMI::setMass(int m) {
    mass = m;
}
int BMI::getHeight() {
    return height;
}
int BMI::getMass() {
    return mass;
}

//functions
double BMI::calBMI() {
    return mass / pow(height / 100.0, 2);
}
string BMI::calCategory() {
    double bmi = calBMI();
    if (bmi < 15) return "Very severely underweight";
    if (bmi < 16) return "Severely underweight";
    if (bmi < 18.5) return "Underweight";
    if (bmi < 25) return "Normal";
    if (bmi < 30) return "Overweight";
    if (bmi < 35) return "Obese Class I (Moderately obese)";
    if (bmi < 40) return "Obese Class II (Severely obese)";
    return "Obese Class III (Very severely obese)";
}
