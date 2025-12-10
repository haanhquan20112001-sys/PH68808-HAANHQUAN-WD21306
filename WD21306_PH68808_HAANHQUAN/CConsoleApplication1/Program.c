// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>
void thongTinSanPham() {
	char sp1[50], sp2[50], sp3[50];
	int sl1, sl2, sl3;
	while (getchar() != '\n'); {
		printf("%s", getchar());

	}
	printf("moi nhap thong tin ");
	printf("san pham 1: ");
	fgets(sp1, sizeof(sp1), stdin);
	printf("so luong 1: ");
	scanf_s("%d", &sl1);
	while (getchar() != '\n');
	for (int i = 0; i < 50; i++) {
		printf("%c", sp1[i]);
	}
	printf("\n");
	while (getchar() != '\n'); {
		printf("%s", getchar());

	}
	printf("san pham 2: ");
	fgets(sp1, sizeof(sp1), stdin);
	printf("so luong 2: ");
	scanf_s("%d", &sl1);
	while (getchar() != '\n');
	for (int i = 0; i < 50; i++) {
		printf("%c", sp1[i]);
	}
	printf("\n");
	while (getchar() != '\n'); {
		printf("%s", getchar());

	}
	printf("san pham 3: ");
	fgets(sp1, sizeof(sp1), stdin);
	printf("so luong 3: ");
	scanf_s("%d", &sl1);
	while (getchar() != '\n');
	for (int i = 0; i < 50; i++) {
		printf("%c", sp1[i]);
	}
	printf("\n");

 }
void trungBinhCongSoChiaHetCho3() {

}
void thongTinNhanVien() {

}

int main()
{
	int chon;
	printf("<<<<<menu>>>>>>\n");
	printf("1. thong tin san pham\n");
	printf("2. trung binh cong cac so chia het cho 3\n");
	printf("3. thong tin nhan vien\n");
	printf("0. thoat");
	scanf_s("%d", &chon);
	switch (chon) {
	case 1:
		thongTinSanPham();
		break;
	case 2:
		trungBinhCongSoChiaHetCho3();
		break;
	case 3:
		thongTinNhanVien();
		break;

	}
	while (chon != 0);


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