//今天在去教室的路上，小明突然让我帮他算一下，到现在开学多少天了。
#include<ctime>
int operator-(const Date& d1, const Date& d2)
{
    struct tm t1 = { 0 };
	struct tm t2 = { 0 };
	t1.tm_year = d1.year;
	t1.tm_mon = d1.month-1;
	t1.tm_mday= d1.day;
    t2.tm_year = d2.year;
	t2.tm_mon = d2.month-1;
	t2.tm_mday= d2.day;
    int s = difftime(mktime(&t1),mktime(&t2));
    return s/86400;
}