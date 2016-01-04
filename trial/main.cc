#include <iostream>
#include <string>

#include "node.h"
#include "queue.h"

using namespace std;


int main()
{

l2switch sw1;
l2switch_optical sw2;
l2switch_hybrid sw3;

Queue Q1(1,15.4,60,1);
Queue Q2(2,15.4,70,1);
Queue Q3(3,15.4,80,1);
Queue Q4(4,15.4,90,1);
Queue Q5(5,15.4,50,1);

Q1.getsize();
Q2.getsize();
Q3.getsize();
Q4.getsize();
Q5.getsize();

cout << sw1.switching_latency << endl;
cout << sw2.switching_latency << endl;
cout << sw3.switching_latency << endl;

return 0;

}

