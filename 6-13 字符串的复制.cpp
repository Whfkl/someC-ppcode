STRING::STRING(const STRING&s)
{
    if(s.pstr!=pstr)
    {
        pstr = new char[strlen(s.pstr)];
        strcpy(pstr,s.pstr);
    }
}