# include <string>
using namespace std;

class BMI {

    public:
        //Constructor
        BMI();
        BMI(int h, int m);

        //Getters and setters
        void setHeight(int h);
        void setMass(int m);
        int getHeight();
        int getMass();

        //functions
        double calBMI();
        string calCategory();

    private:
        int height; // in cm
        int mass;   // in kg
};
