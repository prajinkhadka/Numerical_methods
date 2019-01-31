
            #include<stdio.h>
            #include<math.h>
int main()
{
               int n, I, j, k;
               float sumx, sumxsq, sumy, sumxy, x, y;
               float sumx3, sumx4, sumxsqy, a[20][20], u=0.0, b[20];
               printf(“\n Enter the n value”);
               scanf(“%d”, &n);
               sumx = 0;
               sumxsq = 0;
               sumy = 0;
               sumxy = 0;
               sumx3 = 0;
               sumx4 = 0;
               sumxsqy = 0;
               for(int i=0;  i<n; i++)
               {
                        scanf(“%f %f”, &x, &y);
                        sumx +=x;
                        sumxsq += pow(x,2);
                        sumx3 += pow(x,3);
                        sumx4 += pow(x,4);
                        sumy +=y;
                        sumxy += x * y;
                        sumxsqy += pow(x,2) *y;
               }
               A[0][0] = n;
               A[0][1] = sumx;
               A[0][2] = sumxsq;
               A[0][3] = sumy;
               A[1][0] = sumx;
               A[1][1] = sumxsq;
               A[1][2] = sumx3;
               A[1][3] = sumxy;
               A[2][0] = sumxsq;
               A[2][1] = sumx3;
               A[2][2] = sumx4;
               A[2][3] = sumxsqy;
for(i=0;  i<3; i++)
{
  for(j=0;  j<=3; j++)
               printf(“%10.2f”,a[i][j]);
               printf(“\n”);
            }
          for(k=0;  k<=2; k++)
          {
               for(i=0;i<=2;i++)
               {
                        if(i!=k)
                           U=a[i][k]/a[k][k];
                        for(j = k; j<=3; j++)
                                    A[i][j]=a[i][j] – u * a[k][j];
                }
        }

     for(i=0;i<3;i++)
     {
            B[i] = a[i][3]/a[i][i];
            printf(“\nx[%d] = %f”, I, b[i]);
     }
  printf(“\n”);
 printf(“y= %10.4fx +10.4 fx +%10.4f”,b[2],b[i],b[0]);
}
