#include <stdio.h>
#include <math.h>

int sochinhphuong (int num)
{
    int canbac = sqrt(num);
    return (canbac * canbac == num);
}
int kiemtra(int n) 
{
    int dem = 0 ;
    for (int i=0 ; i< n ; i++)
    {
        if(sochinhphuong(i))
        {
             dem++;
        }
            
    }
    return dem;
}
int main(void)
{
     int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; i++) {
        if (sochinhphuong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Tong so chinh phuong nho hon %d la: %d\n", n, kiemtra(n));

    return 0;
}
