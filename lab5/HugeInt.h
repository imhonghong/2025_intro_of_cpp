#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class HugeInt {
private:
    std::vector<int> digits; // Least Significant Digit first

    void removeLeadingZeros();

public:
    HugeInt();
    HugeInt(int num);
    HugeInt(const std::string& numStr);

    HugeInt operator+(const HugeInt& other) const;
    HugeInt operator-(const HugeInt& other) const;

    friend std::ostream& operator<<(std::ostream& os, const HugeInt& num);
    friend std::istream& operator>>(std::istream& is, HugeInt& num);
};