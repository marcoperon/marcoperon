
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double fl;
typedef vector<ll> vi;
typedef vector<fl> vf;

#define Rep(arr, b) for (long long i = arr; i < b; i++)
#define float_equal(arr, b) if (abs(arr - b) < 1e-9)
#define PB push_back
#define IN insert
 
int main()
{
string v;
cin>>v;
     uint64_t sum , maxsum = 0 ;
    for(uint32_t i = 0 ; i + 13 <=1000; i++)
    {
        sum = 1;
        for(uint32_t r = 0; r < 13; r++){
           
            sum =  sum * (v[i + r] - 48);

        }

    
        if (sum > maxsum)
        {
            maxsum = sum;
           
        }
    }
    cout <<"\n"<< maxsum << "\n";
}
