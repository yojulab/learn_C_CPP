#include <iostream>
#include <random>

#include <cstdlib>  // randn(), srand()
#include <ctime>    // time()
using namespace std;

int main(){
    random_device rd;
    mt19937_64 mersenne_twister_engine(rd());   // create a mersenne theory
    uniform_int_distribution<> dice(1, 12);

    for(int count=1; count<=10; ++count){
        cout << "random dice : " << dice(mersenne_twister_engine) << endl;
    }

    srand(static_cast<unsigned int> (time(0)));
    for(int count=1;count<=100;++count){
        cout << rand() << "\t";
        if(count % 5 == 0) cout << endl;
    }
}