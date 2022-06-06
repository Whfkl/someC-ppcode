//重载+=和-=
Complex operator+(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real+c2.real,c1.imag+c2.imag);
}
Complex operator-(const Complex& c1, const Complex& c2)
{
    return Complex(c1.real-c2.real,c1.imag-c2.imag);
}
Complex& Complex::operator+=(const Complex& c)
{
    this->real+=c.real;
    this->imag+=c.imag;
    return *this;
}
Complex& Complex::operator-=(const Complex& c)
{
    this->real-=c.real;
    this->imag-=c.imag;
    return *this;
}