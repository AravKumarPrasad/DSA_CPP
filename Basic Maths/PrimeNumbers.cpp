#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

bool NaivecheckPrime(int a)
{
    if (a == 1 || a==0)
    {
        return 0;
    }
    for (int i = 2; i <= a; i++)
    {
        if(a%i == 0){
            return false;
        }
        else{
            return true;
        }
    }
}

bool SqrtcheckPrime(int a)
{
    if (a == 1 || a==0)
    {
        return 0;
    }
    int sqrtN = sqrt(a);
    for (int i = 2; i <= sqrtN; i++)
    {
        if(a%i == 0){
            return false;
        }
        else{
            return true;
        }
    }
}

int countPrimes(int n)
    {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                ++ans;

                int j = 2 * i;
                while (j < n)
                {
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return ans;
    }

int main()
{
    int n;
    cin >> n;

    cout<<NaivecheckPrime(n)<<endl;
    cout<<SqrtcheckPrime(n)<<endl;
    cout<<countPrimes(n);
}