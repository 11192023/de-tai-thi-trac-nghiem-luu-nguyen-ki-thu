#pragma once
#include"file_struct.h"
#include <fstream>
#include"load_file.h"
//------all_function
//nhung ham trong cau b
// void log_in(string code_sv, string password);
// void menu(ds_lop &ds_lop, ptr_mon_hoc &ds_mh, str thaotac[8], int n, m mon[10], t ten[10]);
void BaoLoi(string s);
int nhap_lop(lop &a);
void in_1_lop(lop a, int i);
void in_danh_sach_lop(ds_lop a);
//nhung ham trong cau c
void nhap_sinh_vien(sinh_vien &a, string lop);
int count1(ptr_sinh_vien head);
ptr_sinh_vien make_node_sinh_vien(sinh_vien &a);
void insert_order(ptr_sinh_vien &ds_sv, sinh_vien &a);
//nhung ham trong cau d
int ham_tim_kiem_ma_Lop(ds_lop a, string s);
void in_1_hoc_sinh(sinh_vien a, int i);
void duyet_danh_sach_sinh_vien(ptr_sinh_vien ds_sv);
void in_danh_sach_sinh_vien_trong_lop(ds_lop c, string a);
// ham cau a
//nhung ham cau e
istream &operator>>(istream &is, mon_hoc &a);
ostream &operator<<(ostream &os, mon_hoc a);
int tall(ptr_mon_hoc a);
void rightrotate(ptr_mon_hoc &p);
void leftrotate(ptr_mon_hoc &p);
void doublerightchild(ptr_mon_hoc &p);
void doubleleftchild(ptr_mon_hoc &p);
void balance(ptr_mon_hoc &ds_mon_hoc);
void insert_node(ptr_mon_hoc &ds_mon_hoc, int key, mon_hoc a);
void create_tree(ptr_mon_hoc &ds_mon_hoc, int key);
int kt_trung(ptr_mon_hoc ds_mh, int key);
void xuat_danh_sach_mon_hoc(ptr_mon_hoc &ds_mh);
int search_delete(ptr_mon_hoc &ds_mon_hoc, string s);
void tim_trai(ptr_mon_hoc &x, ptr_mon_hoc &b);
void delete_mon_hoc(ptr_mon_hoc &ds_mon_hoc, int &key);
int tao_key(ptr_mon_hoc ds_mh);
int count(ptr_mon_hoc head);
ptr_cau_hoi_thi make_node_cau_hoi_thi(cau_hoi_thi &a);
void insert_node_cau_hoi_thi(ptr_cau_hoi_thi &first, cau_hoi_thi &infor);
void nhap_cau_hoi_thi(cau_hoi_thi &infor, int key);
int search_id_cau_hoi_thi(ptr_cau_hoi_thi first, int id);
ptr_mon_hoc ham_tim_kiem_ten_mon_hoc(ptr_mon_hoc ds_mh, int key);
void in_1_hoc_sinh1(sinh_vien a, int i, string ma);
void duyet_danh_sach_sinh_vien1(ptr_sinh_vien ds_sv, string ma);
// những hàm đồ họa
void box(int x, int y, int w, int h, string nd);
string box2(int x, int y, int w, int h);
string box1(int x, int y, int w, int h);
void thanh_sang(int x, int y, int w, int h, int b_color, string nd);
void box5(int x, int y, int w, int h, string nd);
void box4(int x, int y, int w, int h, string nd);
void box3(int x, int y, int w, int h, string nd);
void box2(int x, int y, int w, int h, string nd);
void box7(int x, int y, int w, int h, string nd);
void box6(int x, int y, int w, int h, string nd);
void box8(int x, int y, int w, int h, string nd);
void thanh_sang1(int x, int y, int w, int h, int b_color, string nd);
int menu10(int x1, int y1, int w1, int h1, u them[]);
void menu4(int n, ds_lop &ds_lop);
char menu5(m mon[10], t ten[10], int n, ptr_mon_hoc &ds_mh);
void menu1(y chucnang[3], ptr_mon_hoc &ds_mh, m mon[10], t ten[10]);
void menu4();
int menu5(ptr_mon_hoc ds_mh, int n, int x, int y, int w, int h, int x1, int y1, int w1, int h1);
int menu6(sc sl[5], int n, int x, int y, int w, int h, int x1, int y1, int w1, int h1);
    void menu7(int n);
    ptr_diem_thi make_node_diem_thi(diem_thi &a);
    void insert_node_diem_thi(ptr_diem_thi &first, diem_thi &infor);
    int size(ptr_sinh_vien a);
    void delete_first(ptr_sinh_vien &a);
    void delete_last(ptr_sinh_vien &a);
    void delete_middle(ptr_sinh_vien &a, int pos);
    void menu8(ds_lop &ds_lop, string code_sv, string sl, mon_hoc a, int n, int data, bang_diem &bang_diem);
    void menu3(ptr_mon_hoc &ds_mh, ds_lop &ds_lop, bang_diem &bang_diem, string code_sv);
    void menu11(ptr_mon_hoc ds_mh, ds_lop ds_lop);
    // những hàm của câu nhap cau  hỏi
    void menu(ds_lop &ds_lop, ptr_mon_hoc &ds_mh, str thaotac[8], int n, m mon[10], t ten[10], string code_sv);
    void log_in(string code_sv, string password);
    void box8(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 3);
            cout << char(ngang);
            gotoxy(ix, y + 28);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 1, y + 1);
        cout << nd;
    }
    void box7(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 3);
            cout << char(ngang);
            gotoxy(ix, y + 28);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            if (iy <= 27 + 4 + 1)
            {
                gotoxy(x + 100, iy);
                cout << char(doc);
            }
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 100, y);
        cout << char(giuaxuong);
        gotoxy(x + 100, 27 + 5 + 1);
        cout << char(giualen);
        gotoxy(x + 1, y + 1);
        cout << nd;
     }
    void box5(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 2);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + 5, iy);
            cout << char(doc);
            gotoxy(x + 20, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 5, y);
        cout << char(giuaxuong);
        gotoxy(x + 20, y);
        cout << char(giuaxuong);
        gotoxy(x + 5, y + h);
        cout << char(giualen);
        gotoxy(x + 20, y + h);
        cout << char(giualen);
        gotoxy(x + 1, y + 1);
        cout << nd;
    }

    void box4(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 2);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + 16, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15 + 8, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15 + 8 + 5, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 16, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15 + 8, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15 + 8 + 5, y);
        cout << char(giuaxuong);
        gotoxy(x + 16, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15 + 8, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15 + 8 + 5, y + h);
        cout << char(giualen);
    }
    void box11(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 2);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + 16, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15 + 8, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15 + 8 + 5, iy);
            cout << char(doc);
            gotoxy(x + 16 + 15 + 8 + 5+10, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x + 16 + 15 + 8 + 5 + 10, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15 + 8 + 5 + 10, y+h);
        cout << char(giualen);
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 16, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15 + 8, y);
        cout << char(giuaxuong);
        gotoxy(x + 16 + 15 + 8 + 5, y);
        cout << char(giuaxuong);
        gotoxy(x + 16, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15 + 8, y + h);
        cout << char(giualen);
        gotoxy(x + 16 + 15 + 8 + 5, y + h);
        cout << char(giualen);
    }
    void box3(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + 2);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + 5, iy);
            cout << char(doc);
            gotoxy(x + 20, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 5, y);
        cout << char(giuaxuong);
        gotoxy(x + 20, y);
        cout << char(giuaxuong);
        gotoxy(x + 5, y + h);
        cout << char(giualen);
        gotoxy(x + 20, y + h);
        cout << char(giualen);
        gotoxy(x + 1, y + 1);
    }
    void box(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);

        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 1, y + 1);
        SetColor(4);
        cout << nd;
        SetColor(7);
    }
    void box2(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 5, y);
        gotoxy(x + 1, y + 1);
    }
    void box6(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + 3, iy);
            cout << char(doc);
            gotoxy(x + 6, iy);
            cout << char(doc);
            gotoxy(x + 9, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 5, y);
        gotoxy(x + 3, y);
        cout << char(giuaxuong);
        gotoxy(x + 6, y);
        cout << char(giuaxuong);
        gotoxy(x + 9, y);
        cout << char(giuaxuong);
        gotoxy(x + 3, y + h);
        cout << char(giualen);
        gotoxy(x + 6, y + h);
        cout << char(giualen);
        gotoxy(x + 9, y + h);
        cout << char(giualen);
        gotoxy(x + 1, y + 1);
        SetColor(5);
        cout << nd;
        SetColor(4);
    }
    string box2(int x, int y, int w, int h)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 1, y + 1);
        string a = chuan_hoa_password_1("", x + 1, y + 1);
        return a;
    }
    string box1(int x, int y, int w, int h)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 1, y + 1);
        int t = 0;
        string a = chuan_hoa_ma_1(t, x + 1, y + 1);
        return a;
    }
    void thanh_sang(int x, int y, int w, int h, int b_color, char nd)
    {
        SetBGColor(b_color);
        for (int i = y + 1; i < y + h; i++)
        {
            for (int j = x + 1; j < x + w; j++)
            {
                gotoxy(j, i);
                cout << " ";
            }
        }
        gotoxy(x + 1, y + 1);
        SetColor(5);
        cout << nd;
        SetColor(7);
        SetBGColor(0);
    }
    void thanh_sang(int x, int y, int w, int h, int b_color, string nd)
    {
        SetBGColor(b_color);
        for (int i = y + 1; i < y + h; i++)
        {
            for (int j = x + 1; j < x + w; j++)
            {
                gotoxy(j, i);
                cout << " ";
            }
        }
        gotoxy(x + 1, y + 1);
        SetColor(5);
        cout << nd;
        SetColor(7);
        SetBGColor(0);
    }
    void thanh_sang1(int x, int y, int w, int h, int b_color, string nd)
    {
        SetBGColor(b_color);
        for (int i = y + 1; i < y + h; i++)
        {
            for (int j = x + 1; j < x + w; j++)
            {
                gotoxy(j, i);
                cout << " ";
            }
        }
        gotoxy(x + 7 + 1 - 5, y + 1);
        SetColor(5);
        cout << nd;
        SetColor(7);
        SetBGColor(0);
    }
    void box1(int x, int y, int w, int h, string nd)
    {

        for (int ix = x; ix <= x + w; ix++)
        {
            gotoxy(ix, y);
            cout << char(ngang);
            gotoxy(ix, y + h);
            cout << char(ngang);
        }
        for (int iy = y; iy <= y + h; iy++)
        {
            gotoxy(x, iy);
            cout << char(doc);
            gotoxy(x + w, iy);
            cout << char(doc);
        }
        gotoxy(x, y);
        cout << char(traitren);
        gotoxy(x + w, y);
        cout << char(phaitren);
        gotoxy(x, y + h);
        cout << char(traiduoi);
        gotoxy(x + w, y + h);
        cout << char(phaiduoi);
        gotoxy(x + 1, y + 1);
        cout << nd;
    }
    int stop = 0; // bien dwfng ca 2 thread
    int run()
    {
        // toa do x
        int x = 60;
        // toa do y
        int y = 6;
        // chieu dai
        int w = 50;
        // chieu cao
        int h = 15;
        int x4 = x + 10;
        int y4 = 24;
        int w4 = 29;
        int h4 = 5;
        int x5 = x + 15;
        int y5 = 28;
        int w5 = 5;
        int h5 = 2;
        // box(x + 15, 28, 5, 2, "yes");
        int x6 = x + 25;
        int y6 = 15;
        int w6 = 5;
        int h6 = 2;
        // box(x + 25, 28, 5, 2, "no");
        int xp = x5;
        int yp = 17;
        int x_cu1 = xp;
        int y_cu1 = yp;
        int kt = true;
        int x_cu = wherex();
        int y_cu = wherey();
        string c[] = {"YES", "NO"};
        int tt = 0;
        int tt_cu = 0;
        char r = ' ';
        while (1)
        {
            box(x, 15, 50, 5, "");
            gotoxy(x + 11, 16);
            SetColor(4);
            cout << "ban co muon nop bai khong ?";
            SetColor(7);
            gotoxy(x_cu, y_cu);
            box(x + 15, 17, 5, 2, c[0]);
            box(x + 25, 17, 5, 2, c[1]);
            if (kt == true)
            {
                thanh_sang(xp, yp, 5, 2, 4, c[tt]);
                kt = false;
            }
            x_cu1 = xp;
            y_cu1 = yp;
            tt_cu = tt;
            int z = getch();
            TRANGTHAI trangthai = key(z);
            switch (trangthai)
            {
            case LEFT:
            {
                kt = true;
                if (tt == 0 && xp == x5)
                {
                    xp = x6;
                    tt = 1;
                }
                else
                {
                    xp = x5;
                    tt = 0;
                }
                break;
            }
            case RIGHT:
            {
                kt = true;
                if (tt == 1 && xp == x6)
                {
                    xp = x5;
                    tt = 0;
                }
                else
                {
                    xp = x6;
                    tt = 1;
                }
                break;
            }
            case ENTER:
            {
                // return tt;
                if (tt == 0)
                {
                    r = 'y';
                }
                else
                {
                    r = 'n';
                }
                break;
            }
            }
            if (r == 'y' || r == 'n')
            {
                break;
            }
            thanh_sang(x_cu1, y_cu1, 5, 2, 0, c[tt_cu]);
        }
        int check = 0;
        if (r == 'y')
        {
            check = 27;
        }
        else
        {
            return 0;
        }
        if (check == 27)
        {
            return 1;
        }
    }
    void *startTimerJob(void *time_in_second)
    {

        int *p = (int *)time_in_second;
        int number = *p;
        // int number = 15;
        int s = 59;
        char a = '0';
        int x = wherex();
        int y = wherey();
        while (number >= 0 && stop == 0)
        {
            number -= 1;
            ShowConsoleCursor(0);
            gotoxy(126, 6);
            if (number >= 10)
            {
                ShowConsoleCursor(0);
                cout << "thoi gian con lai: " << number << ":";
                // time_in_second[1] = p;
            }
            else
            {
                ShowConsoleCursor(0);
                cout << "thoi gian con lai: " << a << number << ":";
                // time_in_second[1] = p;
            }
            // gotoxy(x, y);
            while (s > 0 && stop == 0)
            {
                ShowConsoleCursor(0);
                gotoxy(126 + 22, 6);
                if (s >= 10)
                {
                    ShowConsoleCursor(0);
                    cout << s << "   ";
                }
                else
                {
                    ShowConsoleCursor(0);
                    cout << a << s << "   ";
                }
                
                Sleep(980);
                s -= 1;
                if (s == 1)
                {
                    s = 59;
                    break;
                }
            }
        }
        if (stop == 0)
            cout << "\nHet thoi gian" << endl;
        pthread_exit(NULL);
        stop = 1;
    }
    void menu4(int n, ds_lop &ds_lop)
    {
        ShowConsoleCursor(0);
        // toa do x
        int x = 50;
        // toa do y
        int y = 5;
        // chieu dai
        int w = 31;
        // chieu cao
        int h = 2;
        int b_color = 4;
        int tt = 0;
        int xp = x;
        int yp = y;
        int x_cu = xp;
        int y_cu = yp;
        int tt_cu = 0;
        bool kt = true;
        // bảng nhỏ thực hiện thao tác kiêm tra
        // tọa độ x1
        int x1 = x;
        // tạo độ y2
        int y1 = 1;
        // tọa độ w1
        int w1 = 31;
        // tọa độ h1
        int h1 = 2;
        int x_c = wherex();
        int y_c = wherey();
        while (1)
        {
            char t = ' ';
            //    clrscr();
            gotoxy(x1 - 7, y1 + 1);
            SetColor(4);
            cout << "MA LOP:";
            SetColor(7);
            gotoxy(x_c, y_c);
            for (int i = 0; i < ds_lop.so_luong_lop; i++)
            {
                box1(x, y + (i * h), w, h, ds_lop.danh_dach_lop[i]->ma_lop);
            }
            for (int i = 1; i <= ds_lop.so_luong_lop - 1; i++)
            {
                gotoxy(x, y + (h * i));
                cout << char(195);
                gotoxy(x + w, y + (h * i));
                cout << char(180);
            }
            if (kt == true)
            {
                box1(x1, y1, w1, h1, ds_lop.danh_dach_lop[tt]->ma_lop);
                thanh_sang(x1, y1, w1, h1, 4, ds_lop.danh_dach_lop[tt]->ma_lop);
                thanh_sang(xp, yp, w, h, b_color, ds_lop.danh_dach_lop[tt]->ma_lop);
                kt = false;
            }
            x_cu = xp;
            y_cu = yp;
            tt_cu = tt;
            int z = getch();
            TRANGTHAI trangthai = key(z);
            switch (trangthai)
            {
            case UP:
            {
                kt = true;
                if (tt == 0 && yp == y)
                {
                    yp = y + 2 * (ds_lop.so_luong_lop - 1);
                    tt = ds_lop.so_luong_lop - 1;
                }
                else
                {
                    yp -= 2;
                    tt--;
                }
                break;
            }
            case DOWN:
            {
                kt = true;
                if (tt == ds_lop.so_luong_lop - 1 && yp == y + 2 * (ds_lop.so_luong_lop - 1))
                {
                    yp = y;
                    tt = 0;
                }
                else
                {
                    yp += 2;
                    tt++;
                }
                break;
            }
            case ENTER:
            {
                system("cls");
                int a = 0;
                int sl;
                SetColor(4);
                cout << "NHAP SO LUONG SINH VIEN MUON NHAP VAO LOP: ";
                SetColor(7);
                cin >> sl;
                clrscr();
                do
                {
                    a = ham_tim_kiem_ma_Lop(ds_lop, ds_lop.danh_dach_lop[tt]->ma_lop);
                    if (a == -1)
                    {
                        BaoLoi("khong tim thay ma lop! moi ban nhap lai");
                    }
                } while (a == -1);
                for (int i = 0; i < sl; i++)
                {
                    system("cls");
                    in_danh_sach_sinh_vien_trong_lop(ds_lop, ds_lop.danh_dach_lop[tt]->ma_lop);
                    sinh_vien b;
                    string lop = lay_ten_lop(ds_lop.danh_dach_lop[tt]->ma_lop);
                    nhap_sinh_vien(b, lop);
                    insert_order(ds_lop.danh_dach_lop[a]->ds_sv, b);
                    in_danh_sach_sinh_vien_trong_lop(ds_lop, ds_lop.danh_dach_lop[tt]->ma_lop);
                }
                clrscr();
                kt = true;
                break;
            }
            case ESC:
            {
                t = 'e';
                break;
            }
            }
            if (t == 'e')
            {
                break;
            }
            thanh_sang(x_cu, y_cu, w, h, 0, ds_lop.danh_dach_lop[tt_cu]->ma_lop);
        }
    }
    char menu5(m mon[10], t ten[10], int n, ptr_mon_hoc &ds_mh)
    {
        ShowConsoleCursor(0);
        // toa do x
        int x = 135;
        // toa do y
        int y = 5;
        // chieu dai
        int w = 20;
        // chieu cao
        int h = 30;
        int b_color = 4;
        int tt = 0;
        int *mau = new int[n];
        for (int i = 0; i < n; i++)
            mau[i] = MAUCHU;
        mau[0] = MAUNEN;
        int xp = x;
        int yp = y;
        int x_cu = xp;
        int y_cu = yp;
        int tt_cu = 0;
        bool kt = true;
        // bảng nhỏ thực hiện thao tác kiêm tra
        // tọa độ x1
        int x1 = 60 + 14 + 5 + 18 + 1;
        // tạo độ y2
        int y1 = 8;
        // tọa độ w1
        int w1 = 20;
        // tọa độ h1
        int h1 = 2;
        int x_c = wherex();
        int y_c = wherey();
        for (int i = 0; i < n; i++)
        {
            box1(x, y + (i * 2), w, 2, mon[i]);
        }
        for (int i = 1; i <= 9; i++)
        {
            gotoxy(x, y + (2 * i));
            cout << char(195);
            gotoxy(x + w, y + (2 * i));
            cout << char(180);
        }
        while (1)
        {
            ShowConsoleCursor(0);

            if (kt == true)
            {
                // box1(x1, y1, w1, h1, mon[tt]);
                thanh_sang(x1, y1, w1, 2, 4, mon[tt]);
                thanh_sang(x1, y1 + 3, w1, 2, 4, ten[tt]);
                thanh_sang(xp, yp, w, 2, b_color, mon[tt]);
                kt = false;
            }
            x_cu = xp;
            y_cu = yp;
            tt_cu = tt;
            int z = getch();
            TRANGTHAI trangthai = key(z);
            switch (trangthai)
            {
            case UP:
            {
                kt = true;
                if (tt == 0 && yp == y)
                {
                    yp = y + 2 * (n - 1);
                    tt = n - 1;
                }
                else
                {
                    yp -= 2;
                    tt--;
                }
                break;
            }
            case DOWN:
            {
                kt = true;
                if (tt == n - 1 && yp == y + 2 * (n - 1))
                {
                    yp = y;
                    tt = 0;
                }
                else
                {
                    yp += 2;
                    tt++;
                }
                break;
            }
            case ENTER:
            {
                kt = true;
                int key;
                key = tao_key(ds_mh);
                mon_hoc a;
                a.ma_mon_hoc = mon[tt];
                a.ten_mon_hoc = ten[tt];
                insert_node(ds_mh, key, a);
                return 'y';
                break;
            }
            case ESC:
            {
                return 'n';
            }
            }
            thanh_sang(x1, y1, w1, 2, 0, "");
            thanh_sang(x1, y1 + 3, 30, 2, 0, "");
            thanh_sang(x_cu, y_cu, w, 2, 0, mon[tt_cu]);
        }
    }
    void menu1(y chucnang[3], ptr_mon_hoc & ds_mh, m mon[10], t ten[10])
    {
        // những tọa độ trong bang môn học
        // tọa độ x
        ShowConsoleCursor(0);
        // toa do x
        int x = 5;
        // toa do y
        int y = 5;
        // chieu dai
        int w = 55;
        // chieu cao
        int h = 30;
        int b_color = 4;
        int x_cu = wherex();
        int y_cu = wherey();
        // những tọa dộ của bang thứ hai
        //  toa do x
        int x1 = x + 60;
        // toa do y
        int y1 = y;
        // chieu dai
        int w1 = 12;
        // chieu cao
        int tt = 0;
        int h1 = 6;
        int xp = x1;
        int yp = y1;
        int x_cu1 = xp;
        int y_cu1 = yp;
        int tt_cu = 0;
        bool kt = true;
        box1(x, y, w, 2, "");
        box5(x, y + 4, w, h, "");
        gotoxy(x + 1, y + 5);
        SetColor(4);
        cout << "STT";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        gotoxy(x + 7, y + 5);
        SetColor(4);
        cout << "MA MON HOC";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        gotoxy(x + 25, y + 5);
        SetColor(4);
        cout << "TEN MON HOC";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        gotoxy(x + 10, y + 1);
        SetColor(4);
        cout << "DANH SACH MON HOC LOP E22CQCN01-N";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        while (1)
        {
            xuat_danh_sach_mon_hoc(ds_mh);
            ShowConsoleCursor(0);
            for (int i = 0; i < 3; i++)
            {
                box1(x1, y + (i * 2), w1, 2, chucnang[i]);
            }
            for (int i = 1; i <= 2; i++)
            {

                gotoxy(x1, y + (2 * i));
                cout << char(195);
                gotoxy(x1 + w1, y + (2 * i));
                cout << char(180);
            }
            if (kt == true)
            {
                thanh_sang(xp, yp, w1, 2, b_color, chucnang[tt]);
                kt = false;
            }
            x_cu1 = xp;
            y_cu1 = yp;
            tt_cu = tt;
            int t = 1;
            int z = getch();
            TRANGTHAI trangthai = key(z);
            switch (trangthai)
            {

            case UP:
            {
                kt = true;
                if (tt == 0 && yp == y)
                {
                    yp = y + 2 * (3 - 1);
                    tt = 3 - 1;
                }
                else
                {
                    yp -= 2;
                    tt--;
                }
                break;
            }
            case DOWN:
            {
                kt = true;
                if (tt == 3 - 1 && yp == y + 2 * (3 - 1))
                {
                    yp = y;
                    tt = 0;
                }
                else
                {
                    yp += 2;
                    tt++;
                }
                break;
            }
            case ENTER:
            {
                // vẽ những bảng con trong từng chức nang
                //   toa do x
                int x2 = x + 60 + 14;
                // toa do y
                int y2 = y;
                // chieu dai
                int w2 = 55;
                // chieu cao
                int h2 = 15;
                switch (tt)
                {
                case 0:
                {
                    if (1)
                    {
                        ShowConsoleCursor(2);
                        int b = 0;
                        gotoxy(x_cu, y_cu);
                        box1(x2, y2, w2, h2, "");
                        box1(x2 + 18, y2 + 3, 35, 2, "");
                        box1(x2 + 18, y2 + 6, 35, 2, "");
                        gotoxy(x2 + 1, y2 + 4);
                        SetColor(4);
                        cout << "MA MON HOC:";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        gotoxy(x2 + 1, y2 + 7);
                        SetColor(4);
                        cout << "TEN MON HOC:";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        gotoxy(x2 + 20, y2 + 1);
                        SetColor(4);
                        cout << "NHAP MON HOC";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        box2(x2 + 24, y + 11, 7, 2, "");
                        gotoxy(x2 + 25, y + 12);
                        cout << "ENTER";
                        gotoxy(x_cu, y_cu);
                        thanh_sang(x2 + 24, y + 11, 7, 2, 4, "ENTER");
                        int key = 0;
                        int sl;
                        gotoxy(x2, y2 + 16);
                        SetColor(4);
                        cout << "MOI BAN NHAP SO LUONG MON HOC BAN MUON THEM: ";
                        SetColor(7);
                        cin >> sl;
                        gotoxy(x_cu, y_cu);
                        for (int i = 0; i < sl; i++)
                        {
                            xuat_danh_sach_mon_hoc(ds_mh);
                            key = tao_key(ds_mh);
                            mon_hoc a;
                            cin >> a;
                            insert_node(ds_mh, key, a);
                             //load_file_ds_mon_hoc_ghi(ds_mh);
                            b = 13;
                            if (b == 13)
                            {
                                ShowConsoleCursor(0);
                                for (int i = 0; i <= 33; i++)
                                {
                                    gotoxy(x2 + 19 + i, y2 + 4);
                                    cout << " ";
                                    gotoxy(x_cu, y_cu);
                                    gotoxy(x2 + 19 + i, y2 + 7);
                                    cout << " ";
                                    gotoxy(x_cu, y_cu);
                                }
                            }
                            for (int i = y + 7; i < 30; i++)
                            {
                                for (int j = x + 1; j < 60; j++)
                                {
                                    if (j != x + 5 && j != x + 20)
                                    {
                                        gotoxy(j, i);
                                        cout << " ";
                                        gotoxy(x_cu, y_cu);
                                    }
                                }
                            }
                            xuat_danh_sach_mon_hoc(ds_mh);
                    }
            }
            thanh_sang(x2 + 24, y + 11, 7, 2, 0, "");
            thanh_sang(x2-1, y2-1, w2+5, h2+7, 0, "");
            break;
            }
            case 1:

            {
                string in[maxi];
                int dem = 0;
                ptr_mon_hoc stack[maxi];
                ptr_mon_hoc p=ds_mh;
                int sp = -1;
                do {
                    while (p != NULL){
                        stack[++sp] = p;
                        p = p->left;
                    }
                    if(sp!=-1){
                        p = stack[sp--];
                        string *re = new string;
                        re = &(p->a.ma_mon_hoc);
                        in[dem] = *re;
                        ++dem;
                        p = p->right;
                    }else{
                        break;
                    }
                } while (1);
                bool check = true;
                int xp1 = x + 5;
                int yp1 = 11;
                int tt1 = 0;
                int x_cu1=0;
                int y_cu1=0;
                int tt_cu1=0;
                int co = 0;
                int tmp = 1;
                while (1)
                {
                    int r = ' ';
                    if (check == true)
                    {
                        thanh_sang1(xp1, yp1, 15, 1, b_color, (in[tt1]));
                        check = false;
                    }
                    x_cu1 = xp1;
                    y_cu1 = yp1;
                    tt_cu1 = tt1;
                    int z = getch();
                    TRANGTHAI trangthai = key(z);
                    switch (trangthai)
                    {

                    case UP:
                    {
                        check = true;
                        if (tt1 == 0 && yp1 == 11)
                        {
                            yp1 = 11 + 1 *(dem-1);
                            tt1 = dem-1;
                        }
                        else
                        {
                            yp1 -= 1;
                            tt1--;
                        }
                        break;
                    }
                    case DOWN:
                    {
                        check = true;
                        if (tt1 == dem-1 && yp1 == 11+ 1 * (dem-1))
                        {
                            yp1 = 11;
                            tt1 = 0;
                        }
                        else
                        {
                            yp1 += 1;
                            tt1++;
                        }
                        break;
                    }
                    case ENTER:{
                        check = true;
                        // tmp = 0;
                         co = tt1;
                        // break;
                        int c = 0;
                        ShowConsoleCursor(0);
                        box1(x2, y2, w2, 10, "");
                        box1(x2 + 18, y2 + 3, 35, 2, "");
                        gotoxy(x2 + 1, y2 + 4);
                        SetColor(4);
                        cout << "MA MON HOC:";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        gotoxy(x2 + 20, y2 + 1);
                        SetColor(4);
                        cout << "XOA MON HOC";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        int tt = 0;
                        int tt_cu = 0;
                        string ta[] = {"YES", "NO"};
                        int x_cu1 = 0;
                        int y_cu1 = 0;
                        bool kt = true;
                        int xp = x2 + 19;
                        int yp = y + 6 + 1+1;
                        // int r = ' ';
                        gotoxy(x2 + 19, y2 + 4);
                        string s;
                        int key1 = 0;
                        //  s = chuan_hoa_ma(" ");
                        cout << (in[co]);
                        key1 = search_delete(ds_mh, (in[co]));
                        while (1)
                        {
                            box(x2, y+6, 55, 6, "");
                            gotoxy(x2 + 14, y+6+1);
                            SetColor(4);
                            cout << "ban co muon xoa khong ?";
                            SetColor(7);
                            gotoxy(x_cu, y_cu);
                            box(x2 + 19, y+6+1+1, 5, 2, ta[0]);
                            box(x2 + 29, y+6+1+1, 5, 2, ta[1]);
                            if (kt == true)
                            {
                                thanh_sang(xp, yp, 5, 2, 4, ta[tt]);
                                kt = false;
                            }
                            x_cu1 = xp;
                            y_cu1 = yp;
                            tt_cu = tt;
                            int z = getch();
                            TRANGTHAI trangthai = key(z);
                            switch (trangthai)
                            {
                            case LEFT:
                            {
                                kt = true;
                                if (tt == 0 && xp == x2+19)
                                {
                                    xp = x2+29;
                                    tt = 1;
                                }
                                else
                                {
                                    xp = x2+19;
                                    tt = 0;
                                }
                                break;
                            }
                            case RIGHT:
                            {
                                kt = true;
                                if (tt == 1 && xp == x2+29)
                                {
                                    xp = x2+19;
                                    tt = 0;
                                }
                                else
                                {
                                    xp = x2+29;
                                    tt = 1;
                                }
                                break;
                            }
                            case ENTER:
                            {
                                // clrscr();
                                // return tt;
                                if (tt == 0)
                                {
                                    r = 'y';
                                }
                                else
                                {
                                    r = 'n';
                                }
                                break;
                            }
                            }
                            if (r == 'y'||r=='n')
                            {
                                break;
                            }
                            thanh_sang(x_cu1, y_cu1, 5, 2, 0, ta[tt_cu]);
                        }
                        //
                        if(r=='y'){
                        if (key1 == -1)
                        {
                            gotoxy(x2, y2 + 16);
                            SetColor(4);
                            cout << "MA MON HOC KHONG TON TAI!";
                            Sleep(2000);
                            SetColor(7);
                            gotoxy(x_cu, y_cu);
                        }
                        else
                        {
                            delete_mon_hoc(ds_mh, key1);
                            // load_file_ds_mon_hoc_ghi(ds_mh);
                        }
                        for (int i = y + 7; i < 30; i++)
                        {
                            for (int j = x + 1; j < 60; j++)
                            {
                                if (j != x + 5 && j != x + 20)
                                {
                                    gotoxy(j, i);
                                    cout << " ";
                                    gotoxy(x_cu, y_cu);
                                }
                            }
                        }
                        c = 13;
                        if (c == 13)
                        {
                            ShowConsoleCursor(0);
                            thanh_sang(x2 + 24, y + 6, 7, 2, 0, "");
                            thanh_sang(x2 - 1, y2 - 1, w2 + 5, h2 + 7, 0, "");
                        }
                    } 
                    else{
                        c = 13;
                        if (c == 13)
                        {
                            ShowConsoleCursor(0);
                            thanh_sang(x2 + 24, y + 6, 7, 2, 0, "");
                            thanh_sang(x2 - 1, y2 - 1, w2 + 5, h2 + 7, 0, "");
                        }
                    }
                    break;
                    }
                    }
                    if(r=='y'){
                        break;
                    }
                    thanh_sang1(x_cu1, y_cu1, 15, 1, 0, (in[tt_cu1]));
                    
                }
                        break;
                    }
            case 2:
            {
                // thiết kế thanh sáng đến ví trí mã môn hoc
                int dem1 = count(ds_mh);
                string in[dem1];
                int dem = 0;
                ptr_mon_hoc stack[dem1];
                ptr_mon_hoc p = ds_mh;
                int sp = -1;
                do
                {
                    while (p != NULL)
                    {
                        stack[++sp] = p;
                        p = p->left;
                    }
                    if (sp != -1)
                    {
                        p = stack[sp--];
                        string *re = new string;
                        re = &(p->a.ma_mon_hoc);
                        in[dem] = *re;
                        ++dem;
                        p = p->right;
                    }
                    else
                    {
                        break;
                    }
                } while (1);
                bool check = true;
                int xp1 = x + 5;
                int yp1 = 11;
                int tt1 = 0;
                int x_cu1 = 0;
                int y_cu1 = 0;
                int tt_cu1 = 0;
                int co = 0;
                int tmp = 1;
                char u = ' ';
                // while (1)
                // {
                    while (1)
                    {
                        u = ' ';
                        if (check == true)
                        {
                            thanh_sang1(xp1, yp1, 15, 1, b_color, (in[tt1]));
                            check = false;
                        }
                        x_cu1 = xp1;
                        y_cu1 = yp1;
                        tt_cu1 = tt1;
                        int z = getch();
                        TRANGTHAI trangthai = key(z);
                        switch (trangthai)
                        {

                        case UP:
                        {
                            check = true;
                            if (tt1 == 0 && yp1 == 11)
                            {
                                yp1 = 11 + 1 * (dem - 1);
                                tt1 = dem - 1;
                            }
                            else
                            {
                                yp1 -= 1;
                                tt1--;
                            }
                            break;
                        }
                        case DOWN:
                        {
                            check = true;
                            if (tt1 == dem - 1 && yp1 == 11 + 1 * (dem - 1))
                            {
                                yp1 = 11;
                                tt1 = 0;
                            }
                            else
                            {
                                yp1 += 1;
                                tt1++;
                            }
                            break;
                        }
                        case ENTER:
                        {
                            check = true;
                            box1(x2, y2, w2, h2, "");
                            box1(x2 + 18, y2 + 3, 35, 2, "");
                            box1(x2 + 18, y2 + 6, 35, 2, "");
                            gotoxy(x2 + 1, y2 + 4);
                            SetColor(4);
                            cout << "MA MON HOC:";
                            SetColor(7);
                            gotoxy(x_cu, y_cu);
                            gotoxy(x2 + 1, y2 + 7);
                            SetColor(4);
                            cout << "TEN MON HOC:";
                            SetColor(7);
                            gotoxy(x_cu, y_cu);
                            gotoxy(x2 + 15, y2 + 1);
                            SetColor(4);
                            cout << "HIEU CHINH MON HOC";
                            SetColor(7);
                            gotoxy(x_cu, y_cu);
                            box2(x2 + 24, y + 11, 7, 2, "");
                            gotoxy(x2 + 25, y + 12);
                            cout << "ENTER";
                            gotoxy(x_cu, y_cu);
                            thanh_sang(x2 + 24, y + 11, 7, 2, 4, "ENTER");
                            //
                            u=menu5(mon, ten, 10, ds_mh);
                    if(u=='y'){
                        int key1 = 0;
                        key1 = search_delete(ds_mh, (in[tt1]));
                        delete_mon_hoc(ds_mh, key1);
                        ShowConsoleCursor(0);
                        for (int i = y + 7; i < 30; i++)
                        {
                            for (int j = x + 1; j < 60; j++)
                            {
                                if (j != x + 5 && j != x + 20)
                                {
                                    gotoxy(j, i);
                                    cout << " ";
                                    gotoxy(x_cu, y_cu);
                                }
                            }
                        }
                    }
                    thanh_sang(x2-1, y2-1, 85, 30, 0, "");
                    break;
                        }
                        }
                        if(u=='y'){
                            break;
                        }
                        thanh_sang1(x_cu1, y_cu1, 15, 1, 0, (in[tt_cu1]));
                    }
                    break;
                    }
                    //end
                }
            kt = true;
            // return tt;
            break;
        }
        case ESC:{
            t = 2;
            break;
        }
        }
        if(t==2){
            break;
        }
        thanh_sang(x_cu1, y_cu1, w1, 2, 0, chucnang[tt_cu]);
    }
}
void menu4(string sl, string a,string code_sv)
{
    ShowConsoleCursor(0);
    // toa do x
    int x = 20;
    // toa do y
    int y = 5;
    // chieu dai
    int w = 146;
    // chieu cao
    int h = 30;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    box7(x, y, w, h, "");
    gotoxy(x + 1, y + 1);
    cout << "THI TRAC NGHIEM MON:"<<" "<<a;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 1, y + 2);
    cout << "MSSV:"<<" "<<code_sv;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 77, y + 1);
    cout << "TONG SO CAU HOI:"<<" "<<sl;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 10, y + 29);
    cout << "ESC: NOP BAI "
         << "|" << char(17) << ": CAU TRUOC "
         << " | " << char(16) << ": CAU SAU "
         << " | " << char(30) << ": LEN "
         << " | " << char(31) << ": XUONG ";
    gotoxy(x_cu, y_cu);
}
void menu11(string sl, string a, string code_sv)
{
    ShowConsoleCursor(0);
    // toa do x
    int x = 20;
    // toa do y
    int y = 5;
    // chieu dai
    int w = 100;
    // chieu cao
    int h = 30;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    box8(x, y, w, h, "");
    gotoxy(x + 1, y + 1);
    cout << "THI TRAC NGHIEM MON:"
         << " " << a;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 1, y + 2);
    cout << "MSSV:"
         << " " << code_sv;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 77, y + 1);
    cout << "TONG SO CAU HOI:"
         << " " << sl;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 10, y + 29);
    cout << "ESC: THOAT "
         << "|" << char(17) << ": CAU TRUOC "
         << " | " << char(16) << ": CAU SAU ";
    gotoxy(x_cu, y_cu);
}
int menu5(ptr_mon_hoc ds_mh, int n, int x, int y, int w, int h, int x1, int y1, int w1, int h1)
{
    ShowConsoleCursor(0);
    int b_color = 4;
    int tt = 0;
    int xp = x;
    int yp = y;
    int x_cu = xp;
    int y_cu = yp;
    int tt_cu = 0;
    bool kt = true;
    int x_c = wherex();
    int y_c = wherey();
    int a = 0;
    int dem = count(ds_mh);
    ptr_mon_hoc stack[dem];
    ptr_mon_hoc p=ds_mh;
    int sp = -1;
    string ha[dem];
    int j = 0;
    do{
        while(p!=NULL){
            stack[sp++] = p;
            p = p->left;
        }
        if(sp!=-1){
            p = stack[--sp];
            ha[j] = p->a.ten_mon_hoc;
            ++j;
            p = p->right;
        }
        else{
            break;
        }
    } while (1);
    while (1)
    {
        ShowConsoleCursor(0);

        for (int i = 0; i < n; i++)
        {

            box1(x, y + (i * 2), w, 2, ha[i]);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            gotoxy(x, y + (2 * i));
            cout << char(195);
            gotoxy(x + w, y + (2 * i));
            cout << char(180);
        }

        if (kt == true)
        {
            box1(x1, y1, w1, 2, ha[tt]);
            thanh_sang(x1, y1, w1, 2, 4, ha[tt]);
            thanh_sang(xp, yp, w, 2, b_color, ha[tt]);
            kt = false;
        }
        x_cu = xp;
        y_cu = yp;
        tt_cu = tt;
        int z = getch();
        TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
        {
            kt = true;
            if (tt == 0 && yp == y)
            {
                yp = y + 2 * (n - 1);
                tt = n - 1;
            }
            else
            {
                yp -= 2;
                tt--;
            }
            break;
        }
        case DOWN:
        {
            kt = true;
            if (tt == n - 1 && yp == y + 2 * (n - 1))
            {
                yp = y;
                tt = 0;
            }
            else
            {
                yp += 2;
                tt++;
            }
            break;
        }
        case ENTER:
            clrscr();
            a = 13;
            break;
            kt = true;
        }
        if (a == 13)
        {
            break;
        }
        thanh_sang(x_cu, y_cu, w, 2, 0, ha[tt_cu]);
    }
    return tt;
}
int menu6(sc sl[5], int n, int x, int y, int w, int h, int x1, int y1, int w1, int h1)
{
    ShowConsoleCursor(0);
    int b_color = 4;
    int tt = 0;
    int xp = x;
    int yp = y;
    int x_cu = xp;
    int y_cu = yp;
    int tt_cu = 0;
    bool kt = true;
    int x_c = wherex();
    int y_c = wherey();
    int a = 0;
    while (1)
    {
        ShowConsoleCursor(0);

        for (int i = 0; i < n; i++)
        {

            box1(x, y + (i * 2), w, 2, sl[i]);
        }
        for (int i = 1; i <= n - 1; i++)
        {
            gotoxy(x, y + (2 * i));
            cout << char(195);
            gotoxy(x + w, y + (2 * i));
            cout << char(180);
        }

        if (kt == true)
        {
            box1(x1, y1, w1, 2, sl[tt]);
            thanh_sang(x1, y1, w1, 2, 4, sl[tt]);
            thanh_sang(xp, yp, w, 2, b_color, sl[tt]);
            kt = false;
        }
        x_cu = xp;
        y_cu = yp;
        tt_cu = tt;
        int z = getch();
        TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
        {
            kt = true;
            if (tt == 0 && yp == y)
            {
                yp = y + 2 * (n - 1);
                tt = n - 1;
            }
            else
            {
                yp -= 2;
                tt--;
            }
            break;
        }
        case DOWN:
        {
            kt = true;
            if (tt == n - 1 && yp == y + 2 * (n - 1))
            {
                yp = y;
                tt = 0;
            }
            else
            {
                yp += 2;
                tt++;
            }
            break;
        }
        case ENTER:
            clrscr();
            a = 13;
            break;
            kt = true;
        }
        if (a == 13)
        {
            break;
        }
        thanh_sang(x_cu, y_cu, w, 2, 0, sl[tt_cu]);
    }
    return tt;
}
int menu10(int x1,int y1,int w1,int h1,u them[]){
    int xp = x1;
    int yp = y1;
    int x_cu=0;
    int y_cu=0;
    bool kt = true;
    int tt = 0;
    int tt_cu = 0;
    int a = 0;
    while (1)
    {
        ShowConsoleCursor(0);

        

        if (kt == true)
        {
            // thanh_sang(x1, y1, w1, 2, 4, them[tt]);
            // thanh_sang(xp, yp, w, 2, 4, them[tt]);
            if(tt==0){
                thanh_sang(xp+13, yp, 7, 2, 4, them[tt]);
            }else{
                thanh_sang(xp+2, yp, w1-3, 2, 4, them[tt]);
            }
            kt = false;
        }
        if(tt==0){
        x_cu = xp+13;
        y_cu = yp;
        tt_cu = tt;
        }else{
            x_cu = xp+2;
            y_cu = yp;
            tt_cu = tt;
        }
        int z = getch();
        TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
        {
            kt = true;
            if (tt == 0 && yp == y1)
            {
                yp = y1 + 3;
                tt = 1;
            }
            else
            {
                yp -= 3;
                tt--;
            }
            break;
        }
        case DOWN:
        {
            kt = true;
            if (tt == 1 && yp == y1 + 3)
            {
                yp = y1;
                tt = 0;
            }
            else
            {
                yp += 3;
                tt++;
            }
            break;
        }
        case ENTER:
            clrscr();
            if(tt==0){
                return 0;
            }else{
                return 1;
            }
            break;
        }
        if(tt_cu==0){
        thanh_sang(x_cu, y_cu, 7, 2, 0, them[tt_cu]);
        }else{
        thanh_sang(x_cu, y_cu, w1-3, 2, 0, them[tt_cu]);
        }
    }
}
void menu7(int n)
{
    int x = 18;
    int y = 4;
    int w = 3;
    int h = 2;
    int x_cu = wherex();
    int y_cu = wherey();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i <= 4)
        {
            gotoxy(x + 100 + 1 + 6, y + 9 + i * 3);
            cout << "CAU HOI " << i + 1 << ": ";
            gotoxy(x_cu, y_cu);
            box2(x + 100 + 1 + 12 + 5, y + 9 - 1 + i * 3, 3, 2, "");
            thanh_sang(x + 1 + 100 + 5 + 12, y + 9 - 1 + i * 3, 3, 2, 4, "");
        }
        else
        {
            gotoxy(x + 100 + 6 + 12 + 5 + 7, y + 9 + j * 3);
            cout << "CAU HOI " << i + 1 << ": ";
            gotoxy(x_cu, y_cu);
            box2(x + 100 + 12 + 5 + 12 + 5 + 7, y + 9 - 1 + j * 3, 3, 2, "");
            thanh_sang(x + 100 + 5 + 12 + 12 + 5 + 7, y + 9 - 1 + j * 3, 3, 2, 4, "");
            j++;
        }
    }
}
void in_cau_hoi(cau_hoi_thi a, int i)
{
    int x = 20;
    int y = 5;
    int x_cu = wherex();
    int y_cu = wherey();
    gotoxy(x + 3, y + 5);
    cout << "<" << i << ">";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 5 + 1 + 1, y + 5);
    cout << a.noi_dung_cau_hoi;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 7 - 1);
    cout << "A";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 7 - 1);
    cout << a.dap_an_cau_hoi.dap_an_1;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 9 - 1);
    cout << "B";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 9 - 1);
    cout << a.dap_an_cau_hoi.dap_an_2;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 11 - 1);
    cout << "C";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 11 - 1);
    cout << a.dap_an_cau_hoi.dap_an_3;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 13 - 1);
    cout << "D";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 13 - 1);
    cout << a.dap_an_cau_hoi.dap_an_4;
    gotoxy(x_cu, y_cu);
}
void in_cau_hoi1(cau_hoi_thi a, int i,int luu[],int j)
{
    int x = 20;
    int y = 5;
    int x_cu = wherex();
    int y_cu = wherey();
    gotoxy(x + 3, y + 5);
    cout << "<" << i << ">";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 5 + 1 + 1, y + 5);
    cout << a.noi_dung_cau_hoi;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 7 - 1);
    cout << "A";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 7 - 1);
    cout << a.dap_an_cau_hoi.dap_an_1;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 9 - 1);
    cout << "B";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 9 - 1);
    cout << a.dap_an_cau_hoi.dap_an_2;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 11 - 1);
    cout << "C";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 11 - 1);
    cout << a.dap_an_cau_hoi.dap_an_3;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 - 2 + 1, y + 13 - 1);
    cout << "D";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 6 + 2, y + 13 - 1);
    cout << a.dap_an_cau_hoi.dap_an_4;
    gotoxy(x_cu, y_cu);
    switch(luu[j]){
        case 1:{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 7 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1+2, y + 7 - 1-1, 90, 1, 4, a.dap_an_cau_hoi.dap_an_1);
            gotoxy(x + 6 - 2 + 1, y + 13 - 1 + 3);
            cout << "DAP AN DUNG LA: " << a.dap_an_dung;
            gotoxy(x_cu, y_cu);
            break;
            
        }
        case 2:{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 9 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1+2, y + 9 - 1-1, 90, 1, 4, a.dap_an_cau_hoi.dap_an_2);
            gotoxy(x + 6 - 2 + 1, y + 13 - 1 + 3);
            cout << "DAP AN DUNG LA: " << a.dap_an_dung;
            gotoxy(x_cu, y_cu);
            break;
        }
        case 3:{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 11 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1+2, y + 11 - 1-1, 90, 1, 4, a.dap_an_cau_hoi.dap_an_3);
            gotoxy(x + 6 - 2 + 1, y + 13 - 1 + 3);
            cout << "DAP AN DUNG LA: " << a.dap_an_dung;
            gotoxy(x_cu, y_cu);
            break;
    
        }
        case 4:{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 13 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1+2, y + 13 - 1-1, 90, 1, 4, a.dap_an_cau_hoi.dap_an_4);
            gotoxy(x + 6 - 2 + 1, y + 13 - 1 + 3);
            cout << "DAP AN DUNG LA: " << a.dap_an_dung;
            gotoxy(x_cu, y_cu);
            break;
            
        }
    }
    switch(a.dap_an_dung){
        case 'A':{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 7 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1 + 2, y + 7 - 1 - 1, 90, 1, 10, a.dap_an_cau_hoi.dap_an_1);
            break;
        }
        case 'B':{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 9 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1 + 2, y + 9 - 1 - 1, 90, 1, 10, a.dap_an_cau_hoi.dap_an_2);
            break;
        }
        case 'C':{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 11 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1 + 2, y + 11 - 1 - 1, 90, 1, 10, a.dap_an_cau_hoi.dap_an_3);
            break;
        }
        case 'D':{
            thanh_sang(x + 6 - 2 + 1 + 2, y + 13 - 1 - 1, 95, 1, 0, "");
            thanh_sang(x + 6 - 2 + 1 + 2, y + 13 - 1 - 1, 90, 1, 10, a.dap_an_cau_hoi.dap_an_4);
            break;
        }
    }
}
int size(ptr_cau_hoi_thi a)
{
    int cnt = 0;
    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}
void menu8(ds_lop& ds_lop,string code_sv,string sl,mon_hoc a, int n, int data, bang_diem &bang_diem)
{

    pthread_t timer;
    pthread_create(&timer, NULL, startTimerJob, (void *)&data);
    Sleep(100);
    int x_cu = wherex();
    int y_cu = wherey();
    menu4(sl,a.ten_mon_hoc,code_sv);
    gotoxy(20 + 102, 5 + 2 + 3);
    cout << "DA CHON";
    gotoxy(x_cu, y_cu);
    box2(20 + 102 + 8, 5 + 2 + 2, 3, 2, "");
    thanh_sang(20 + 102 + 8, 5 + 2 + 2, 3, 2, 10, "");
    gotoxy(20 + 102 + 8 + 3 + 2, 5 + 2 + 3);
    cout << "CHUA CHON";
    box2(20 + 102 + 3 + 8 + 3 + 9, 5 + 2 + 2, 3, 2, "");
    thanh_sang(20 + +3 + 102 + 8 + 3 + 9, 5 + 2 + 2, 3, 2, 4, "");
    menu7(n);
    int si = size(a.ds_cau_hoi_thi);
    int dem = 0;
    cau_hoi_thi cau[si];
    for (ptr_cau_hoi_thi p = a.ds_cau_hoi_thi; p != NULL;p=p->next){
        cau[dem] = p->data;
        ++dem;
    }
        srand(static_cast<unsigned int>(time(nullptr)));
    int generate[n];
    int count = 0;
    while (count < n)
    {
        int random = rand() % 10;
        bool isunique = true;
        for (int i = 0; i < count; i++)
        {
            if (generate[i] == random)
            {
                isunique = false;
                break;
            }
        }
        if (isunique)
        {
            generate[count] = random;
            count++;
        }
    }
    int i = 0;
    int j = 0;
    string dap[4] = {"A", "B", "C", "D"};
    int bat = 0;
    SetColor(4);
    gotoxy(18 + 100 + 1 + 3, 4 + 9 + i * 3);
    cout << "->";
    gotoxy(x_cu, y_cu);
    SetColor(7);
    int x_cu1 = 0;
    int y_cu1 = 0;
    int luu[10]={0};
    int p = 0;
    while (1)
    {
        p = 0;
        // IN NỘI DUNG CÂU HỎI
        in_cau_hoi(cau[generate[i]], i + 1);
        Sleep(100);
        if (i <= 4)
        {
            SetColor(4);
            gotoxy(18 + 100 + 1 + 3, 4 + 9 + i * 3);
            cout << "->";
            gotoxy(x_cu, y_cu);
            SetColor(7);
            x_cu1 = 18 + 100 + 1 + 3;
            y_cu1 = 4 + 9 + i * 3;
        }
        else
        {
            SetColor(4);
            gotoxy(18 + 100 + 18 + 3 + 1 + 3 + 1 + 1, 4 + 9 + j * 3);
            cout << "->";
            gotoxy(x_cu, y_cu);
            SetColor(7);
            x_cu1 = 18 + 100 + 18 + 3 + 3 + 1 + 1 + 1;
            y_cu1 = 4 + 9 + j * 3;
        }
        bool check = true;
        int x = 26;
        int y = 10;
        int w = 10;
        int h = 2;
        int xp = x;
        int yp = y;
        int x_cu = x;
        int y_cu = y;
        int tt = 0;
        int tt_cu = 0;
        while (1)
        {
            bat = 0;
            if (check == true)
            {
                thanh_sang(xp - 2, yp, 4, h, 4, dap[tt]);
                check = false;
            }
            x_cu = xp - 2;
            y_cu = yp;
            tt_cu = tt;
            int z = getch();
            TRANGTHAI trangthai = key(z);
            switch (trangthai)
            {
            case UP:
            {
                check = true;
                if (tt == 0 && yp == y)
                {
                    yp = y + 2 * (4 - 1);
                    tt = 3;
                }
                else
                {
                    tt -= 1;
                    yp -= 2;
                }
                break;
            }
            case DOWN:
            {
                check = true;
                if (tt == 3 && yp == y + 2 * (4 - 1))
                {
                    yp = y;
                    tt = 0;
                }
                else
                {
                    tt += 1;
                    yp += 2;
                }
                break;
            }
            case LEFT:
            {
                if (i == 0)
                {
                    continue;
                }
                else if (i == 5)
                {
                    j = 0;
                    i--;
                }
                else if (i > 5)
                {
                    j--;
                    i--;
                }
                else
                {
                    i--;
                }

                bat = 1;
                break;
            }
            case RIGHT:
            {
                if (i == count - 1)
                {
                    i = 0;
                }
                else if (i == 4)
                {
                    j = 0;
                    i++;
                }
                else if (i >= 5)
                {
                    j++;
                    i++;
                }
                else
                {
                    i++;
                }
                bat = 1;
                break;
            }
            case ENTER:
            {
                if (i <= 4)
                {
                    thanh_sang(18 + 1 + 100 + 5 + 12, 5 + 9 - 1 - 1 + i * 3, 3, 2, 10, dap[tt]);
                }
                else
                {
                    thanh_sang(18 + 100 + 5 + 12 + 12 + 5 + 7, 5 - 1 + 9 - 1 + j * 3, 3, 2, 10, dap[tt]);
                }
                if (dap[tt] == "A")
                {
                    luu[i] = 1;
                }
                else if (dap[tt] == "B")
                {
                    luu[i] = 2;
                }
                else if (dap[tt] == "C")
                {
                    luu[i] = 3;
                }
                else if (dap[tt] == "D")
                {
                    luu[i] = 4;
                }
                int z = getch();
                TRANGTHAI trangthai = key(z);
                switch (trangthai)
                {
                case LEFT:
                {
                    if (i == 0)
                    {
                        continue;
                    }
                    else if (i == 5)
                    {
                        j = 0;
                        i--;
                    }
                    else if (i > 5)
                    {
                        j--;
                        i--;
                    }
                    else
                    {
                        i--;
                    }

                    bat = 1;
                    break;
                }
                case RIGHT:
                {
                    if (i == count - 1)
                    {
                        i = 0;
                    }
                    else if (i == 4)
                    {
                        j = 0;
                        i++;
                    }
                    else if (i >= 5)
                    {
                        j++;
                        i++;
                    }
                    else
                    {
                        i++;
                    }
                    bat = 1;
                    break;
                }
                case UP:
                {
                    check = true;
                    if (tt == 0 && yp == y)
                    {
                        yp = y + 2 * (4 - 1);
                        tt = 3;
                    }
                    else
                    {
                        tt -= 1;
                        yp -= 2;
                    }
                    break;
                }
                case DOWN:
                {
                    check = true;
                    if (tt == 3 && yp == y + 2 * (4 - 1))
                    {
                        yp = y;
                        tt = 0;
                    }
                    else
                    {
                        tt += 1;
                        yp += 2;
                    }
                    break;
                }
                case ESC:
                {
                    int cnt = 0;
                    for (int i = 0; i < n; i++)
                    {
                        int so = 0;
                        switch (cau[generate[i]].dap_an_dung)
                        {
                        case 'A':
                        {
                            so = 1;
                            break;
                        }
                        case 'B':
                        {
                            so = 2;
                            break;
                        }
                        case 'C':
                        {
                            so = 3;
                            break;
                        }
                        case 'D':
                        {
                            so = 4;
                            break;
                        }
                        }
                        if (luu[i] == so)
                        {
                            ++cnt;
                        }
                    }
                    if (n == 5)
                    {
                        bang_diem.so_cau_hoi = n;
                        bang_diem.so_cau_dung = cnt;
                        bang_diem.diem = cnt * 2;
                        for (int i = 0; i < ds_lop.so_luong_lop;i++){
                            if (lay_ten_lop((ds_lop.danh_dach_lop[i]->ma_lop)) == lay_ten_lop(code_sv))
                            {
                                int j = 1;
                                for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL;p=p->next){
                                    if(p->data.ma_sinh_vien==code_sv){
                                        diem_thi dt;
                                        dt.diem = bang_diem.diem;
                                        dt.ma_mon_hoc = a.ma_mon_hoc;
                                        insert_node_diem_thi(p->data.ds_diem_thi, dt);
                                        delete_middle(ds_lop.danh_dach_lop[i]->ds_sv, j);
                                        insert_order(ds_lop.danh_dach_lop[i]->ds_sv, p->data);
                                        break;
                                    }
                                    ++j;
                                }
                                break;
                                }
                            }
                        }
                    // }
                    else
                    {
                        bang_diem.so_cau_hoi = n;
                        bang_diem.so_cau_dung = cnt;
                        bang_diem.diem = cnt;
                        for (int i = 0; i < ds_lop.so_luong_lop;i++){
                            if (lay_ten_lop((ds_lop.danh_dach_lop[i]->ma_lop)) == lay_ten_lop(code_sv))
                            {
                                int j = 1;
                                for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL;p=p->next){
                                    if(p->data.ma_sinh_vien==code_sv){
                                        diem_thi dt;
                                        dt.diem = bang_diem.diem;
                                        dt.ma_mon_hoc = a.ma_mon_hoc;
                                        insert_node_diem_thi(p->data.ds_diem_thi, dt);
                                        delete_middle(ds_lop.danh_dach_lop[i]->ds_sv, j);
                                        insert_order(ds_lop.danh_dach_lop[i]->ds_sv, p->data);
                                        break;
                                    }
                                    ++j;
                                }
                                break;
                                }
                            }
                    }
                    p = run();
                    if (p == 0)
                    {
                        bat = 1;
                    }
                    else
                    {
                        stop = p;
                        clrscr();
                        int x1 = 70;
                        int y1 = 20 - 5 - 5;
                        int h1 = 20;
                        int w1 = 32;
                        int index = 0;
                        box(x1, y1, w1, h1, "");
                        gotoxy(x1 + 13, y1 + 1);
                        SetColor(4);
                        cout << "KET QUA";
                        SetColor(7);
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 9, y1 + 2);
                        cout << "HO VA TEN:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 12, y1 + 4);
                        cout << "MA SINH VIEN:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 3, y1 + 6);
                        cout << "MON:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 + 2, y1 + 8);
                        cout << bang_diem.so_cau_hoi;
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 10, y1 + 8);
                        cout << "SO CAU HOI:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 + 2, y1 + 10);
                        cout << bang_diem.so_cau_dung;
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 8 - 3, y1 + 10);
                        cout << "SO CAU DUNG:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 + 2, y1 + 12);
                        cout << bang_diem.diem;
                        gotoxy(x_cu, y_cu);
                        gotoxy(70 + 13 - 4, y1 + 12);
                        cout << "DIEM:";
                        gotoxy(x_cu, y_cu);
                        box2(x1 + 13, y1 + 15, 7, 2, "");
                        gotoxy(x1 + 14, y1 + 16);
                        cout << "ENTER";
                        gotoxy(x_cu, y_cu);
                        //thanh_sang(x1 + 13, y1 + 15, 7, 2, 4, "ENTER");
                        box2(x1+1 , y1 + 18, w1-1, 2, "");
                        gotoxy(x1 + 3, y1 + 19);
                        cout << "CHI TIET CAU TRA LOI DA THI";
                        gotoxy(x_cu, y_cu);
                        index=menu10(x1, y1+15, w1, h1, them);
                        int dem = 0;
                        if(index){
                            menu11(sl, a.ten_mon_hoc, code_sv);
                            int j = 0;
                            while (1)
                            {
                                in_cau_hoi1(cau[generate[j]], j + 1, luu, j);
                                int z = getch();
                                TRANGTHAI trangthai = key(z);
                                switch (trangthai)
                                {
                                case LEFT:
                                {
                                    if(j==0){
                                        continue;
                                    }else{
                                        j--;
                                        thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                    }
                                    break;
                                }
                                case RIGHT:
                                {
                                   if(j==n-1){
                                       thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                       j = 0;
                                   }else{
                                       thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                       j++;
                                   }
                                    break;
                                }
                                case ESC:{
                                    dem = 1;
                                    break;
                                }
                                }
                            if(dem==1){
                                break;
                            }
                        }
                    }

                    break;
                }
                break;
                }
            }
            break;
            }
            case ESC:
            {
                int cnt = 0;
                for (int i = 0; i < n; i++)
                {
                    int so = 0;
                    switch (cau[generate[i]].dap_an_dung)
                    {
                    case 'A':
                    {
                        so = 1;
                        break;
                    }
                    case 'B':
                    {
                        so = 2;
                        break;
                    }
                    case 'C':
                    {
                        so = 3;
                        break;
                    }
                    case 'D':
                    {
                        so = 4;
                        break;
                    }
                    }
                    if (luu[i] == so)
                    {
                        ++cnt;
                    }
                }
                if (n == 5)
                {
                    bang_diem.so_cau_hoi = n;
                    bang_diem.so_cau_dung = cnt;
                    bang_diem.diem = cnt * 2;
                    for (int i = 0; i < ds_lop.so_luong_lop; i++)
                    {
                        if (lay_ten_lop((ds_lop.danh_dach_lop[i]->ma_lop)) == lay_ten_lop(code_sv))
                        {
                            int j = 1;
                            for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL; p = p->next)
                            {
                                if (p->data.ma_sinh_vien == code_sv)
                                {
                                    diem_thi dt;
                                    dt.diem = bang_diem.diem;
                                    dt.ma_mon_hoc = a.ma_mon_hoc;
                                    insert_node_diem_thi(p->data.ds_diem_thi, dt);
                                   delete_middle(ds_lop.danh_dach_lop[i]->ds_sv, j);
                                    insert_order(ds_lop.danh_dach_lop[i]->ds_sv, p->data);
                                    break;
                                }
                                ++j;
                            }
                            break;
                        }
                    }
                }
                else
                {
                    bang_diem.so_cau_hoi = n;
                    bang_diem.so_cau_dung = cnt;
                    bang_diem.diem = cnt;
                    for (int i = 0; i < ds_lop.so_luong_lop; i++)
                    {
                        if (lay_ten_lop((ds_lop.danh_dach_lop[i]->ma_lop)) == lay_ten_lop(code_sv))
                        {
                            int j = 1;
                            for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL; p = p->next)
                            {
                                if (p->data.ma_sinh_vien == code_sv)
                                {
                                    diem_thi dt;
                                    dt.diem = bang_diem.diem;
                                    dt.ma_mon_hoc = a.ma_mon_hoc;
                                    insert_node_diem_thi(p->data.ds_diem_thi, dt);
                                    delete_middle(ds_lop.danh_dach_lop[i]->ds_sv, j);
                                    insert_order(ds_lop.danh_dach_lop[i]->ds_sv, p->data);
                                    break;
                                }
                                ++j;
                            }
                            break;
                        }
                    }
                }
                p = run();
                if (p == 0)
                {
                    bat = 1;
                }
                else
                {

                    stop = p;
                    clrscr();
                    int x1 = 70;
                    int y1 = 20 - 5 - 5;
                    int h1 = 20;
                    int w1 = 32;
                    int index = 0;
                    box(x1, y1, w1, h1, "");
                    gotoxy(x1 + 13, y1 + 1);
                    SetColor(4);
                    cout << "KET QUA";
                    SetColor(7);
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 9, y1 + 2);
                    cout << "HO VA TEN:";
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 12, y1 + 4);
                    cout << "MA SINH VIEN:";
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 3, y1 + 6);
                    cout << "MON:";
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 + 2, y1 + 8);
                    cout << bang_diem.so_cau_hoi;
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 10, y1 + 8);
                    cout << "SO CAU HOI:";
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 + 2, y1 + 10);
                    cout << bang_diem.so_cau_dung;
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 8 - 3, y1 + 10);
                    cout << "SO CAU DUNG:";
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 + 2, y1 + 12);
                    cout << bang_diem.diem;
                    gotoxy(x_cu, y_cu);
                    gotoxy(70 + 13 - 4, y1 + 12);
                    cout << "DIEM:";
                    gotoxy(x_cu, y_cu);
                    box2(x1 + 13, y1 + 15, 7, 2, "");
                    gotoxy(x1 + 14, y1 + 16);
                    cout << "ENTER";
                    gotoxy(x_cu, y_cu);
                    //thanh_sang(x1 + 13, y1 + 15, 7, 2, 4, "ENTER");
                    box2(x1 + 1, y1 + 18, w1 - 2, 2, "");
                    gotoxy(x1 + 3, y1 + 19);
                    cout << "CHI TIET CAU TRA LOI DA THI";
                    gotoxy(x_cu, y_cu);
                    index = menu10(x1, y1 + 15, w1, h1, them);
                    int dem = 0;
                    if (index)
                    {
                        menu11(sl, a.ten_mon_hoc, code_sv);
                        int j = 0;
                        while (1)
                        {
                            in_cau_hoi1(cau[generate[j]], j + 1,luu,j);
                            
                            int z = getch();
                            TRANGTHAI trangthai = key(z);
                            switch (trangthai)
                            {
                            case LEFT:
                            {
                                if (j == 0)
                                {
                                    continue;
                                }
                                else
                                {
                                    thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                    j--;
                                }
                                break;
                            }
                            case RIGHT:
                            {
                                if (j == n - 1)
                                {
                                    thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                    j = 0;
                                }
                                else
                                {
                                    thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                                    j++;
                                }
                                break;
                            }
                            case ESC:
                            {
                                dem = 1;
                                break;
                            }
                            }
                            if (dem == 1)
                            {
                                break;
                            }
                        }
                    }
            }
            break;
            }
            }
            if (bat == 1)
            {
                if (i <= 4)
                {
                    SetColor(0);
                    gotoxy(x_cu1, y_cu1);
                    cout << "->";
                    gotoxy(x_cu, y_cu);
                    SetColor(7);
                }
                else
                {
                    SetColor(0);
                    gotoxy(x_cu1, y_cu1);
                    cout << "->";
                    gotoxy(x_cu, y_cu);
                    SetColor(7);
                }
                thanh_sang(x_cu, y_cu, 4, h, 0, dap[tt_cu]);
                thanh_sang(x + 1, y + 2-4, 90, y + 10, 0, "");
                break;
            }
            if (p == 1)
            {
                break;
            }
            thanh_sang(x_cu, y_cu, 4, h, 0, dap[tt_cu]);
            // end thiết kế lên xuống
        }
        if (p == 1)
        {
            break;
        }
    }
    pthread_join(timer, NULL);
}
void menu3(ptr_mon_hoc &ds_mh,ds_lop& ds_lop, bang_diem &bang_diem,string code_sv)
{
    ShowConsoleCursor(0);
    // toa do x
    int x = 10;
    // toa do y
    int y = 10;
    // chieu dai
    int w = 50;
    // chieu cao
    int h = 15;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    int n = 0;
    int p = 0;
    int b = 0;
    int j = 0;
    int o = count(ds_mh);
    mon_hoc all[o];
    ptr_mon_hoc stack[o];
    ptr_mon_hoc va = ds_mh;
    int sp = -1;
    do
    {
        while (va != NULL)
        {
            stack[++sp] = va;
            va = va->left;
        }
        if (sp != -1)
        {
            va = stack[sp--];
            all[j] = va->a;
            ++j;
            va = va->right;
        }
        else
        {
            break;
        }
    } while (1);
    if (1)
    {
        p = 0;
        box2(x, y, w, h, "");
        box2(x + 15, y + 3, 30, 2, "");
        box2(x + 15, y + 6, 30, 2, "");
        box2(x + 15, y + 9, 30, 2, "");
        gotoxy(x + 15, y + 1);
        cout << "THI TRAC NGHIEM";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 7, y + 4);
        cout << "MON THI:";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 4, y + 7);
        cout << "SO CAU HOI:";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 3, y + 10);
        cout << "SO PHUT THI:";
        gotoxy(x_cu, y_cu);
        box2(x + 20, y + 13, 7, 2, "");
        gotoxy(x + 21, y + 14);
        cout << "ENTER";
        gotoxy(x_cu, y_cu);
        thanh_sang(x + 20, y + 13, 7, 2, 4, "ENTER");
        // xử lì trường hợp đầu tiên
        int b = menu5(ds_mh, count(ds_mh), 66, y, 30, 10, x + 15, y + 3, 30, 2);
        box1(x + 15, y + 3, 30, 2,all[b].ten_mon_hoc );
        thanh_sang(x + 15, y + 3, 30, 2, 4, all[b].ten_mon_hoc);
        box2(x, y, w, h, "");
        box2(x + 15, y + 6, 30, 2, "");
        box2(x + 15, y + 9, 30, 2, "");
        gotoxy(x + 7, y + 4);
        cout << "MON THI:"<<" ";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 15, y + 1);
        cout << "THI TRAC NGHIEM";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 4, y + 7);
        cout << "SO CAU HOI:";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 3, y + 10);
        cout << "SO PHUT THI:";
        gotoxy(x_cu, y_cu);
        box2(x + 20, y + 13, 7, 2, "");
        gotoxy(x + 21, y + 14);
        cout << "ENTER";
        gotoxy(x_cu, y_cu);
        thanh_sang(x + 20, y + 13, 7, 2, 4, "ENTER");
        // xử lí trường hợp thứ 2
        int c = menu6(sl, 2, 66, y, 10, 4, x + 15, y + 6, 30, 2);
        box1(x + 15, y + 6, 30, 2, sl[c]);
        thanh_sang(x + 15, y + 6, 30, 2, 4, sl[c]);
        box2(x, y, w, h, "");
        box1(x + 15, y + 3, 30, 2, all[b].ten_mon_hoc);
        thanh_sang(x + 15, y + 3, 30, 2, 4, all[b].ten_mon_hoc);
        box2(x + 15, y + 9, 30, 2, "");
        gotoxy(x + 7, y + 4);
        cout << "MON THI:";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 15, y + 1);
        cout << "THI TRAC NGHIEM";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 4, y + 7);
        cout << "SO CAU HOI:";
        gotoxy(x_cu, y_cu);
        gotoxy(x + 3, y + 10);
        cout << "SO PHUT THI:";
        gotoxy(x_cu, y_cu);
        box2(x + 20, y + 13, 7, 2, "");
        gotoxy(x + 21, y + 14);
        cout << "ENTER";
        gotoxy(x_cu, y_cu);
        thanh_sang(x + 20, y + 13, 7, 2, 4, "ENTER");
        // xử lí trường hợp thứ 3
        switch (c)
        {
        case 0:
        {
            box1(x + 15, y + 9, 30, 2, "5 PHUT");
            thanh_sang(x + 15, y + 9, 30, 2, 4, "5 PHUT");
            n = 5;
            break;
        }
        case 1:
        {
            box1(x + 15, y + 9, 30, 2, "10 PHUT");
            thanh_sang(x + 15, y + 9, 30, 2, 4, "10 PHUT");
            n = 10;
            break;
        }
        }
        char e = getch();

        if (e == 13)
        {
            clrscr();
            gotoxy(50, 20);
            cout << "BAT DAU";
            stop = 0;
            Sleep(4000);
            gotoxy(50, 20);
            clreol();
            gotoxy(x_cu, y_cu);
            int data = n;
            //trong menu 8 mình phải truyền vào 1 kiểu dữ liệu do người dùng chọn ở trên cụ thể hơn là môn học
            menu8(ds_lop,code_sv,sl[c],all[b], n, data, bang_diem);
        }
    }
}
void menu11(ptr_mon_hoc ds_mh,ds_lop ds_lop){
    ShowConsoleCursor(0);
    // toa do x
    int x = 50;
    // toa do y
    int y = 5;
    // chieu dai
    int w = 31;
    // chieu cao
    int h = 2;
    int b_color = 4;
    int tt = 0;
    int xp = x;
    int yp = y;
    int x_cu = xp;
    int y_cu = yp;
    int tt_cu = 0;
    bool kt = true;
    // bảng nhỏ thực hiện thao tác kiêm tra
    // tọa độ x1
    int x1 = x;
    // tạo độ y2
    int y1 = 1;
    // tọa độ w1
    int w1 = 31;
    // tọa độ h1
    int h1 = 2;
    int x_c = wherex();
    int y_c = wherey();
    while (1)
    {
        char t = ' ';
        //    clrscr();
        gotoxy(x1 - 7, y1 + 1);
        SetColor(4);
        cout << "MA LOP:";
        box1(x1, y1, w1, h1, ds_lop.danh_dach_lop[tt]->ma_lop);
        thanh_sang(x1, y1, w1, h1, 4, ds_lop.danh_dach_lop[tt]->ma_lop);
        SetColor(7);
        gotoxy(x_c, y_c);
        for (int i = 0; i < ds_lop.so_luong_lop; i++)
        {
            box1(x, y + (i * h), w, h, ds_lop.danh_dach_lop[i]->ma_lop);
        }
        for (int i = 1; i <= ds_lop.so_luong_lop - 1; i++)
        {
            gotoxy(x, y + (h * i));
            cout << char(195);
            gotoxy(x + w, y + (h * i));
            cout << char(180);
        }
        if (kt == true)
        {
            // box1(x1, y1, w1, h1, ds_lop.danh_dach_lop[tt]->ma_lop);
            // thanh_sang(x1, y1, w1, h1, 4, ds_lop.danh_dach_lop[tt]->ma_lop);
            thanh_sang(xp, yp, w, h, b_color, ds_lop.danh_dach_lop[tt]->ma_lop);
            kt = false;
        }
        x_cu = xp;
        y_cu = yp;
        tt_cu = tt;
        int z = getch();
        TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
        {
            kt = true;
            if (tt == 0 && yp == y)
            {
                yp = y + 2 * (ds_lop.so_luong_lop - 1);
                tt = ds_lop.so_luong_lop - 1;
            }
            else
            {
                yp -= 2;
                tt--;
            }
            break;
        }
        case DOWN:
        {
            kt = true;
            if (tt == ds_lop.so_luong_lop - 1 && yp == y + 2 * (ds_lop.so_luong_lop - 1))
            {
                yp = y;
                tt = 0;
            }
            else
            {
                yp += 2;
                tt++;
            }
            break;
        }
        case ENTER:
        {
            clrscr();
            ShowConsoleCursor(0);
            // toa do x
            int x = 50;
            // toa do y
            int y = 5;
            // chieu dai
            int w = 31;
            // chieu cao
            int h = 2;
            int b_color = 4;
            int tt2 = 0;
            int xp = x;
            int yp = y;
            int x_cu = xp;
            int y_cu = yp;
            int tt_cu2 = 0;
            bool check = true;
            // bảng nhỏ thực hiện thao tác kiêm tra
            // tọa độ x1
            int x1 = x;
            // tạo độ y2
            int y1 = 1;
            // tọa độ w1
            int w1 = 31;
            // tọa độ h1
            int h1 = 2;
            int x_c = wherex();
            int y_c = wherey();
            int so_luong = count(ds_mh);
            ptr_mon_hoc stack[so_luong];
            ptr_mon_hoc p = ds_mh;
            string ten[so_luong];
            string ma[so_luong];
            int k[so_luong];
            int sp = -1;
            int i = 0;
            do
            {
                while (p != NULL)
                {
                    stack[sp++] = p;
                    p = p->left;
                }
                if (sp != -1)
                {
                    p = stack[--sp];
                    ten[i] = p->a.ten_mon_hoc;
                    ma[i] = p->a.ma_mon_hoc;
                    k[i] = p->key;
                    ++i;
                    p = p->right;
                }
                else
                {
                    break;
                }
            } while (1);
            while (1)
            {
                char e = ' ';
                //    clrscr();
                gotoxy(x1 - 7, y1 + 1);
                SetColor(4);
                cout << "TEN MON HOC:";
                box1(x1, y1, w1, h1, ten[tt2]);
                thanh_sang(x1, y1, w1, h1, 4, ten[tt2]);
                SetColor(7);
                gotoxy(x_c, y_c);
                for (int i = 0; i < so_luong; i++)
                {
                    box1(x, y + (i * h), w, h, ten[i]);
                }
                for (int i = 1; i <= so_luong - 1; i++)
                {
                    gotoxy(x, y + (h * i));
                    cout << char(195);
                    gotoxy(x + w, y + (h * i));
                    cout << char(180);
                }

                if (check == true)
                {
                    // box1(x1, y1, w1, h1, ten[tt2]);
                    // thanh_sang(x1, y1, w1, h1, 4, ten[tt2]);
                    thanh_sang(xp, yp, w, h, b_color, ten[tt2]);
                    kt = false;
                }
                x_cu = xp;
                y_cu = yp;
                tt_cu2 = tt2;
                int z = getch();
                TRANGTHAI trangthai = key(z);
                switch (trangthai)
                {
                case UP:
                {
                    check = true;
                    if (tt2 == 0 && yp == y)
                    {
                        yp = y + 2 * (so_luong - 1);
                        tt2 = so_luong - 1;
                    }
                    else
                    {
                        yp -= 2;
                        tt2--;
                    }
                    break;
                }
                case DOWN:
                {
                    check = true;
                    if (tt2 == so_luong - 1 && yp == y + 2 * (so_luong - 1))
                    {
                        yp = y;
                        tt2 = 0;
                    }
                    else
                    {
                        yp += 2;
                        tt2++;
                    }
                    break;
                }
                case ENTER:
                {
                    clrscr();
                    // những tọa độ trong bang nhập sinh viên
                    // tọa độ x
                    ShowConsoleCursor(2);
                    // toa do x
                    int x = 3;
                    // toa do y
                    int y = 3;
                    // chieu dai
                    int w = 65;
                    // chieu cao
                    int h = 30;
                    int b_color = 4;
                    int x_cu = wherex();
                    int y_cu = wherey();
                    // những tọa dộ của bang thứ hai
                    //  toa do x
                    int x1 = x + 58;
                    // toa do y
                    int y1 = y;
                    // chieu dai
                    int w1 = 36;
                    // chieu cao
                    int h1 = 21;
                    box2(x, y, w, 2, "");
                    box11(x, y + 2, w, h, "");
                    gotoxy(x + 1, y + 1);
                    SetColor(4);
                    cout << "BANG DIEM MON " << ten[tt2] << "-"
                         << "LOP " << ds_lop.danh_dach_lop[tt]->ma_lop;
                    SetColor(0);
                    gotoxy(x_cu, y_cu);
                    gotoxy(x + 1, y + 3);
                    SetColor(4);
                    cout << "MA SINH VIEN";
                    SetColor(0);
                    gotoxy(x_cu, y_cu);
                    gotoxy(x + 16 + 7, y + 3);
                    SetColor(4);
                    cout << "HO";
                    SetColor(0);
                    gotoxy(x_cu, y_cu);
                    gotoxy(x + 16 + 15 + 3, y + 3);
                    SetColor(4);
                    cout << "TEN";
                    gotoxy(x_cu, y_cu);
                    gotoxy(x + 16 + 15 + 8 + 1, y + 3);
                    cout << "PHAI";
                    gotoxy(x_cu, y_cu);
                    gotoxy(x + 16 + 15 + 8 + 4 + 2, y + 3);
                    cout << "PASSWORD";
                    gotoxy(x_cu, y_cu);
                    gotoxy(x+ 16 + 15 + 8 + 5 + 10 + 3, y + 3);
                    cout << "DIEM";
                    gotoxy(x_cu, y_cu);
                    SetColor(7);
                    duyet_danh_sach_sinh_vien1(ds_lop.danh_dach_lop[tt]->ds_sv, ma[tt2]);
                    check = true;
                    getch();
                    clrscr();
                    break;
                }
                case ESC:
                {
                    e = 'e';
                    kt = true;
                    break;
                }
                }
                if (e == 'e')
                {
                    clrscr();
                    kt = true;
                    break;
                }
                thanh_sang(x_cu, y_cu, w, h, 0, ten[tt_cu2]);
            }
            break;
        }
        case ESC:
        {
            t = 'e';
            break;
        }
        }
        if (t == 'e')
        {
            break;
        }
        thanh_sang(x_cu, y_cu, w, h, 0, ds_lop.danh_dach_lop[tt_cu]->ma_lop);
    }
}
//------menu
void menu(ds_lop &ds_lop, ptr_mon_hoc &ds_mh,str thaotac[8], int n,m mon[10],t ten[10],string code_sv)
{
    ShowConsoleCursor(0);
    // toa do x
    int x = 57;
    // toa do y
    int y = 15;
    // chieu dai
    int w = 57;
    // chieu cao
    int h = 2;
    int b_color = 4;
    int tt = 0;
    int xp = x;
    int yp = y;
    int x_cu = xp;
    int y_cu = yp;
    int tt_cu = 0;
    bool kt = true;
    
    while (1)
    {
        int dem = 0;
        ShowConsoleCursor(0);
        for (int i = 0; i < n; i++)
        {
            box(x, y + (i * h), w, h, thaotac[i]);
            if (i >= 1 && i < n)
            {
                gotoxy(x, y + (h * i));
                cout << char(195);
                gotoxy(x + w, y + (h * i));
                cout << char(180);
            }
        }

        if (kt == true)
        {
            thanh_sang(xp, yp, w, h, b_color, thaotac[tt]);
            kt = false;
        }
        x_cu = xp;
        y_cu = yp;
        tt_cu = tt;
        int z = getch();
        TRANGTHAI trangthai = key(z);
        switch (trangthai)
        {
        case UP:
        {
            kt = true;
            if (tt == 0 && yp == y)
            {
                yp = y + 2 * (n - 1);
                tt = n - 1;
            }
            else
            {
                yp -= 2;
                tt--;
            }
            break;
        }
        case DOWN:
        {
            kt = true;
            if (tt == n - 1 && yp == y + 2 * (n - 1))
            {
                yp = y;
                tt = 0;
            }
            else
            {
                yp += 2;
                tt++;
            }
            break;
        }
        case ENTER:
            clrscr();
            int x=tt;
            if (x == 0)
            {
                while(1){
                    ShowConsoleCursor(2);
                    char r = ' ';
                    SetColor(4);
                    box(50, 15, 50, 2, "MOI BAN NHAP SO LUONG LOP MUON NHAP VAO: ");
                    SetColor(7);
                    int sl=chuan_hoa_ma_2("",92,16);
                    if(sl==-1){
                        break;
                    }
                    for (int i = 0; i < sl; i++)
                    {
                        system("cls");
                        in_danh_sach_lop(ds_lop);
                        lop *a = new lop();
                        int sl1=nhap_lop(*a);
                        if(sl1==-1){
                            break;
                        }
                        ds_lop.danh_dach_lop[ds_lop.so_luong_lop] = a;
                        ++ds_lop.so_luong_lop;
                        in_danh_sach_lop(ds_lop);
                        // cho nay se in danh sach sinh vien 
                }
                system("cls");
                // toa do x
                int x = 60;
                // toa do y
                int y = 6;
                // chieu dai
                int w = 50;
                // chieu cao
                int h = 15;
                int x4 = x + 10;
                int y4 = 24;
                int w4 = 29;
                int h4 = 5;
                int x5 = x + 15;
                int y5 = 28;
                int w5 = 5;
                int h5 = 2;
                // box(x + 15, 28, 5, 2, "yes");
                int x6 = x + 25;
                int y6 = 15;
                int w6 = 5;
                int h6 = 2;
                // box(x + 25, 28, 5, 2, "no");
                int xp = x5;
                int yp = 17;
                int x_cu1 = xp;
                int y_cu1 = yp;
                int kt = true;
                string c[] = {"YES", "NO"};
                int tt = 0;
                int tt_cu = 0;
                while (1)
                {
                     box(x, 15, 50, 5, "");
                     gotoxy(x + 11, 16);
                     SetColor(4);
                     cout << "ban co muon nhap lai khong ?";
                     SetColor(7);
                     gotoxy(x_cu, y_cu);
                     box(x + 15, 17, 5, 2, c[0]);
                     box(x + 25, 17, 5, 2, c[1]);
                     if (kt == true)
                     {
                         thanh_sang(xp, yp, 5, 2, 4, c[tt]);
                         kt = false;
                     }
                     x_cu1 = xp;
                     y_cu1 = yp;
                     tt_cu = tt;
                     int z = getch();
                     TRANGTHAI trangthai = key(z);
                     switch (trangthai)
                     {
                     case LEFT:
                     {
                         kt = true;
                         if (tt == 0 && xp == x5)
                         {
                             xp = x6;
                             tt = 1;
                         }
                         else
                         {
                             xp = x5;
                             tt = 0;
                         }
                         break;
                     }
                     case RIGHT:
                     {
                         kt = true;
                         if (tt == 1 && xp == x6)
                         {
                             xp = x5;
                             tt = 0;
                         }
                         else
                         {
                             xp = x6;
                             tt = 1;
                         }
                         break;
                     }
                     case ENTER:
                     {
                         clrscr();
                         // return tt;
                         if(tt==0){
                             r = 'y';
                         }else{
                             r = 'n';
                         }
                         break;
                     }
                     }
                     if (r=='y'||r=='n')
                     {
                         break;
                     }
                     thanh_sang(x_cu1, y_cu1, 5, 2, 0, c[tt_cu]);
                }
                if(r=='n'){
                     break;
                }
                }

            }
            else if (x == 1)
            {
                menu4( 5, ds_lop);
            }
            else if (x == 3)
            {
                ShowConsoleCursor(0);
                // toa do x
                int x = 50;
                // toa do y
                int y = 5;
                // chieu dai
                int w = 31;
                // chieu cao
                int h = 2;
                int b_color = 4;
                int tt = 0;
                int xp = x;
                int yp = y;
                int x_cu = xp;
                int y_cu = yp;
                int tt_cu = 0;
                bool kt = true;
                // bảng nhỏ thực hiện thao tác kiêm tra
                // tọa độ x1
                int x1 = x;
                // tạo độ y2
                int y1 = 1;
                // tọa độ w1
                int w1 = 31;
                // tọa độ h1
                int h1 = 2;
                int x_c = wherex();
                int y_c = wherey();
                int so_luong = count(ds_mh);
                ptr_mon_hoc stack[so_luong];
                ptr_mon_hoc p=ds_mh;
                string ten[so_luong];
                int k[so_luong];
                int sp = -1;
                int i = 0;
                do
                {
                    while (p != NULL)
                    {
                        stack[sp++] = p;
                        p = p->left;
                    }
                    if (sp != -1)
                    {
                        p = stack[--sp];
                        ten[i] = p->a.ten_mon_hoc;
                        k[i] = p->key;
                        ++i;
                        p = p->right;
                    }
                    else
                    {
                        break;
                    }
                } while (1);
                while (1)
                {
                    char t = ' ';
                    //    clrscr();
                    gotoxy(x1 - 7, y1 + 1);
                    SetColor(4);
                    cout << "TEN MON HOC:";
                    SetColor(7);
                    gotoxy(x_c, y_c);
                    for (int i = 0; i < so_luong ;i++){
                        box1(x, y + (i * h), w, h,ten[i]);
                    }
                    for (int i = 1; i <= so_luong - 1; i++)
                    {
                        gotoxy(x, y + (h * i));
                        cout << char(195);
                        gotoxy(x + w, y + (h * i));
                        cout << char(180);
                    }

                    if (kt == true)
                    {
                        box1(x1, y1, w1, h1, ten[tt]);
                        thanh_sang(x1, y1, w1, h1, 4, ten[tt]);
                        thanh_sang(xp, yp, w, h, b_color, ten[tt]);
                        kt = false;
                    }
                    x_cu = xp;
                    y_cu = yp;
                    tt_cu = tt;
                    int z = getch();
                    TRANGTHAI trangthai = key(z);
                    switch (trangthai)
                    {
                    case UP:
                    {
                        kt = true;
                        if (tt == 0 && yp == y)
                        {
                            yp = y + 2 * (so_luong - 1);
                            tt = so_luong - 1;
                        }
                        else
                        {
                            yp -= 2;
                            tt--;
                        }
                        break;
                    }
                    case DOWN:
                    {
                        kt = true;
                        if (tt == so_luong - 1 && yp == y + 2 * (so_luong - 1))
                        {
                            yp = y;
                            tt = 0;
                        }
                        else
                        {
                            yp += 2;
                            tt++;
                        }
                        break;
                    }
                    case ENTER:
                    {
                        system("cls");
                        int a = 0;
                        //  the problem is here.
                        ptr_mon_hoc ne = ham_tim_kiem_ten_mon_hoc(ds_mh, k[tt]);
                        //delete_mon_hoc(ds_mh, k[tt]);
                        
                        ShowConsoleCursor(0);
                        // toa do x
                        int x = 10;
                        // toa do y
                        int y = 2;
                        // chieu dai
                        int w = 120;
                        // chieu cao
                        int h = 40;
                        int b_color = 4;
                        int x_cu = wherex();
                        int y_cu = wherey();
                        box2(x, y, w, h, "");
                        box2(x + 15, y + 4, 9, 2, "");
                        box2(x + 15, y + 7, 90, 4, "");
                        box2(x + 15, y + 12, 90, 4, "");
                        box2(x + 15, y + 17, 90, 4, "");
                        box2(x + 15, y + 22, 90, 4, "");
                        box2(x + 15, y + 27, 90, 4, "");
                        // box2(x + 15, y + 32, 90, 4, "");
                        gotoxy(x + 12, y + 5);
                        cout << "ID:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 6, y + 8);
                        cout << "NOI DUNG:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 6, y + 13);
                        cout << "DAP AN 1:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 6, y + 18);
                        cout << "DAP AN 2:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 6, y + 23);
                        cout << "DAP AN 3:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 6, y + 28);
                        cout << "DAP AN 4:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 3, y + 33);
                        cout << "DAP AN DUNG:";
                        gotoxy(x_cu, y_cu);
                        gotoxy(x + 50, y + 1);
                        cout << "NHAP CAU HOI THI";
                        gotoxy(x_cu, y_cu);
                        box2(x + 55, y + 37, 7, 2, "");
                        gotoxy(x + 56, y + 38);
                        cout << "ENTER";
                        gotoxy(x_cu, y_cu);
                        thanh_sang(x + 55, y + 37, 7, 2, 4, "ENTER");
                        box6(x + 16, y + 33, 12, 2, "");

                        while(1){
                            gotoxy(x + 17, y + 34);
                            cout << 'A';
                            gotoxy(x_cu, y_cu);
                            gotoxy(x + 21-1, y + 34);
                            cout << 'B';
                            gotoxy(x_cu, y_cu);
                            gotoxy(x + 25-2, y + 34);
                            cout << 'C';
                            gotoxy(x_cu, y_cu);
                            gotoxy(x + 29-3, y + 34);
                            cout << 'D';
                            gotoxy(x_cu, y_cu);
                            cau_hoi_thi infor;
                            int id_so=0;
                            int checked = 0;
                            do
                            {
                                string id = tao_id();
                                id_so = stoi(id);
                                checked = search_id_cau_hoi_thi(ne->a.ds_cau_hoi_thi, id_so);
                            } while (checked == -1);
                            nhap_cau_hoi_thi(infor, id_so);
                            insert_node_cau_hoi_thi(ne->a.ds_cau_hoi_thi, infor);
                            insert_node(ds_mh, k[tt], ne->a);
                            int z = getch();
                            TRANGTHAI trangthai = key(z);
                            switch (trangthai)
                            {
                            case ESC:{
                                checked = 2;
                                break;
                            }
                            case ENTER: {
                                thanh_sang(x + 15, y + 4, 8, 2, 0, "");
                                thanh_sang(x + 15, y + 7, 89, 4, 0, "");
                                thanh_sang(x + 15, y + 12, 89, 4, 0, "");
                                thanh_sang(x + 15, y + 17, 89, 4, 0, "");
                                thanh_sang(x + 15, y + 22, 89, 4, 0, "");
                                thanh_sang(x + 15, y + 27, 89, 4, 0, "");
                                for (int i = 0; i < 4;i++){
                                     thanh_sang(10+16+ i * 3, 2+33, 3, 2, 0, "");
                                }
                                break;
                            }
                            default:
                                break;
                            }
                            if(checked==2){
                                break;
                            }
                        }
                        clrscr();
                        kt = true;
                        break;
                    }
                    case ESC:
                    {
                        t = 'e';
                        break;
                    }
                    }
                    if (t == 'e')
                    {
                        break;
                    }
                    thanh_sang(x_cu, y_cu, w, h, 0, ten[tt_cu]);
                }
            }
            else if (x == 4)
            {
                //in_danh_sach_sinh_vien_trong_lop(ds_lop);
                bang_diem a;
                menu3(ds_mh,ds_lop, a,code_sv);
            }
            else if (x == 5)
            {
                cout << "moi ban nhap so luong mon hoc: ";
                int sl;
                cin >> sl;
                cin.ignore();
                for (int i = 0; i < sl; i++)
                {
                    int key = tao_key(ds_mh);
                    create_tree(ds_mh, key);
                }
            }
            else if (x == 2)
            {
                menu1(chucnang,ds_mh,mon,ten);
                //xuat_danh_sach_mon_hoc(ds_mh);
            }
            else if (x == 6)
            {
                menu11(ds_mh, ds_lop);
            }
            else if(x==7){
                dem = 1;
                break;
            }
            clrscr();
            kt = true;
        }
        if(dem==1){
            break;
        }
        thanh_sang(x_cu, y_cu, w, h, 0, thaotac[tt_cu]);
    }
    // load_file_ds_lop_ghi(ds_lop);
    // load_file_ds_sinh_vien_ghi(ds_lop);
    // load_file_ds_mon_hoc_ghi(ds_mh);
    // load_file_bang_diem_ghi(ds_lop);
    for (int j = 0; j < ds_lop.so_luong_lop;j++){
        delete (ds_lop.danh_dach_lop[j]);
    }
}
//-----log_in
void log_in(string code_sv,string password){
    ds_lop ds_lop;
    ptr_mon_hoc ds_mh = NULL;
    load_file_ds_lop(ds_lop);
    load_file_ds_sinh_vien(ds_lop);
    load_file_ds_mon_hoc(ds_mh);
    static int c = 0;
    char a;
    bool ok = false;
    ShowConsoleCursor(0);
    // toa do x
    int x = 57;
    // toa do y
    int y = 15;
    // chieu dai
    int w = 50;
    // chieu cao
    int h = 15;
    int b_color = 4;
     string nd = "";
    // toa do x
    int x1 = 77;
    // toa do y
    int y1 = 17;
    // chieu dai

    int w1 = 10;
    // chieu cao
    int h1 = 2;
    int x_cu = wherex();
    int y_cu = wherey();
    // toa do x
    int x2 = 75;
    // toa do y
    int y2 = 20;
    // chieu dai

    int w2 = 20;
    // chieu cao
    int h2 = 2;
    // toa do x
    int x3 = 75;
    // toa do y
    int y3 = 23;
    // chieu dai

    int w3 = 20;
    // chieu cao
    int h3 = 2;
    do{
        system("cls");
        a = 'g';
        box(x, y, w, h, nd);
        box(x1, y1, w1, h1, "DANG NHAP");
        gotoxy(67, 21);
        SetColor(4);
        cout << "USER:";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        box(x2, y2, w2, h2, "");
        gotoxy(67, 24);
        SetColor(4);
        cout << "PASS:";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        box(x3, y3, w3, h3, "");
        code_sv = box1(x2, y2, w2, h2);
        password= box2(x3, y3, w3, h3);
        for (int i = 0; i < ds_lop.so_luong_lop;i++){
            if(lay_ten_lop(code_sv)==lay_ten_lop(ds_lop.danh_dach_lop[i]->ma_lop)){
            for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL; p = p->next)
            {
                if(password==p->data.password){
                        ok = true;
                        BaoLoi("         dang nhap thanh cong");
                        clrscr();
                        menu(ds_lop, ds_mh, thaotac, 8, mon, ten, code_sv);
                        break;
                    }
            }
            break;
            }
        }
        if(!ok){
            BaoLoi("ma sinh vien hoac mat khau bi sai");
            int x4 = x + 10;
            int y4 = 24;
            int w4 = 29;
            int h4 = 5;
            int x5 = x + 15;
            int y5 = 28;
            int w5 = 5;
            int h5 = 2;
            // box(x + 15, 28, 5, 2, "yes");
            int x6 = x + 25;
            int y6 = 28;
            int w6 = 5;
            int h6 = 2;
            // box(x + 25, 28, 5, 2, "no");
            int xp = x5;
            int yp = y5;
            int x_cu1 = xp;
            int y_cu1 = yp;
            int kt = true;
            string c[] = {"YES", "NO"};
            int tt = 0;
            int tt_cu = 0;
            while (1)
            {
                box(x, 26, 50, 5, "");
                gotoxy(x + 11, 27);
                SetColor(4);
                cout << "ban co muon nhap lai khong ?";
                SetColor(7);
                gotoxy(x_cu, y_cu);
                box(x + 15, 28, 5, 2, c[0]);
                box(x + 25, 28, 5, 2, c[1]);
                if (kt == true)
                {
                    thanh_sang(xp, yp, 5,2,4, c[tt]);
                    kt = false;
                }
                x_cu1 = xp;
                y_cu1 = yp;
                tt_cu = tt;
                int z = getch();
                TRANGTHAI trangthai = key(z);
                switch (trangthai)
                {
                case LEFT:
                {
                    kt = true;
                    if (tt == 0 && xp==x5)
                    {
                        xp = x6;
                        tt = 1;
                    }
                    else
                    {
                        xp = x5;
                        tt = 0;
                    }
                    break;
                }
                case RIGHT:
                {
                    kt = true;
                    if (tt == 1 && xp == x6)
                    {
                        xp = x5;
                        tt = 0;
                    }
                    else
                    {
                        xp =x6;
                        tt=1;
                    }
                    break;
                }
                case ENTER:
                {
                    clrscr();
                    a = 'r';
                    clrscr();
                    // return tt;
                    break;
                }
                }
                if (a == 'r')
                {
                    break;
                }
                thanh_sang(x_cu1, y_cu1, 5, 2, 0, c[tt_cu]);
                // for (int i = 0; i < n;i++){
                //     mau[i] = MAUCHU;
                // }
                // mau[tt] = MAUNEN;
            }
       }
        } while (a == 'r');
}
//-----enter_grade
int nhap_lop(lop& a){
        ShowConsoleCursor(2);
        // những tọa độ của khung chính
        // tọa độ x
        int x = 5;
        // tọa độ y
        int y = 5;
        // tọa độ w
        int w = 50;
        // tọa độ h
        int h = 30;
        // những tọa độ của bảng phụ
        // tọa độ x2;
        int x2 = 60;
        // tọa độ y2;
        int y2 = 5;
        // tọa độ w2;
        int w2 = 50;
        // tọa độ h2
        int h2 = 12;
        int x_cu = wherex();
        int y_cu = wherey();
        box3(x, y, w, h, "");
        gotoxy(x + 1, y + 1);
        SetColor(4);
        cout << "STT";
        SetColor(0);
        gotoxy(x + 10, y + 1);
        SetColor(4);
        cout << "MA LOP";
        SetColor(0);
        gotoxy(x_cu, y_cu);
        gotoxy(x + 30, y + 1);
        SetColor(4);
        cout << "TEN LOP";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        box2(x2, y2, w2, h2, "");
        box2(x2 + 10, y + 2, w2 - 15, 2, "");
        box2(x2 + 10, y2 + 5, w2 - 15, 2, "");
        box2(x2 + 22, y + 8, 7, 2, "");
        gotoxy(x2 + 22, y + 1);
        SetColor(4);
        cout << "NHAP LOP";
        SetColor(0);
        gotoxy(x_cu, y_cu);
        gotoxy(x2 + 2, y + 3);
        SetColor(4);
        cout << "MA LOP:";
        SetColor(0);
        gotoxy(x_cu, y_cu);
        gotoxy(x2 + 2, y + 6);
        SetColor(4);
        cout << "TEN LOP:";
        SetColor(7);
        gotoxy(x_cu, y_cu);
        gotoxy(x2 + 23, y + 9);
        cout << "ENTER";
        gotoxy(x_cu, y_cu);
        thanh_sang(x2 + 22, y + 8, 7, 2, 4, "ENTER");
        gotoxy(x2 + 2 + 9, y + 3);
        int t = 0;
        a.ma_lop = chuan_hoa_ma_1(t, x2 + 2 + 9, y + 3);
        if(t==1){
            return -1;
        }
        gotoxy(x_cu, y_cu);
        gotoxy(x2 + 1 + 10, y + 6);
        // cin.ignore();
        a.ten_lop = chuan_hoa_ma_3(t, x2 + 1 + 10, y + 6);
        if(t==1){
            return -1;
        }
        gotoxy(x_cu, y_cu);
        return 0;
}
void in_1_lop(lop a,int i){
       // những tọa độ của khung chính
       // tọa độ x
       int x = 5;
       // tọa độ y
       int y = 5;
       // tọa độ w
       int w = 50;
       // tọa độ h
       int h = 30;
       // những tọa độ của bảng phụ
       // tọa độ x2;
       int x2 = 60;
       // tọa độ y2;
       int y2 = 5;
       // tọa độ w2;
       int w2 = 50;
       // tọa độ h2
       int h2 = 12;
       int x_cu = wherex();
       int y_cu = wherey();
       gotoxy(x + 1, y + i + 3-1);
       SetColor(4);
       cout << i;
       SetColor(7);
       gotoxy(x_cu, y_cu);
       gotoxy(x + 7, y + i + 3-1);
       cout << a.ma_lop;
       gotoxy(x_cu, y_cu);
       gotoxy(x + 21, y + i + 3-1);
       cout<< a.ten_lop;
       gotoxy(x_cu, y_cu);
}
void in_danh_sach_lop(ds_lop a){
    for (int i = 0; i < a.so_luong_lop;i++){
         in_1_lop(*(a.danh_dach_lop[i]),i+1);
    }
}
//-----nhap sinh vien
void nhap_sinh_vien(sinh_vien &a,string lop){
    // những tọa độ trong bang nhập sinh viên
    // tọa độ x
    ShowConsoleCursor(2);
    // toa do x
    int x = 3;
    // toa do y
    int y = 3;
    // chieu dai
    int w = 53;
    // chieu cao
    int h = 30;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    // những tọa dộ của bang thứ hai
    //  toa do x
    int x1 = x + 58;
    // toa do y
    int y1 = y;
    // chieu dai
    int w1 = 36;
    // chieu cao
    int h1 = 21;
    box2(x, y, w, 2, "");
    box4(x, y + 2, w, h, "");
    box2(x1, y1, w1, h1, "");
    box2(x1 + 18, y + 3, 16, 2, "");
    box2(x1 + 18, y + 6, 16, 2, "");
    box2(x1 + 18, y + 9, 16, 2, "");
    box2(x1 + 18, y + 12, 16, 2, "");
    box2(x1 + 18, y + 15, 16, 2, "");
    gotoxy(x1 + 10, y + 1);
    SetColor(4);
    cout << "NHAP SINH VIEN";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 5, y + 3 + 1);
    SetColor(4);
    cout << "MA SINH VIEN:";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 15, y + 6 + 1);
    SetColor(4);
    cout << "HO:";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 14, y + 9 + 1);
    SetColor(4);
    cout << "TEN:";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 13, y + 13);
    SetColor(4);
    cout << "PHAI:";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 9, y + 15 + 1);
    SetColor(4);
    cout << "PASSWORD:";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x + 10, y + 1);
    SetColor(4);
    cout << "DANH SACH LOP ";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x + 1, y + 3);
    SetColor(4);
    cout << "MA SINH VIEN";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 7, y + 3);
    SetColor(4);
    cout << "HO";
    SetColor(0);
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 3, y + 3);
    SetColor(4);
    cout << "TEN";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 1, y + 3);
    cout << "PHAI";
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 4 + 2, y + 3);
    cout << "PASSWORD";
    SetColor(7);
    gotoxy(x_cu, y_cu);
    box2(x1 + 15, y + 18, 7, 2, "");
    gotoxy(x1 + 16, y + 19);
    cout << "ENTER";
    gotoxy(x_cu, y_cu);
    thanh_sang(x1 + 15, y + 18, 7, 2, 4, "ENTER");
    a.ma_sinh_vien=tao_ma(lop);
    gotoxy(x1 + 5+14, y + 3 + 1);
    cout << a.ma_sinh_vien;
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 15+4, y + 6 + 1);
    cin.ignore();
    getline(cin, a.ho);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 14+5, y + 9 + 1);
    getline(cin, a.ten);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 12+7, y + 13);
    getline(cin, a.phai);
    gotoxy(x_cu, y_cu);
    gotoxy(x1 + 9+10, y + 15 + 1);
    getline(cin, a.password);
    gotoxy(x_cu, y_cu);
}
void in_1_hoc_sinh(sinh_vien a,int i){
    // những tọa độ trong bang nhập sinh viên
    // tọa độ x
    ShowConsoleCursor(0);
    // toa do x
    int x = 3;
    // toa do y
    int y = 3;
    // chieu dai
    int w = 53;
    // chieu cao
    int h = 30;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    // những tọa dộ của bang thứ hai
    //  toa do x
    int x1 = x + 58;
    // toa do y
    int y1 = y;
    // chieu dai
    int w1 = 36;
    // chieu cao
    int h1 = 21;
    gotoxy(x + 1+2, y + i+5);
    cout <<  a.ma_sinh_vien ;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 7-3, y + i+5);
    cout << a.ho ;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 3-1, y + i+5);
    cout  << a.ten ;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 1, y +i+5);
    cout << a.phai;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 4 + 2, y +i+ 5);
    cout << a.password;
    gotoxy(x_cu, y_cu);
}
//make node sinh vien
ptr_sinh_vien make_node_sinh_vien(sinh_vien &a){
    ptr_sinh_vien p = new node_sinh_vien();
    p->data = a;
    p->next = NULL;
    return p;
}
//them 1 sinh vien co thu tu vao danh sach
void insert_order(ptr_sinh_vien &ds_sv,sinh_vien &a){
    ptr_sinh_vien p, t, s;
    p = make_node_sinh_vien(a);
    int c = 0;
    int d = 0;
    for (s = ds_sv; s != NULL && (s->data.ma_sinh_vien)<(a.ma_sinh_vien);t=s,s=s->next)
        ;
if(s==ds_sv){
        p->next = ds_sv;
        ds_sv = p;
}else{
        p->next = s;
        t->next = p;
}
}
//ham tim kiem ma lop trong ds lop
int ham_tim_kiem_ma_Lop(ds_lop a,string s){
for (int i = 0; i < a.so_luong_lop;i++){
    if(strcmp(a.danh_dach_lop[i]->ma_lop.c_str(),s.c_str())==0){
            return i;
    }
}
return -1;
}
//ham duyet danh sach sinh vien
void duyet_danh_sach_sinh_vien(ptr_sinh_vien ds_sv){
int i = 0;
for (ptr_sinh_vien a = ds_sv; a != NULL;a=a->next){
    in_1_hoc_sinh (a->data,i);
    ++i;
}

}
//in danh sach sinh vien trong lop
void in_danh_sach_sinh_vien_trong_lop(ds_lop c,string a){
int b = 0;
b = ham_tim_kiem_ma_Lop(c, a);
int x_cu = wherex();
int y_cu = wherey();
gotoxy(3 + 10+15, 3 + 1);
cout << a ;
gotoxy(x_cu, y_cu);
duyet_danh_sach_sinh_vien(c.danh_dach_lop[b]->ds_sv);
}
void BaoLoi(string s)
{
int x = wherex(), y = wherey();
gotoxy(64, 26);
SetColor(4);
cout << s;
SetColor(7);
Sleep(4000);
gotoxy(64, 26);
clreol();
gotoxy(x, y);
}
//----mon hoc
// xữ lí nhập xuất dự liệu môn học
istream &operator>>(istream &is, mon_hoc &a)
{
// những tọa độ trong bang môn học
// tọa độ x
// toa do x
ShowConsoleCursor(2);
int x = 5;
// toa do y
int y = 5;
// chieu dai
int w = 55;
// chieu cao
int h = 30;
int b_color = 4;
int x_cu = wherex();
int y_cu = wherey();
// những tọa dộ của bang thứ hai
//  toa do x
int x1 = x + 60;
// toa do y
int y1 = y;
// chieu dai
int w1 = 12;
// chieu cao
int tt = 0;
int h1 = 6;
int xp = x1;
int yp = y1;
int x_cu1 = xp;
int y_cu1 = yp;
int tt_cu = 0;
int x2 = x + 60 + 14;
// toa do y
int y2 = y;
// chieu dai
int w2 = 55;
// chieu cao
int h2 = 15;
gotoxy(x2 + 19, y2 + 4);
is>>a.ma_mon_hoc;
is.ignore();
gotoxy(x_cu, y_cu);
gotoxy(x2 + 19, y2 + 7);
getline(is, a.ten_mon_hoc);
gotoxy(x_cu, y_cu);
return is;
}
void xuat_1_mon_hoc( mon_hoc a,int i)
{
// những tọa độ trong bang môn học
// tọa độ x
ShowConsoleCursor(0);
// toa do x
int x = 5;
// toa do y
int y = 5;
// chieu dai
int w = 55;
// chieu cao
int h = 30;
int b_color = 4;
int x_cu = wherex();
int y_cu = wherey();
// những tọa dộ của bang thứ hai
//  toa do x
int x1 = x + 60;
// toa do y
int y1 = y;
// chieu dai
int w1 = 12;
// chieu cao
int tt = 0;
int h1 = 6;
int xp = x1;
int yp = y1;
int x_cu1 = xp;
int y_cu1 = yp;
int tt_cu = 0;
gotoxy(x + 1+1, y +5+i+2);
SetColor(4);
cout << i + 1;
SetColor(7);
gotoxy(x_cu, y_cu);
gotoxy(x + 7+1, y + 5+i+2);
cout  << a.ma_mon_hoc;
gotoxy(x_cu, y_cu);
gotoxy(x + 20+1, y + 5+i+2);
cout << a.ten_mon_hoc;
gotoxy(x_cu, y_cu);
}
// xử lí chiều cao của mỗi node môn học
int tall(ptr_mon_hoc a)
{
return (a == NULL) ? -1 : a->height;
}
// xử lí xoay phải
void rightrotate(ptr_mon_hoc &p)
{
ptr_mon_hoc kt1 = p->left;
p->left = kt1->right;
kt1->right = p;
p->height = max(tall(p->left), tall(p->right)) + 1;
kt1->height = max(tall(kt1->left), tall(p)) + 1;
p = kt1;
}
// xử lí xoay trái
void leftrotate(ptr_mon_hoc &p)
{
ptr_mon_hoc kt1 = p->right;
p->right = kt1->left;
kt1->left = p;
p->height = max(tall(p->left), tall(p->right)) + 1;
kt1->height = max(tall(kt1->right), tall(p)) + 1;
p = kt1;
}
// xử lí xoay hai lần khi con nằm bên phải ,xoay phải trước rồi tới xoay trái
void doublerightchild(ptr_mon_hoc &p)
{
rightrotate(p->right);
leftrotate(p);
}
// xử lí xoay hai lần khi con nam bên trái , xoay trái trước rồi tới xoay phải
void doubleleftchild(ptr_mon_hoc &p)
{
leftrotate(p->left);
rightrotate(p);
}
// xử lý cân bằng lại cây
void balance(ptr_mon_hoc &ds_mon_hoc)
{
if (ds_mon_hoc == NULL)
{
    return;
}
if (tall(ds_mon_hoc->left) - tall(ds_mon_hoc->right) > 1)
{
    if (tall(ds_mon_hoc->left->left) >= tall(ds_mon_hoc->left->right))
    {
            rightrotate(ds_mon_hoc);
    }
    else
    {
            doubleleftchild(ds_mon_hoc);
    }
}
else if (tall(ds_mon_hoc->right) - tall(ds_mon_hoc->left) > 1)
{
    if (tall(ds_mon_hoc->right->right) >= tall(ds_mon_hoc->right->left))
    {
            leftrotate(ds_mon_hoc);
    }
    else
    {
            doublerightchild(ds_mon_hoc);
    }
}
ds_mon_hoc->height = max(tall(ds_mon_hoc->left), tall(ds_mon_hoc->right)) + 1;
}
// xử lí thêm nút vào danh sách môn học
void insert_node(ptr_mon_hoc &ds_mon_hoc, int key, mon_hoc a)
{
if (ds_mon_hoc == NULL)
{
    ds_mon_hoc = new node_mon_hoc();
    ds_mon_hoc->key = key;
    ds_mon_hoc->a = a;
    ds_mon_hoc->left = NULL;
    ds_mon_hoc->right = NULL;
    ds_mon_hoc->height = 0;
}
else
{
    if (key < ds_mon_hoc->key)
    {
            insert_node(ds_mon_hoc->left, key, a);
    }
    else if (key > ds_mon_hoc->key)
    {
            insert_node(ds_mon_hoc->right, key, a);
    }
}
balance(ds_mon_hoc);
}
// xử lí tạo cây
void create_tree(ptr_mon_hoc &ds_mon_hoc, int key)
{
mon_hoc a;
if (key != 0)
{
    cin >> a;
    insert_node(ds_mon_hoc, key, a);
}
}

int search_delete(ptr_mon_hoc &ds_mh,string s){
int maxsize = 10000;
ptr_mon_hoc stack[maxsize];
ptr_mon_hoc p = ds_mh;
int sp = -1;
do{
    while (p != NULL){
            stack[++sp] = p;
            p = p->left;
    }
    if(sp!=-1){
            p = stack[sp--];
            if(p->a.ma_mon_hoc==s){
                return p->key;
            }
            p = p->right;
    }else{
            break;
    }
} while (1);
return -1;
}
void tim_trai(ptr_mon_hoc &x, ptr_mon_hoc &b)
{
if (b->right != NULL)
{
    tim_trai(x, b->right);
}
else
{
    x->a = b->a;
    x = b;
    b = b->left;
}
}
void delete_mon_hoc(ptr_mon_hoc &ds_mon_hoc, int &key)
{
if (ds_mon_hoc == NULL)
{
    return;
}
if (key < ds_mon_hoc->key)
{
    delete_mon_hoc(ds_mon_hoc->left, key);
}
else if (key > ds_mon_hoc->key)
{
    delete_mon_hoc(ds_mon_hoc->right, key);
}
else
{
    ptr_mon_hoc x = ds_mon_hoc;
    if (ds_mon_hoc->left == NULL)
    {
            ds_mon_hoc = ds_mon_hoc->right;
    }
    else if (ds_mon_hoc->right == NULL)
    {
            ds_mon_hoc = ds_mon_hoc->left;
    }
    else
    {
            tim_trai(x, ds_mon_hoc->left);
    }
    delete (x);
}
balance(ds_mon_hoc);
}
// xử lí khóa cho mỗi lần
int kt_trung(ptr_mon_hoc ds_mh, int key)
{
if (ds_mh != NULL)
{
    if (key == ds_mh->key)
    {
            return 1;
    }
    kt_trung(ds_mh->left, key);
    kt_trung(ds_mh->right, key);
}
return 0;
}
int tao_key(ptr_mon_hoc ds_mh)
{
int key = 0;
do
{
    key = rand() % (100 - 1 + 1) + 1;
} while (kt_trung(ds_mh, key) == 1);
return key;
}
void xuat_danh_sach_mon_hoc(ptr_mon_hoc &ds_mh){
int maxsize=10000;
ptr_mon_hoc stack[maxsize];
ptr_mon_hoc p = ds_mh;
int sp = -1;
int i = 0;
do{
    while(p!=NULL){
            stack[++sp] = p;
            p = p->left;
    }
    if(sp!=-1){
            p = stack[sp--];
            xuat_1_mon_hoc(p->a,i);
            i++;
            p = p->right;
    }
    else{
            break;
    }
} while (1);
}
int count(ptr_mon_hoc head){
    if(head==NULL){
        return 0;
    }else{
        int left = count(head->left);
        int right = count(head->right);
        return 1 + left + right;
    }
}
ptr_mon_hoc ham_tim_kiem_ten_mon_hoc(ptr_mon_hoc ds_mh,int key){
    ptr_mon_hoc p = ds_mh;
    if(p!=NULL&& p->key!=key){
        if(key<p->key){
            p = p->left;
        }else {
            p = p->right;
        }
    }
    return p;
}
//nhập câu hỏi thi
ptr_cau_hoi_thi make_node_cau_hoi_thi(cau_hoi_thi &a){
    ptr_cau_hoi_thi p = new node_cau_hoi_thi();
    p->data = a;
    p->next = NULL;
    return p;
}
void insert_node_cau_hoi_thi(ptr_cau_hoi_thi &first,cau_hoi_thi &infor){
    ptr_cau_hoi_thi p, s, t;
    p = make_node_cau_hoi_thi(infor);
    for (s = first; s != NULL && s->data.id < infor.id;t=s,s=s->next)
        ;
        if(s==first){
            p->next = first;
            first = p;
        }else{
            p->next = s;
            t->next = p;
        }
}
void nhap_cau_hoi_thi(cau_hoi_thi &infor,int id){
    ShowConsoleCursor(2);
    // toa do x
    int x = 10;
    // toa do y
    int y = 2;
    // chieu dai
    int w = 120;
    // chieu cao
    int h = 40;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
       
        gotoxy(x + 16, y + 5);
        cout << id;
        gotoxy(x_cu, y_cu);
        gotoxy(x + 16, y + 8);
        // cin.ignore();
        getline(cin, infor.noi_dung_cau_hoi);
        gotoxy(x_cu, y_cu);
        
        gotoxy(x + 16, y + 13);
        getline(cin, infor.dap_an_cau_hoi.dap_an_1);
        gotoxy(x_cu, y_cu);
        
        gotoxy(x + 16, y + 18);
        getline(cin, infor.dap_an_cau_hoi.dap_an_2);
        gotoxy(x_cu, y_cu);
       
        gotoxy(x + 16, y + 23);
        getline(cin, infor.dap_an_cau_hoi.dap_an_3);
        gotoxy(x_cu, y_cu);
       
        gotoxy(x + 16, y + 28);
        getline(cin, infor.dap_an_cau_hoi.dap_an_4);
        gotoxy(x_cu, y_cu);
        char c[4] = {'A','B', 'C', 'D'};
        int x1 = x + 16;
        int y1 = y + 33;
        int w1 = 3;
        int h1 = 2;
        int kt = true;
        int xp = x1;
        int yp = y1;
        int tt = 0;
        int tt_cu = 0;
        int x_cu1 = 0;
        int y_cu1 = 0;
        int ok = 0;
        while(1){
            ok = 0;
            if (kt == true)
            {
                thanh_sang(xp, yp, w1, 2, 4, c[tt]);
                kt = false;
                }
                x_cu1 = xp;
                y_cu1 = yp;
                tt_cu = tt;
                int z = getch();
                TRANGTHAI trangthai = key(z);
                switch (trangthai)
                {
                case LEFT:
                {
                    kt = true;
                    if (tt == 0 && xp == x1)
                    {
                        xp = x1+3*(4-1);
                        tt = 3;
                    }
                    else
                    {
                        xp -=3 ;
                        tt -=1 ;
                    }
                    break;
                }
                case RIGHT:
                {
                    kt = true;
                    if (tt == 3 && xp == x1 + 3 * (4 - 1))
                    {
                        xp = x1;
                        tt = 0;
                    }
                    else
                    {
                        xp +=3 ;
                        tt += 1;
                    }
                    break;
                }
                case ENTER:
                {
                    ok = 1;
                    infor.dap_an_dung = c[tt];
                    break;
                }
                }
                if(ok==1){
                    break;
                }
                thanh_sang(x_cu1, y_cu1, 3, 2, 0, c[tt_cu]);
            }
            thanh_sang(x + 55, y + 37, 7, 2, 7, "ENTER");
}
int search_id_cau_hoi_thi(ptr_cau_hoi_thi first,int id){
    for (ptr_cau_hoi_thi p = first; p != NULL;p=p->next){
        if(p->data.id==id){
            return -1;
        }
    }
    return 0;
}
//in bảng điểm môn học của 1 lớp.
ptr_diem_thi make_node_diem_thi(diem_thi &a)
{
    ptr_diem_thi p = new node_diem_thi();
    p->data = a;
    p->next = NULL;
    return p;
}
void insert_node_diem_thi(ptr_diem_thi &first, diem_thi &infor)
{
    ptr_diem_thi p, s, t;
    p = make_node_diem_thi (infor);
    for (s = first; s != NULL && s->data.diem < infor.diem; t = s, s = s->next)
        ;
    if (s == first)
    {
        p->next = first;
        first = p;
    }
    else
    {
        p->next = s;
        t->next = p;
    }
}
int count1(ptr_sinh_vien head){
    int cnt = 0;
    if(head==NULL){
        return 0;
    }else{
        for (ptr_sinh_vien p = head; p != NULL;p=p->next){
            ++cnt;
        }
    }
    return cnt;
}
int size(ptr_sinh_vien a)
{
    int cnt = 0;
    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}
void delete_first(ptr_sinh_vien &a)
{
    if (a == NULL)
    {
        return;
    }
    a = a->next;
}
void delete_last(ptr_sinh_vien &a)
{
    if (a == NULL)
    {
        return;
    }
    else
    {
        ptr_sinh_vien pre = NULL;
        ptr_sinh_vien af = a;
        while (af->next != NULL)
        {
            pre = af;
            af = af->next;
        }
        pre->next = NULL;
    }
}
void delete_middle(ptr_sinh_vien &a, int pos)
{
    int n = size(a);
    if (pos <= 0 || pos > n)
    {
        cout << "invalid!";
        return;
    }
    if (pos == 1)
    {
        delete_first(a);
        return;
    }
    if (pos == n)
    {
        delete_last(a);
        return;
    }
    ptr_sinh_vien pre = NULL;
    ptr_sinh_vien af = a;
    for (int i = 1; i < pos; i++)
    {
        pre = af;
        af = af->next;
    }
    pre->next = af->next;
    af->next = NULL;
}
void in_1_hoc_sinh1(sinh_vien a, int i,string ma)
{
    // những tọa độ trong bang nhập sinh viên
    // tọa độ x
    ShowConsoleCursor(0);
    // toa do x
    int x = 3;
    // toa do y
    int y = 3;
    // chieu dai
    int w = 53;
    // chieu cao
    int h = 30;
    int b_color = 4;
    int x_cu = wherex();
    int y_cu = wherey();
    // những tọa dộ của bang thứ hai
    //  toa do x
    int x1 = x + 58;
    // toa do y
    int y1 = y;
    // chieu dai
    int w1 = 36;
    // chieu cao
    int h1 = 21;
    gotoxy(x + 1 + 2, y + i + 5);
    cout << a.ma_sinh_vien;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 7 - 3, y + i + 5);
    cout << a.ho;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 3 - 1, y + i + 5);
    cout << a.ten;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 1, y + i + 5);
    cout << a.phai;
    gotoxy(x_cu, y_cu);
    gotoxy(x + 16 + 15 + 8 + 4 + 2, y + i + 5);
    cout << a.password;
    gotoxy(x_cu, y_cu);
    for (ptr_diem_thi p = a.ds_diem_thi; p != NULL;p=p->next){
        if(p->data.ma_mon_hoc==ma){
            if(p->data.diem>=0&&p->data.diem<=10){
            gotoxy(x + 16 + 15 + 8 + 4 + 2 + 15, y + i + 5);
            cout << p->data.diem;
            gotoxy(x_cu, y_cu);
            return;
            }
        }
    }
    gotoxy(x + 16 + 15 + 8 + 4 + 2 + 10, y + i + 5);
    cout << "CHUA THI";
    gotoxy(x_cu, y_cu);
 }
void duyet_danh_sach_sinh_vien1(ptr_sinh_vien ds_sv,string ma)
{
    int i = 0;
    for (ptr_sinh_vien a = ds_sv; a != NULL; a = a->next)
    {
        in_1_hoc_sinh1(a->data, i,ma);
        ++i;
    }
}