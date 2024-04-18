#pragma once
#include <bits/stdc++.h>
// #include<conio.h>
#include"mylib.h"
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#define maxi 10000
#define sokhong 48
#define sochin 58
#define max_mh 30
using namespace std;
#define MAUNEN 14
#define MAUCHU 4
#define ngang 196
#define doc 179
#define traitren 218
#define phaitren 191
#define traiduoi 192
#define phaiduoi 217
#define giualen 193
#define giuaxuong 194
using namespace std;
typedef char str[70];
typedef char q[20];
typedef char y[15];
typedef char m[15];
typedef char t[50];
typedef char ch[31];
typedef char sc[31];
typedef char u[30];
str thaotac[8] = {"                         nhap lop",
                  "                   nhap sinh vien cua lop",
                  "                        nhap mon hoc",
                  "                      nhap cau hoi thi",
                  "                       thi trac nghiem",
                  "    in chi tiet cau hoi da thi 1 mon hoc cua 1 sinh vien",
                  "        in ban diem thi trac nghiem mon hoc cua mot lop",
                  "                             thoat"};
y chucnang[3] = {"THEM", "XOA", "HIEU CHINH"};
m mon[10] = {"BAS1150", "BSA1221_CLC", "ELE1309_CLC", "INT13145_CLC", "INT1359_CLC", "INT14119_CLC", "SKD1102", "SKD1108", "BAS1224_CLC", "BAS1204_CLC"};
t ten[10] = {"TRIET HOC MAC_LENIN", "PHAP LUAT DAI CUONG", "DIEN TU SO", "KIEN TRUC MAY TINH", "TOAN ROI RAC 2", "LAP TRINH PYTHON", "KI NANG LAM VIEC NHOM", "PP LUAN NGHIEN CUU KHOA HOC", "VAT LI 1 VA THI NGHIEM", "GIAI TICH 2"};
sc sl[5] = {"5 CAU", "10 CAU"};
ch mon1[5] = {"CTDL&GT", "XAC XUAT THONG KE", "TOAN ROI RAC", "TIENG ANH", "GIAI TICH"};
u them[2] = {"ENTER", "CHI TIET CAU TRA LOI DA THI"};
enum TRANGTHAI
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    ENTER,
    BACK,
    ESC
};
TRANGTHAI key(int z)
{
    if (z == 224)
    {
        char c;
        c = _getch();
        if (c == 72)
        {
            return UP;
        }
        if (c == 80)
        {
            return DOWN;
        }
        if (c == 77)
        {
            return RIGHT;
        }
        if (c == 75)
        {
            return LEFT;
        }
    }
    else if (z == 13)
        return ENTER;
    else if(z==27)
        return ESC;
}
// ÐÂY LÀ TOÀN Bài cấu TRÚC CHO Ðề TÀI TRắc NGHiệm.

struct dap_an
{
    string dap_an_1;
    string dap_an_2;
    string dap_an_3;
    string dap_an_4;
};
struct cau_hoi_thi
{
    int id;
    string noi_dung_cau_hoi;
    dap_an dap_an_cau_hoi;
    char dap_an_dung;
};
struct node_cau_hoi_thi
{
    cau_hoi_thi data;
    node_cau_hoi_thi *next;
};
typedef struct node_cau_hoi_thi *ptr_cau_hoi_thi;

//  trên là khai báo struct cho danh sách câu hỏi thi.
struct mon_hoc
{
    string ma_mon_hoc;
    string ten_mon_hoc;
    ptr_cau_hoi_thi ds_cau_hoi_thi = NULL;
};
struct node_mon_hoc
{
    int key;
    mon_hoc a;
    node_mon_hoc *left;
    node_mon_hoc *right;
    int height;
};
typedef struct node_mon_hoc *ptr_mon_hoc;
//  trên là khai báo struct cho danh sach môn học.
struct diem_thi
{
    string ma_mon_hoc;
    float diem=0;
};
struct node_diem_thi
{
    diem_thi data;
    node_diem_thi *next;
};
typedef struct node_diem_thi *ptr_diem_thi;
//  trên là khai báo struct cho danh sách điểm thi.
struct sinh_vien
{
    string ma_sinh_vien;
    string ho;
    string ten;
    string phai;
    string password;
    ptr_diem_thi ds_diem_thi = NULL;
};
struct node_sinh_vien
{
    sinh_vien data;
    node_sinh_vien *next;
};
typedef struct node_sinh_vien *ptr_sinh_vien;
// trên là khai báo struct cho danh sách sinh vien.
struct lop
{
    string ma_lop;
    string ten_lop;
    ptr_sinh_vien ds_sv = NULL;
};
struct ds_lop
{
    lop *danh_dach_lop[maxi];
    int so_luong_lop = 0;
};
struct bang_diem
{
    string ten;
    string ma;
    int so_cau_hoi;
    int so_cau_dung;
    float diem;
};

