#include <bits/stdc++.h>
#include <sstream>
#include <string>
/* Problem statement:
    CAR + CAR + CAR = RRR;
    Each letter {C, A, R} is a variable. All variables must contain a digit >= 1.
    Find what C + A + R equals.
*/

int main()
{
    std::ios_base::sync_with_stdio(false);
    int c = 1, a = 1, r = 1, car = 111, rrr = 111;
    typedef std::stringstream ss;
    while (3*car!=rrr){
        if(a<9){a++;}else if(c<9){c++;a=1;}else{c=1;a=1;r++;}
        ss f("");
        ss t("");
        f << c << a << r;
        f >> car;
        t << r << r << r;
        t >> rrr;
    }
    std::cout << c + a + r;
	return 0;
}
