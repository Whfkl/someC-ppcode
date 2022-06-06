#include<algorithm>
#include<cstring>
template <typename T>
T MAX(T *p, int n)
{
    return *max_element(p,p+n);
}
template <>
char* MAX<char*>(char **p,int n)
{
    return *max_element(p,p+n,[](char*a,char*b)
                        {
                            return strcmp(a,b)<0;
                        });
}
