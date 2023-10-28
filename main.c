//The program solving the rebus by bruteforce
#include <stdio.h>
#include <math.h>

int main()
{
    int L = 1, O = 1, G = 1, I = 1, C = 1;
    for (L = 0; L < 10; L++) {
        for (O = 0; O < 10; O++) {
            for (G = 0; G < 10; G++) {
                for (I = 0; I < 10; I++) {
                    for (C = 0; C < 10; C++) {{
                        if(pow(L + O + G + I + C, 3) == L * 10000 + O * 1000 + G * 100 + I * 10 + C){
                            printf("%d %d %d %d %d\n", L, O, G, I, C);
                        }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
