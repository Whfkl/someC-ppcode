template <typename T>
int bisearch(T* p, int n, T x)
{
    int res;
    if(n == 0)
        return -1;
    if(n == 1)
        return *p == x?0:-1;//返回下标
    int mid = n/2-1;
    if(*(p+mid) == x)
        return mid;
    else if(*(p+mid)<x)
    {
        int r = bisearch(p+1+mid,n-mid-1,x);
        if(r == -1)
            return -1;
        res = r+mid+1;
    }
    else
    {
        int l = bisearch(p,mid+1,x);
        if(l == -1)
            return -1;
        res = l;
    }
    return res;
}
template<>
int bisearch<char*>(char** p, int n, char* x)
{
    int res;
    if(n == 0)
        return -1;
    if(n == 1)
        return strcmp(*p,x) == 0?0:-1;
    int mid = n/2-1;
    if(strcmp(*(p+mid) ,x)==0)
        return mid;
    else if(strcmp(*(p+mid) ,x)<0)
    {
        int r = bisearch(p+1+mid,n-mid-1,x);
        if(r == -1)
            return -1;
        res = r+mid+1;
    }
    else
    {
        int l = bisearch(p,mid+1,x);
        if(l == -1)
            return -1;
        res = l;
    }
    return res;
}