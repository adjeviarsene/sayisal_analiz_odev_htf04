#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>



int main(int argc,char **agrv){
    int n;
    int i,j,b;
    double det,det1,cevir,sayac,us;
    printf("Mmatristris kmatrisç smatristýr ve kmatrisç sütün olmatriscmatrisk (NxN)");


    scanf("%d",&n);

    int matris[n][n];
    int a[n-1][n-1];
    int temp[n][n];



            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("[%d][%d] indisli elemmatrisn giriniz: ", i, j);
                    scanf("%d",&matris[i][j]);

                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++){
                    printf("%d ", matris[i][j]);


                }
                printf("\n");
            }

            while (n > 2)
            {

                if (matris[0][0]==0)
                {
                    for (i = 0; i < n; i++)
                    {
                        if (matris[0][i]==0)
                        {
                            for (j = 0; j < n; j++)
                            {
                                temp [j][0] = matris[j][i];
                                temp [j][i] = matris[j][0];
                            }

                            for (b = 0; b < n; b++)
                            {
                                matris[b][0] = temp[b][0];
                                matris[b][i] = temp[b][i];
                            }
                            sayac = 0;
                            sayac++;
                            for (i = 1; i <= sayac; i++)
                            {
                                cevir *= (-1);
                            }
                            break;
                        }
                    }
                }
                for (i = 1; i <= (n - 2); i++){
                    us = us * matris[0][0];
                }

                for (i = 0; i < (n - 1); i++)
                {
                    for (j = 0; j < (n - 1); j++)
                    {
                        a[i][j] = matris[0][0] * matris[i + 1][j + 1] - matris[0][j + 1] * matris[i + 1][0];
                    }
                }


                for (i = 0; i < (n - 1); i++)
                {
                    for (j = 0; j < (n - 1); j++)
                    {
                        matris[i][j] = a[i][j];
                    }
                }
                n--;



            }
            det1 = (matris[0][0] * matris[1][1] - matris[1][0] * matris[0][1]);
            det = (1/us) * cevir * det1;


        printf("************************************\n");
        for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", matris[i][j]);


                }
                printf("\n");
            }
            printf("%lf\n",det);


            return 0;
}

