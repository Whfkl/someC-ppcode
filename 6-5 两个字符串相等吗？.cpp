bool operator==(const STRING& s1, const STRING& s2)
{
    if(strcmp(s1.pstr,s2.pstr)==0)
        return true;
    return false;
}
bool operator!=(const STRING& s1, const STRING& s2)
{
    if(s1 == s2)
        return false;
    return true;
}