// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void thongTinSanPham() {
	char tensp1[50], tensp2[50], tensp3[50];
	int sl1, sl2, sl3;
	while (getchar() != '\n')
	{
		printf("%s", getchar());
	}

	printf("san pham 1: ");
	fgets(tensp1, sizeof(tensp1), stdin);
	printf("\n nhap so luong sp1: ");
	scanf_s("%d", &sl1);
	while (getchar() != '\n');
	// xuat du lieu = for + printf
	for (int i = 0; i < 50; i++)
	{
		printf("%c", tensp1[i]);
	}
	printf("\n");

	printf("san pham 2: ");
	fgets(tensp2, sizeof(tensp2), stdin);
	printf("\n nhap so luong sp2: ");
	scanf_s("%d", &sl2);
	while (getchar() != '\n');
	// xuat du lieu = for + printf
	for (int i = 0; i < 50; i++)
	{
		printf("%c", tensp2[i]);
	}
	printf("\n");

	printf("san pham 3: ");
	fgets(tensp3, sizeof(tensp3), stdin);
	printf("\n nhap so luong sp3: ");
	scanf_s("%d", &sl3);
	while (getchar() != '\n');
	// xuat du lieu = for + printf
	for (int i = 0; i < 50; i++)
	{
		printf("%c", tensp3[i]);
	}
	printf("ten san pham 1 la:%s", tensp1);
	printf("so luong san pham 1 la:%d\n", sl1);
	printf("ten san pham 2 la:%s", tensp2);
	printf("so luong san pham 2 la:%d\n", sl2);
	printf("ten san pham 3 la:%s", tensp3);
	printf("so luong san pham 3 la:%d\n", sl3);

}
void trungBinhCongCacSoChiaHetCho3() 
{
	int n;
	printf("nhap so nguyen n: ");
	scanf_s("%d", &n);
	printf("cac so < %d chia het cho 3 la:\n", n);
	for (int i = 1; i < n; i++) {
		if (i % 3 == 0) {
			printf("%d", i);
		}
	}

}
void thongTinNhanVien()
{
		int n;
		printf("Nhap so luong nhan vien: ");
		scanf("%d", &n);

		int luong [n];

		printf("Nhap muc luong tung nhan vien:\n");
		for (int i = 0; i < n; i++) {
			printf("Luong NV %d: ", i + 1);
			scanf("%d", &luong[i]);
		}

		printf("\n----- Thong tin nhan vien -----\n");
		printf("So luong nhan vien la: %d\n", n);

		// ??m s? l??ng trên 5 tri?u
		int dem = 0;
		for (int i = 0; i < n; i++) {
			if (luong[i] > 5000000)
				dem++;
		}
		printf("So luong NV co muc luong tren 5 trieu: %d\n", dem);

		// V? trí l??ng cao nh?t
		int max = luong[0];
		for (int i = 1; i < n; i++) {
			if (luong[i] > max)
				max = luong[i];
		}

		printf("Vi tri cac muc luong cao nhat: ");
		for (int i = 0; i < n; i++) {
			if (luong[i] == max)
				printf("%d ", i + 1);
		}

		return 0;
}
int main()
{
	int chon;
	printf("menu\n");
	printf("moi chon chuc nang:\n");
	printf("1.thong tin san pham\n");
	printf("2.trung binh cong cac so chia het cho 3\n");
	printf("3.thong tin nhan vien\n");
	printf("0. thoat\n");
	scanf_s("%d", &chon);
	switch (chon) 
	{
	case 1:
		thongTinSanPham();
		break;
	case 2:
		trungBinhCongCacSoChiaHetCho3();
		break;
	case 3:
		thongTinNhanVien();
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