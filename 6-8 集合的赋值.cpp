template<class T>
MySet<T>& MySet<T>::operator=(const MySet<T>& ms)
{
    if (&ms != this)
    {
        if(pset!=NULL)
            delete[] pset;
        pset = new T[ms.size];
        cur_size = ms.cur_size;
        size = ms.size;
        for (int i = 0; i < cur_size; i++)
        {
            pset[i] = ms.pset[i];
        }
    }
    return *this;
}