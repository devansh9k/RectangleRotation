#include<cmath>
#include<utility>
using namespace std;

long long rectangle_rotation(int a, int b)
{
  float x = (a/sqrt(2)) / 2;
    float y = (b/sqrt(2)) / 2;

    pair<int,int> r1;
    r1.first = floor(x)*2 + 1;
    r1.second = floor(y)*2 +1;

    pair<int,int> r2;

    if(x - floor(x) < 0.5)
    {
        r2.first = r1.first - 1;
    }
    else
    {
        r2.first = r1.first + 1;
    }

    if(y - floor(y) < 0.5)
    {
        r2.second = r1.second - 1;
    }
    else
    {
        r2.second = r1.second + 1;
    }

    return (r1.first * r1.second) + (r2.first * r2.second);

}