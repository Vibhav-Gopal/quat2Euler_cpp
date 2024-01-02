#include "quatConv.h"

int main()
{
    Quarternion q;
    q.w = q.x = q.y = q.z = 0.5;
    auto a = toEuler(q);
    cout << a.heading << " "<< a.attitude << " "<< a.bank << endl;
    return 0;
}