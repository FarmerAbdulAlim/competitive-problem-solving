#include<stdio.h>
#include<math.h>

int main()
{
    int test, t=0, n, k, ans, i;
    scanf("%d", &test);
    while(test--) {
        scanf("%d%d", &n, &k);
        ans = 0;
        for(i=1; i*i<=n; i++) {
            if(n%i==0) {
                if(i%k!=0) ans = ans + i;
                int otherDivisor = n/i;
                ////checking if two divisors are not same, such as, 7*7=49
                if(otherDivisor == i) continue;
                if(otherDivisor%k!=0) ans = ans + otherDivisor;
            }
        }
        printf("%d\n", ans);
    }
}
