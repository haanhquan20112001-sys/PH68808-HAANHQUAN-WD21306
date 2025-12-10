// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

void thongTinGiaDinh() 
{
    // string 
    char name[50] = "A quan";//{ 'A', 'q', 'u', 'a', 'u' };"A quan"
    //gest(name);
    //fgest(name);

    while (getchar() != '\n')
    {
        printf("%s", getchar());
    }

    printf("nhap ten cua ban 1: ");
    fgets(name, sizeof(name), stdin);
    // xuat du lieu = for + printf
    for (int i = 1; i < 3; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    printf("nhap ten cua ban 2: ");
    fgets(name, sizeof(name), stdin);
    // xuat du lieu = for + printf
    for (int i = 1; i < 3; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

}
void soChiaHetCho5() {
    int arr[10], i;
    printf("nhap 10 so nguyen:\n");
    for (i = 0; i < 10; i++) {
        printf("so thu %d: ", i + 1);
        scanf_s("%d", &arr[i]);
    }
}
void thongTinSinhVienThiLapTrinh() {

}
int main()
{
    int chon;
    printf("MENU\n");
    printf("1. thong tin gia dinh\n");
    printf("2. so chia het cho 5\n ");
    printf("3. thong tin sinh vien thi lap trinh\n");
    printf("0. thoat");
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
        thongTinSinhVienThiLapTrinh();
    default:
        printf("Khong co trong Menu");
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