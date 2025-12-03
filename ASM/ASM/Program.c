// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// roi
void kiemTraSoNguyen()
{
    printf("\nBan da chon Chuc nang so 1\n");
    int x, i, count = 0;
    printf("Nhap x: ");
    scanf_s("%d", &x);
    if (x == (int)x) {
        printf("\n%d la so nguyen", x);
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("\n%d la so nguyen to", x);
        }
        else {
            printf("\n%d khong phai so nguyen to", x);
        }
        for (i = 1; i < x; i++) {
            if (i * i == x) {
                printf("\n%d la so chinh phuong", x);
                break;
            }
        }
    }
}
void uocChungvaBoiChung() 
{
    printf("\n => Tim uoc chung va boi chung cua 2 so\n");
    int x, y, a, b, UCLN, BSCNN;

    // Nhập 2 số nguyên
    printf("Nhap so thu nhat: ");
    scanf_s("%d", &x);
    printf("Nhap so thu hai: ");
    scanf_s("%d", &y);

    a = x;
    b = y;

    // Tính UCLN  bằng thuật toán Euclid
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    UCLN = a;

    // Tính BSCNN
    BSCNN = (x * y) / UCLN;

    // Xuất kết quả
    printf("Uoc so chung lon nhat  cua %d và %d la: %d\n", x, y, UCLN);
    printf("Boi so chung nho nhat cua %d và %d la: %d\n", x, y, BSCNN);

    return 0;
}
void tinhTienQuanKaraoke()
{
    {
        printf("\nBan da chon Chuc nang so 3\n");
        int bd, kt, time, addt;
        float pay, addm;
        printf("\nNhap gio bat dau: ");
        scanf_s("%d", &bd);
        printf("Nhap gio ket thuc: ");
        scanf_s("%d", &kt);
        time = kt - bd;
        if (time <= 3) {
            pay = time * 150000;
        }
        else {
            addt = time - 3;
            addm = addt * 150000 * 0.7;
            pay = 3 * 150000 + addm;
        }
        if (bd >= 14 && bd <= 17) {
            pay = pay * 0.9;
        }
        printf("Tong so tien can thanh toan la: %.2f", pay);
    }
}
void tinhTienDien()
{
    double soDienTieuThu, tienDien, b1 = 1678, b2 = 1734, b3 = 2014, b4 = 2536, b5 = 2834, b6 = 2927;
        printf("Nhap so dien tieu thu(kWh): ");
        scanf_s("%lf", &soDienTieuThu);
        if (soDienTieuThu >= 0)
        {
            if (soDienTieuThu <= 50)
            {
                tienDien = soDienTieuThu * b1;
            }
            else if (soDienTieuThu <= 100)
            {
                tienDien = 50 * b1 + (soDienTieuThu - 50) * b2;
            }
            else if (soDienTieuThu <= 200)
            {
                tienDien = 50 * b1 + 50 * b2 + (soDienTieuThu - 100) * b3;
            }
            else if (soDienTieuThu <= 300)
            {
                tienDien = 50 * b1 + 50 * b2 + 100 * b3 + (soDienTieuThu - 200) * b4;
            }
            else if (soDienTieuThu <= 400)
            {
                tienDien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + (soDienTieuThu - 300) * b5;
            }
            else
            {
                tienDien = 50 * b1 + 50 * b2 + 100 * b3 + 100 * b4 + 100 * b5 + (soDienTieuThu - 400) * b6;
            }
            printf("So tien dien phai tra: %.2f VND\n", tienDien);
        }
        else
        {
            printf("So dien tieu thu khong hop le!\n");
        }
}
void doiTien()
{
#define MAX 12
    int doitien();
    {
        printf("\nBan da chon Chuc nang so 5\n");
        int loaitien[MAX] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
        int sotien, soluong;
        printf("\nNhap menh gia tien can doi: ");
        scanf_s("%d", &sotien);

        for (int i = 0; i < 9; i++)   // mảng chỉ có 9 phần tử!
        {
            soluong = sotien / loaitien[i];
            sotien = sotien % loaitien[i];
            printf("\nCo %d to tien %d dong", soluong, loaitien[i]);
        }
        return 0;
    }

}
void tinhLaiSuatVayNganHang()
{
    {
        printf("\nBan da chon Chuc nang so 6\n");
        int i;
        int kyHan = 12;
        float sotien, laiSuat, tong = 0.0; // Initialize tong
        printf("\nBan muon vay bao nhieu: ");
        scanf_s("%f", &sotien);
        laiSuat = 0.05;

        float gocHangThang = sotien / kyHan;
        printf("\nSo tien can tra hang thang: %.2f", gocHangThang); // Added format specifier
        printf("\nKy han\tLai phai tra\tGoc phai tra\tTien phai tra\tTien con lai");
        for (i = 1; i <= kyHan; i++) { // Corrected variable name
            float laiHangThang = sotien * laiSuat;
            float tienHangThang = laiHangThang + gocHangThang;
            sotien = sotien - gocHangThang;
            tong += tienHangThang;
            printf("\n %d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n", i, laiHangThang, gocHangThang, tienHangThang, sotien);
        }
        printf("\nTong tien tra sau 12 thang la: %.0f VND", tong);
    }
}
void vayTienMuaXeTraGop()
{
    {
        printf("\nBan da chon Chuc nang so 7\n");
        float phanTramVay;
        printf("Nhap phan tram vay (0 -> 1): ");
        scanf_s("%f", &phanTramVay);

        double phanTramTraTruoc = 1.0 - phanTramVay;
        double sotien = 500000000;
        double laiSuat = 0.072 / 24;
        int kyHan = 24;

        double tienTraTruoc = sotien * phanTramTraTruoc;
        sotien = sotien - tienTraTruoc;
        double gocHangThang = sotien / kyHan;

        printf("\nSo tien tra truoc la: %.0lf VND\n", tienTraTruoc);
        printf("\nSo tien phai tra hang thang:");
        printf("\nKy han\tLai phai tra\tGoc phan tra\tSo tien phai tra\tSo tien con lai");
        for (int i = 1; i <= kyHan; i++) { // Changed 'thoiHan' to 'kyHan'
            double traLai = sotien * laiSuat;
            double tienHangThang = traLai + gocHangThang;
            sotien = sotien - gocHangThang;
            printf("\n  %d\t%.0lf\t\t%.0lf\t%.0lf\t\t%.0lf\n", i, traLai, gocHangThang, tienHangThang, sotien);
        }
    }
}
// chua
void sapXepThongTinSinhVien() 
{


}
// roi
void gameFpolyLott()
{
    {
        printf("\nBan da chon Chuc nang so 9\n");
        int i, so1, so2, count = 0;
        int kq, ketqua[2];
        printf("Nhap so 1: ");
        scanf_s("%d", &so1);
        printf("Nhap so 2: ");
        scanf_s("%d", &so2);
        srand(time(0));
        for (i = 0; i < 2; i++) {
            kq = 1 + rand() % 15;
            ketqua[i] = kq;
        }
        for (i = 0; i < 2; i++) {
            if (so1 == ketqua[i]) {
                count++;
            }
            if (so2 == ketqua[i]) {
                count++;
            }
        }
        printf("\nKet qua so xo hom nay la!");
        printf("\nSo 1 = %d", ketqua[0]);
        printf("\nSo 2 = %d", ketqua[1]);
        if (count == 2) {
            printf("\nChuc mung ban da trung giai dac biet!");
            printf("\nGia tri giai thuong: 65 ti VND");
        }
        else if (count == 1) {
            printf("\nChuc mung ban da trung giai nhat!");
            printf("\nGia tri giai thuong: 500 trieu VND");
        }
        else {
            printf("\nCHUC BAN MAY MAN LAN SAU!");
        }
    } 
}
// chua
void tinhToanPhanSo() 
{


}

void hamVongLap(int n) 
{
    int luaChon = 1;
    while (luaChon == 1)
    {
        switch (n)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            uocChungvaBoiChung();
            break;
        case 3:
            tinhTienQuanKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            doiTien();
            break;
        case 6:
            tinhLaiSuatVayNganHang();
            break;
        case 7:
            vayTienMuaXeTraGop();
            break;
        case 8:
            sapXepThongTinSinhVien();
            break;
        case 9:
            gameFpolyLott();
            break;
        case 10:
            tinhToanPhanSo();
            break;
        }
        printf("\nBan co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    }
}
int main()
{
    int n;
    do
    {
        printf("\nIn Menu\n");
        printf("0. Thoat\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va Boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe tra gop\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("Moi chon CN [0-10]: ");
        scanf_s("%d", &n);
        hamVongLap(n);
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