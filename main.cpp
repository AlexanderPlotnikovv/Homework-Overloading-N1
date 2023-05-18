#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator==(const Fraction& p) const { return numerator_ == p.numerator_ && denominator_ == p.denominator_; }
	bool operator!=(const Fraction& p) const { return !(*this == p); }
	bool operator<(const Fraction& p) const { return numerator_*p.denominator_<p.numerator_*denominator_; }
	bool operator>(const Fraction& p) const { return !(*this < p) && !(*this == p); }
	bool operator<=(const Fraction& p) const { return !(*this > p); }
	bool operator>=(const Fraction& p) const { return !(*this < p); }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}