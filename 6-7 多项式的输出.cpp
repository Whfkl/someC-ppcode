ostream& operator<<(ostream& os, const Polynomial& p)
{
    int size = p.size;
    if (size == 0) { return os; }
    else if (size == 1) { os << p.coefficients[0];}
    else if (size == 2)
    {
        if (p.coefficients[1] == 1)
        {
            os << "X";
        }
        else if (p.coefficients[1] == -1)
        {
            os << "-X";
        }
        else if (p.coefficients[1] == 0)
        {
        }
        else
        {
            os << p.coefficients[1] << "X";
        }
        if (p.coefficients[0] > 0)
            os<<"+" << p.coefficients[0];
        else if(p.coefficients[0]<0)
        {
            os << p.coefficients[0];
        }
    }
    else
    {
        if(p.coefficients[size-1] == 0){}
        else if (p.coefficients[size - 1] == 1) { os << "X^"<<size-1; }
        else if (p.coefficients[size - 1] == -1) { os << "-X^" << size - 1; }
        else { os << p.coefficients[size - 1] << "X^" << size - 1; }

        for (int i = size - 2; i >= 2; i--)
        {
            if (p.coefficients[i] == 0) {}
            else if (p.coefficients[i] == 1) { os << "+X^" << i; }
            else if (p.coefficients[i] == -1) { os << "-X^" << i; }
            else 
            { 
                if(p.coefficients[i]>0)
                os <<"+" << p.coefficients[i] << "X^" << i; 
                else
                    os<< p.coefficients[i] << "X^" << i;
            }
        }
        //一次项和0次
        if (p.coefficients[1] == 0) {}
        else if (p.coefficients[1] == 1) { os << "+X"; }
        else if (p.coefficients[1] == -1) { os << "-X"; }
        else {
            if(p.coefficients[1]>0)
            os << "+" << p.coefficients[1] << "X"; 
            else
            {
                os  << p.coefficients[1] << "X";
            }
        }

        if (p.coefficients[0] == 0) {}
        else if (p.coefficients[0] > 0)
        {
            os << "+" << p.coefficients[0];
        }
        else
        {
            os << p.coefficients[0];
        }

    }
    return os;
}