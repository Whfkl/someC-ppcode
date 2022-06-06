Time& Time::operator++()
{
    if(hour == 23 && minute == 59 && second == 59)
    {
        hour = 0;minute = 0;second =0;
        return *this;
    }
    second += 1;
    if (second >= 60)
    {
        second %= 60;
        minute += 1;
        if (minute >= 60)
        {
            minute %= 60;
            hour++;
        }
    }
    return *this;
}
Time Time::operator++(int)
{

    static Time tmp(hour, minute, second);
    if(hour == 23 && minute == 59 && second == 59)
    {
        hour = 0;minute = 0;second =0;
    }
    else{
    second += 1;
    if (second >= 60)
    {
        second %= 60;
        minute += 1;
        if (minute >= 60)
        {
            minute %= 60;
            hour++;
        }
    }}
    return tmp;
}

Time& Time::operator--()
{
    if(hour == 0&&minute == 0&&second == 0)
    {
        hour = 23;minute = 59;second = 59;
        return *this;
    }
    second -= 1;
    if (second < 0)
    {
        second += 60;
        minute -= 1;
        if (minute < 0)
        {
            minute += 60;
            hour -= 1;
        }
    }
    return *this;
}
Time Time::operator--(int)
{
    static Time tmp(hour, minute, second);
    if(hour == 0&&minute == 0&&second == 0)
    {
        hour = 23;minute = 59;second = 59;
    }else{
    second -= 1;
    if (second < 0)
    {
        second += 60;
        minute -= 1;
        if (minute < 0)
        {
            minute += 60;
            hour -= 1;
        }
    }
    if(hour<0) hour=0;}
    return tmp;
}