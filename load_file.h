#pragma once
#include"file_xu_li_de.h"
void insert_order(ptr_sinh_vien &ds_sv, sinh_vien &a);
int tao_key(ptr_mon_hoc ds_mh);
void insert_node(ptr_mon_hoc &ds_mon_hoc, int key, mon_hoc a);
void insert_node_cau_hoi_thi(ptr_cau_hoi_thi &first, cau_hoi_thi &infor);
int search_id_cau_hoi_thi(ptr_cau_hoi_thi first, int id);
ptr_diem_thi make_node_diem_thi(diem_thi &a);
void insert_node_diem_thi(ptr_diem_thi &first, diem_thi &infor);
void load_file_ds_lop(ds_lop &ds_lop){
    ifstream filein;
    filein.open("file_in.txt", ios_base::in);
while(!filein.eof()){
    lop *a=new lop();
    getline(filein, a->ma_lop,',');
    getline(filein, a->ten_lop,',');
    filein.ignore();
    ds_lop.danh_dach_lop[ds_lop.so_luong_lop] = a;
    ++ds_lop.so_luong_lop;
}
filein.close();
}
void load_file_ds_lop_ghi(ds_lop &ds_lop){
    ofstream fileout;
    fileout.open("file_in.txt", std::ios::out | std::ios::trunc);
    for (int i = 0; i < ds_lop.so_luong_lop;i++){
        if(i!=ds_lop.so_luong_lop-1){
        fileout << ds_lop.danh_dach_lop[i]->ma_lop << ',' << ds_lop.danh_dach_lop[i]->ten_lop <<','<< endl;
        }else{
            fileout << ds_lop.danh_dach_lop[i]->ma_lop << ',' << ds_lop.danh_dach_lop[i]->ten_lop<<',';
        }
    }
    fileout.close();
}
void load_file_ds_sinh_vien(ds_lop&ds_lop){
ifstream filein;
filein.open("file_ds_sinh_vien.txt", ios_base::in);
while(!filein.eof()){
    sinh_vien a;
    getline(filein, a.ma_sinh_vien, ',');
    getline(filein, a.ho, ',');
    getline(filein, a.ten,',');
    getline(filein, a.phai,',');
    getline(filein, a.password,',');
    filein.ignore();
    ifstream filein1;
    filein1.open("bang_diem.txt", ios_base::in);
    while(!filein1.eof()){
        string ma_lop;
        getline(filein1, ma_lop, ',');
        string ma_sv;
        getline(filein1, ma_sv, ',');
        string ma_mon_hoc;
        getline(filein1, ma_mon_hoc, ',');
        float diem;
        filein1 >> diem;
        if(a.ma_sinh_vien==ma_sv){
            diem_thi b;
            b.ma_mon_hoc = ma_mon_hoc;
            b.diem = diem;
            insert_node_diem_thi(a.ds_diem_thi, b);
        }
    }
    filein1.close();
    for (int i = 0; i < ds_lop.so_luong_lop;i++){
        if(lay_ten_lop(a.ma_sinh_vien)==lay_ten_lop(ds_lop.danh_dach_lop[i]->ma_lop)){
            insert_order(ds_lop.danh_dach_lop[i]->ds_sv, a);
        }
    }
}
filein.close();
}
void load_file_ds_sinh_vien_ghi(ds_lop&ds_lop){
    ofstream fileout;
    fileout.open("file_ds_sinh_vien.txt", std::ios::out | std::ios::trunc);
    for (int i = 0; i < ds_lop.so_luong_lop;i++){
        if(i==ds_lop.so_luong_lop-1){
        for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL;p=p->next){
            if(p->next==NULL){
            fileout << p->data.ma_sinh_vien << ',' << p->data.ho << ',' << p->data.ten << ',' << p->data.phai <<',' << p->data.password << ',' ;
            }else{
                fileout << p->data.ma_sinh_vien << ',' << p->data.ho << ',' << p->data.ten << ',' << p->data.phai << ',' << p->data.password << ','<<endl;
            }
        }
        }else{
            for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL; p = p->next){
                fileout << p->data.ma_sinh_vien <<',' << p->data.ho << ',' << p->data.ten <<',' << p->data.phai << ',' << p->data.password << ','<<endl;
            }
        }
    }
    fileout.close();
}
// void load_file_ds_sinh_vien_ghi(ds_lop&ds_lop){
//     ofstream fileout;
//     fileout.open("file_ds_sinh_vien.txt", ios_base::out);
//     for(ptr_sinh_vien a=)
// }
void load_file_ds_mon_hoc(ptr_mon_hoc& ds_mh){
ifstream filein;
filein.open("mon_hoc.txt", ios_base::in);
 int i = 0;
while(!filein.eof()){
    int key = tao_key(ds_mh);
    mon_hoc a;
    if (key != 0)
    {
        i = 0;
        getline(filein, a.ma_mon_hoc,',');
        getline(filein, a.ten_mon_hoc);
        // filein.ignore();
        if(a.ma_mon_hoc=="INT1306_CLC"){
            i = 3;
        }else if(a.ma_mon_hoc=="BAS1164_CLC"){
            i = 4;
        }else{
            i = 1;
        }
switch(i){
    case 1:{
        break;
    }
    case 2:{
        break;
    }
    case 3:{
        ifstream file;
        file.open("file_cau_truc_du_lieu_giai_thuat.txt", ios_base::in);
        while (!file.eof())
        {
            cau_hoi_thi b;
            int id_so = 0;
            int checked = 0;
            do
            {
                string id = tao_id();
                id_so = stoi(id);
                checked = search_id_cau_hoi_thi(a.ds_cau_hoi_thi, id_so);
            } while (checked == -1);
            b.id = id_so;
            getline(file, b.noi_dung_cau_hoi , '|');
            getline(file, b.dap_an_cau_hoi.dap_an_1, '|');
            getline(file, b.dap_an_cau_hoi.dap_an_2, '|');
            getline(file, b.dap_an_cau_hoi.dap_an_3, '|');
            getline(file, b.dap_an_cau_hoi.dap_an_4, '|');
            file >> b.dap_an_dung;
            file.ignore();
            insert_node_cau_hoi_thi(a.ds_cau_hoi_thi, b);
        }
        file.close();
        break;
        }
    case 4:{
        ifstream file1;
        file1.open("file_tieng_anh.txt", ios_base::in);
        while (!file1.eof())
        {
            cau_hoi_thi c;
            int id_so = 0;
            int checked = 0;
            do
            {
                string id = tao_id();
                id_so = stoi(id);
                checked = search_id_cau_hoi_thi(a.ds_cau_hoi_thi, id_so);
            } while (checked == -1);
            c.id = id_so;
            getline(file1, c.noi_dung_cau_hoi, '|');
            getline(file1, c.dap_an_cau_hoi.dap_an_1, '|');
            getline(file1, c.dap_an_cau_hoi.dap_an_2, '|');
            getline(file1, c.dap_an_cau_hoi.dap_an_3, '|');
            getline(file1, c.dap_an_cau_hoi.dap_an_4, '|');
            file1 >> c.dap_an_dung;
            file1.ignore();
            insert_node_cau_hoi_thi(a.ds_cau_hoi_thi, c);
        }
        file1.close();
        break;
    }
}
insert_node(ds_mh, key, a);
    }
}
filein.close();
}
void load_file_ds_mon_hoc_ghi(ptr_mon_hoc&ds_mh){
    ofstream fileout;
    fileout.open("mon_hoc.txt", std::ios::out | std::ios::trunc);
    ptr_mon_hoc stack[maxi];
    ptr_mon_hoc p = ds_mh;
    int sp = -1;
    do{
        while(p!=NULL){
            stack[++sp] = p;
            p = p->left;
        }
        if(sp!=-1){
            p = stack[sp];
            if(sp==0&&p->right==NULL){
                fileout << p->a.ma_mon_hoc << "," << p->a.ten_mon_hoc;
            }else{
                fileout << p->a.ma_mon_hoc << "," << p->a.ten_mon_hoc << endl;
            }
            --sp;
            p = p->right;
        }else{
            break;
        }
    } while (1);
    fileout.close();
}
void load_file_bang_diem_ghi(ds_lop&ds_lop){
    ofstream fileout;
    fileout.open("bang_diem.txt", std::ios::out | std::ios::trunc);
    for (int i = 0; i < ds_lop.so_luong_lop;i++){
        for (ptr_sinh_vien p = ds_lop.danh_dach_lop[i]->ds_sv; p != NULL;p=p->next){
            for (ptr_diem_thi q = p->data.ds_diem_thi; q != NULL;q=q->next){
                fileout <<ds_lop.danh_dach_lop[i]->ma_lop<<','<< p->data.ma_sinh_vien << ',' << q->data.ma_mon_hoc << ',' << q->data.diem << endl;
            }
        }
    }
    fileout.close();
}