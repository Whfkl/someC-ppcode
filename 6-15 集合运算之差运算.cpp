template<class T>
MySet<T> operator-(MySet<T> s1,MySet<T> s2)
{
    MySet<T> ms;
    for(int i = 0;i<s1.length();i++)
    {
        if(s2.find(s1.getIth(i))==-1)
        {
            ms.insert(s1.getIth(i));
        }
    }
    return ms;
}