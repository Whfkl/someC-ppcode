#include<algorithm>
Polynomial& Polynomial::operator=(const Polynomial& p)
{
    if(p.coefficients!=coefficients)
    {
        if(coefficients!=NULL)
            delete [] coefficients;
        size = p.size;
        coefficients = new double[size];
        copy(p.coefficients,p.coefficients+size,coefficients);
    }
    return *this;
}