#include<iostream>

using namespace std;

//if sign bit is set for x^y then print 'true' else print 'false'. 
//i.e, x^y is -ve number if x&y are different
void oppositeSign(int x, int y){
    if ((x^y) < 0){
        cout<<"Both have different sign"<< endl;
    }else{
        cout<<"Both have same sign"<< endl;
    }
}

int main()
{
    oppositeSign(-7,8);
    
}
