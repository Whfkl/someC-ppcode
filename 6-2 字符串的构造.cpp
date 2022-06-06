STRING::STRING(const char *s)
{
    pstr = new char[strlen(s)];
    for(int i=0;i<strlen(s);i++)
        pstr[i] = s[i];
    
}
STRING::~STRING()
{
    delete[] pstr;
 }