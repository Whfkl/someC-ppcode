STRING& STRING::operator=(const STRING& s)
{
    if(s.pstr!=pstr)
    {
        if(pstr!=NULL)
            delete[] pstr;
        pstr = new char[strlen(s.pstr)];
        strcpy(pstr,s.pstr);
    }
    return *this;
}