// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void thongTinGiaDinh() 
{

}
void soChiaHetCho5() 
{
        int n, i, sum = 0;
        printf("Nhap n: ");
        scanf_s("%d", &n);

        printf("Cac so nho hon %d chia het cho 5: ", n);
        for (i = 1; i < n; i++) {
            if (i % 5 == 0) {
                printf("%d ", i);
                sum += i;
            }
        }

        printf("\nTong cac so nho hon %d chia het cho 5 = %d\n", n, sum);

        return 0;



}
void thongTinSinhVienLapTrinh() {

}

int main()
{
    int chon;
    printf(">>>>>>MENU<<<<<<<\n");
    printf("xin moi chon chuc nang: \n");
    printf("1. thong tin gia dinh \n");
    printf("2. so chia het cho 5 \n");
    printf("3. thon tin sinh vien lap trinh \n");
    printf("\n 0. thoat\n");
    scanf_s("%d", &chon);
    switch (chon) 
    {
    case 1:
         thongTinGiaDinh();
         break;
    case 2:
        soChiaHetCho5();
        break;
    case 3:
        thongTinSinhVienLapTrinh();
        break;

    }


    
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184