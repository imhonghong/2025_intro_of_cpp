#include "HugeInt.h"

HugeInt::HugeInt() {
    digits.push_back(0);
}

HugeInt::HugeInt(int num) {
    if (num == 0) digits.push_back(0);
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
}

HugeInt::HugeInt(const std::string& numStr) {
    for (int i = numStr.length() - 1; i >= 0; --i)
        digits.push_back(numStr[i] - '0');
    removeLeadingZeros();
}

HugeInt HugeInt::operator+(const HugeInt& other) const {
    HugeInt result;
    result.digits.clear();
    int carry = 0, sum = 0;
    size_t n = std::max(digits.size(), other.digits.size());
    for (size_t i = 0; i < n || carry; ++i) {
        int d1 = i < digits.size() ? digits[i] : 0;
        int d2 = i < other.digits.size() ? other.digits[i] : 0;
        sum = d1 + d2 + carry;
        result.digits.push_back(sum % 10);
        carry = sum / 10;
    }
    return result;
}

HugeInt HugeInt::operator-(const HugeInt& other) const {
    HugeInt result;
    result.digits.clear();
    int borrow = 0;
    for (size_t i = 0; i < digits.size(); ++i) {
        int d1 = digits[i];
        int d2 = i < other.digits.size() ? other.digits[i] : 0;
        int sub = d1 - d2 - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.digits.push_back(sub);
    }
    result.removeLeadingZeros();
    return result;
}

std::ostream& operator<<(std::ostream& os, const HugeInt& num) {
    for (auto it = num.digits.rbegin(); it != num.digits.rend(); ++it)
        os << *it;
    return os;
}

std::istream& operator>>(std::istream& is, HugeInt& num) {
    std::string input;
    is >> input;
    num = HugeInt(input);
    return is;
}

void HugeInt::removeLeadingZeros() {
    while (digits.size() > 1 && digits.back() == 0)
        digits.pop_back();
}
