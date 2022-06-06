#include<algorithm>
Polynomial::Polynomial(const Polynomial &poly)
{
    if(coefficients!=poly.coefficients)
    {
        if(coefficients==NULL)
            delete[] coefficients;
        coefficients = NULL;
        
        size = poly.size;
        coefficients = new double[poly.size];
   copy(poly.coefficients,poly.coefficients+size,coefficients);
    }
}