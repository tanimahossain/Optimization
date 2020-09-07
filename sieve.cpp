#include<bits/stdc++.h> 
using namespace std;
#define MAXP                10000007
vector <int> prime; //In this vector all the primes are saved
bitset<MAXP> mark; //nonprime indexes are true, prime indexes are false here

void sieve(){
    int m=sqrt(MAXP); int x;
    prime.pb(2); prime.pb(3);
    mark[0]=mark[1]=true;
    for(int i=4;i<MAXP;i+=2)mark[i]=true;
    for(int i=9;i<MAXP;i+=6)mark[i]=true;
    for(int i=5;i<MAXP;i+=6){
        if(!mark[i]){
            prime.pb(i);
            if(i>m) continue;
            for(int j=i*i;j<MAXP;j+=2*i)mark[j]=true;
        }
        if(!mark[i+2]){ x=i+2;
            prime.pb(x);
            if(x>m) continue;
            for(int j=x*x;j<MAXP;j+=2*x)mark[j]=true;
        }
    }
}
