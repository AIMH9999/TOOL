#include<stdio.h>
    int main(){
//khai báo biến
	    int n;
	    char xn, xn1;
	    char o;
	    char m;
//chọn kiểu dịch nhập từ bàn phím 1 hoặc 2
loop:   printf("\n#Chon kieu nhap((1) la dich tu chu, so va ky tu sang he thap phan ASCII, (2) la dich tu he thap phan ASCII sang chu, so va ky tu):1/2 ");
        scanf("%c%c", &o, &m);
        switch(o)
        {
// dich từ chữ, số và kí tự sang mã thập phân ASCII
           case '1':
               printf("nhap chu va ky tu: ");
               for(n=1; n<100000; n=n+1){
                   scanf("%c", &xn);
                   if(xn!=10)
                      printf("%u ", xn);
                   else 
		     goto loop;
               }
// dich từ mã thập phân ASCII sang chữ, số và kí tự 
           case '2':
               printf("nhap he thap phan ASCII: ");
               for(n=1; n<100000; n=n+1){
                  scanf("%u%c", &xn, &xn1);
                  printf("%c", xn);
                  if(xn1==10)
                    goto loop;
               }
        }
}
