/////////////////////////BISMILLAH!//////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define gcd __gcd
#define endl ("\n")
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb push_back
#define pk pop_back
#define mkp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int MOD = 1e9 + 7;
/////////////////////////////////////////////////////////////////////////
unsigned long long power(unsigned long long x, int y, int p)
{
    unsigned long long res = 1;
    x = x % p;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
/////////////////////////////////////////////////////////////////
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, int p)
{
    return power(n, p - 2, p);
}
 ///////////////////////////////////////////////////////////////////
vector<int> fac;
void initfact(int n)
{
    fac.resize(n + 1);
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % MOD;
}
/////////////////////////////////////////////////////////////////////
unsigned long long nCrModPFermat(unsigned long long n, int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (n == 0 && r == 0)
        return 1;
    if (n == 0)
        return 0;
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
////////////////////////////////////////////////////////////////
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
////////////////////////////////////////////////////////////////
bool isPrime(int n){
    if(n==2)return true;

    for (int i = 2; i < sqrt(n); ++i)
    {
        if(n%i==0)return false;
    }
    return true;
}
////////////////////////////////////////////////////////////////
/* To take the power of numbers. Better than pow() */
int fast_power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        return fast_power(a, b / 2) * fast_power(a, b / 2);
    }
    return fast_power(a, b - 1) * a;
}
///////////////////////////////////////////////////////////////
void solution()
{
	
}
////////////////////////////////////////////////////////////////
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    initfact(1e4);
    while (t--)
    {
        solution();
    }
}
/////////////////////////////////////////////////////////////////
