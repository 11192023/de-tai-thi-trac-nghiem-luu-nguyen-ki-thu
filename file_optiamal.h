#pragma once
#include "file_struct.h"
void XacNhan(string s)
{
    cout << s;
    bool ok = false;
    int cnt = 0;
    while (1)
    {
        char kt = getch();
        if (kt == 13) // Kiểm tra nếu là phím Enter
        {
            break;
        }
        else if (kt == 8) // Kiểm tra nếu là phím Backspace
        {
            if (cnt > 0)
            {
                cout << "\b \b";
                --cnt;
            }
        }
        else if ((kt >= 'a' && kt <= 'z') || (kt >= 'A' && kt <= 'Z') || (kt == ' ' && !ok)) // Kiểm tra nếu là chữ cái hoặc khoảng trắng
        {
            if (kt >= 'a' && kt <= 'z')
            {
                if (!ok && cnt == 0)
                {
                    kt = toupper(kt);
                    ok = true;
                }
                else if (ok)
                {
                    kt = toupper(kt);
                }
            }
            cout << kt;
            ++cnt;
            ok = (kt == ' '); // Cập nhật biến ok nếu kt là khoảng trắng
        }
    }
    cout << endl;
}
string chuan_hoa_ma_3(int &t, int x, int y)
{
    gotoxy(x, y);
    // cout << endl;
    string tmp;
    int cnt = 0;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!((a >= 'A' && a <= 'Z')|| a == 13 || a == 27||a==' '||a==8)); // Use character literals 'a' and 'z' instead of numerical ASCII values
        if(a==' '){
            cnt++;
        }
        if(a==' '&&cnt==1){
            tmp.push_back(a);
            cout << a;
        }
        else if (a == 27)
        {
            t = 1;
            return "";
        }
        else if ((a == 8 && !tmp.empty()))
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a==' '&&tmp[tmp.size() - 1] == ' ' && cnt >= 2)
        {
            cout << a;
            cout << "\b \b";
            --cnt;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << a;
        }
        if (tmp.length() == 30)
        {
            tmp.pop_back();
            cout << "\b \b";
        }
    }
    cout << endl;
    if(tmp[tmp.size()-1]==' '){
        tmp.pop_back();
    }
    return tmp;
}
string chuan_hoa_ma_1(int &t,int x,int y)
{
    gotoxy(x, y);
    //cout << endl;
    string tmp;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!((a >= 'A' && a <= 'Z') || a == '-'||a==8||a>='0'&&a<='9'||a==13||a==27)); // Use character literals 'a' and 'z' instead of numerical ASCII values
        if(a==27){
            t = 1;
            return "";
        }
        else if (a == 8 && !tmp.empty())
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << a;
        }
        if(tmp.length()==15){
            tmp.pop_back();
            cout << "\b \b";
        }
    }
    cout << endl;
    if (tmp[tmp.size() - 1] == ' ')
    {
        tmp.pop_back();
    }
    return tmp;
}
int chuan_hoa_ma_2(string s, int x, int y)
{
    gotoxy(x, y);
    // cout << endl;
    cout << s;
    string tmp;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!(a == 8 || a >= '0' &&a <= '9' || a == 13||a==27)); // Use character literals 'a' and 'z' instead of numerical ASCII values
        if(a==27){
          return -1;
        }
        else if (a == 8 && !tmp.empty())
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << a;
        }
        if (tmp.length() == 15)
        {
            tmp.pop_back();
            cout << "\b \b";
        }
    }
    cout << endl;
    int tmp1 = stoi(tmp);
    return tmp1;
}
string chuan_hoa_ma(string s)
{
    // gotoxy(x, y);
    string tmp;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!((a >= 'A' && a <= 'Z') || a == '-' || a == 8 || a >= '0' && a <= '9' || a == 13)); // Use character literals 'a' and 'z' instead of numerical ASCII values

        if (a == 8 && !tmp.empty())
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << a;
        }
    }
    cout << endl;
    return tmp;
}
string chuan_hoa_password_1(string s,int x,int y){
    //cout << endl;
    gotoxy(x, y);
    cout << s;
    string tmp;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!(a == 8 || a >= '0' && a <= '9'||a==13)); // Use character literals 'a' and 'z' instead of numerical ASCII values

        if (a == 8 && !tmp.empty())
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << "*";
        }
        if (tmp.length() == 7)
        {
            tmp.pop_back();
            cout << "\b \b";
        }
    }
    cout << endl;
    return tmp;
} int lay_3_so_cuoi(string s)
{
    vector<char> v;
    int a = 0;
    int cnt = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cnt++;
        if (cnt == 4)
        {
            break;
        }
        v.push_back(s[i]);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        a = a * 10 + v[i] - '0';
    }
    return a;
}
string chuan_hoa_password(string s)
{
    cout << endl;
    //gotoxy(x, y);
    cout << s;
    string tmp;
    while (1)
    {
        char a;
        do
        {
            a = toupper(getch());
        } while (!(a == 8 || a >= '0' && a <= '9' || a == 13)); // Use character literals 'a' and 'z' instead of numerical ASCII values

        if (a == 8 && !tmp.empty())
        {
            tmp.pop_back();
            cout << "\b \b";
        }
        else if (a == 13)
        {
            break;
        }
        else if (a != 8)
        {
            tmp.push_back(a);
            cout << a;
        }
    }
    cout << endl;
    return tmp;
}
string tao_ma(string lop)
{
    srand(static_cast<unsigned int>(time(nullptr)));
    string a = "N22DC";
    a += lop;
    string tmp = "000";
    for (int i = 0; i < tmp.length(); i++)
    {
        tmp[i] = rand() % (sochin - sokhong) + sokhong;
    }
    a += tmp;
    return a;
}
string tao_id()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    string a = "";
    string tmp = "00000";
    for (int i = 0; i < tmp.length(); i++)
    {
        tmp[i] = rand() % (sochin - sokhong) + sokhong;
    }
    a += tmp;
    return a;
}
string lay_ten_lop(string a)
{
    string tmp;
    for (int i = 5; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            break;
        }
        tmp.push_back(a[i]);
    }
    return tmp;
}
string tao_mam_mon_hoc(){
    string a = "MH000";
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 2; i < a.length();i++){
        a[i] = rand() % (sochin - sokhong) + sokhong;
    }
    return a;
}

