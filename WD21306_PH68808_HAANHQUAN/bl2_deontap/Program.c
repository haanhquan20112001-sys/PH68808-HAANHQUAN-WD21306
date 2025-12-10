// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include<math.h>
#include<string.h>
void thongTinMonHoc() {
    char tenMonHoc[50];
    int maMon, tinChi;
    while (getchar() != '\n')
    {

        printf("%S", getchar());
    }
    printf("ten mon hoc:");
    fgets(tenMonHoc, sizeof(tenMonHoc), stdin);
    printf("ma mon hoc: ");
    scanf_s("%d", &maMon);
    printf("so tin chi: ");
    scanf_s("%d", &tinChi);
    
    for (int i = 0; i < 50; i++) 
    {
        printf("%c", tenMonHoc[i]);

    }
    printf("\n");
    printf("ten mon hoc: %s", tenMonHoc);
    printf("ma mon hoc: %d\n", maMon);
    printf("so tin chi : %d\n", tinChi);


    

}
void tinhTongSoLe() 
{ 
    int n, tong = 0;

    printf("nhap vao n: ");
    scanf_s("%d", &n);
    for (int i = 1; i < n; i++) {
        tong += i;
    }
    printf("tong tu 1 den %d la: %d\n", n, tong);
    // kiem tra so le
    if (n % 2 == 0) {
        printf("%d la so chan\n", n);
    }
    else {
        printf("%d la so le \n", n);
    }
    


}
void thongTinDiemLap()
{
}
void hamVongLap() {
    int chon = 1;
    while (chon = 1)
    {

        switch (chon)
        {
        case 1:
            thongTinMonHoc();
            break;
        case 2:
            tinhTongSoLe();
            break;
        case 3:
            thongTinDiemLap();
            break;
        }
        printf(" ban co muon tiep tuc khong (1: co/ 0: khong): ");
        scanf_s("%d", &chon);
    }

}
int main()
{
    int n;
    do
    {

        printf("<<<<menu>>>>\n");
        printf("1. thong tin mon hoc\n");
        printf("2. tinh tong so le\n");
        printf("3.thong tin diem lap\n");
        printf("0. thoat\n");
        printf("moi chon chuc nang: ");
        scanf_s("%d", &n);
        hamVongLap();
    } while (n != 0);
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