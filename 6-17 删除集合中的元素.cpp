#include<algorithm>
template<class T>
MySet<T>& MySet<T>::erase(T e)
{
    if(find(e)!=-1)
        remove(pset,pset+cur_size--,e);
    return *this;
}