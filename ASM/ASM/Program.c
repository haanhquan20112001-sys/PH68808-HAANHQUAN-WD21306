// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemTraSoNguyen()
{
    double soCanKiemTra;
    int luaChon;
    do
    {
        printf("Nhap so can kiem tra: ");
        scanf_s("%lf", &soCanKiemTra);
        // Co muon tiep tuc chuong trinh khong
        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void uocChungvaBoiChung()
{
    double soThuNhat, soThuHai, uocSoChung, boiSoChung;
    int luaChon;
    do
    {
        printf("Nhap so thu nhat: ");
        scanf_s("%lf", &soThuNhat);
        printf("Nhap so thu hai: ");
        scanf_s("%lf", &soThuHai);
        // Co muon tiep tuc chuong trinh khong 
        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void tinhTienQuanKaraoke()
{
    double gioBatDau, gioKetThuc, soGioThue, tienThanhToan;
    int luaChon;
    do
    {
        printf("Nhap gio bat dau: ");
        scanf_s("%lf", &gioBatDau);
        printf("Nhap gio ket thuc: ");
        scanf_s("%lf", &gioKetThuc);
        soGioThue = gioKetThuc - gioBatDau;
        // Co muon tiep tuc chuong trinh khong
        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void tinhTienDien()
{
    double soDienTieuThu, tienDien, b1 = 1678, b2 = 1734, b3 = 2014, b4 = 2536, b5 = 2834, b6 = 2927;
    int luaChon;
    do
    {
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
        // Co muon tiep tuc chuong trinh khong
        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
//Done
void doiTien()
{
    double soTienCanDoi;
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void tinhLaiSuatVayNganHang()
{
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void vayTienMuaXeTraGop()
{
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void sapXepThongTinSinhVien()
{
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void gameFpolyLott()
{
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}
void tinhToanPhanSo()
{
    int luaChon;
    do
    {

        printf("Ban co muon tiep tuc khong (1: Co, 0: Khong): ");
        scanf_s("%d", &luaChon);
        printf("----------------------------------------------------\n");
    } while (luaChon == 1);
}

int main()
{
    int chon;
    do
    {
        printf("In Menu\n");
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
        scanf_s("%d", &chon);
        printf("----------------------------------------------------\n");
        switch (chon)
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
    } while (chon != 0);
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