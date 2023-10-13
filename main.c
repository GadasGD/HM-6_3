#include <stdio.h>
#include <math.h>

int main()
{
    double L = 1, O = 1, G = 1, I = 1, C = 1;
    for (;pow(L + O + G + I + C, 3)  == L * 10000 + O * 1000 + G * 100 + I * 10 + C; L++)
    {
        for (;pow(L + O + G + I + C, 3)  == L * 10000 + O * 1000 + G * 100 + I * 10 + C; O++){
            for (;pow(L + O + G + I + C, 3)  == L * 10000 + O * 1000 + G * 100 + I * 10 + C; G++){
                for (;pow(L + O + G + I + C, 3)  == L * 10000 + O * 1000 + G * 100 + I * 10 + C; I++){
                    for (;pow(L + O + G + I + C, 3)  == L * 10000 + O * 1000 + G * 100 + I * 10 + C; C++){
                        printf("%f%f%f%f%f", L, O, G, I, C);
                    }
                }
            }
        }
    }
    
    return 0;
}
