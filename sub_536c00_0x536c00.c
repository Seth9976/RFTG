// 函数名称: sub_536c00
// 虚拟地址: 0x536c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_536c00(char* arg1)
{
    // 第一条实际指令: char* var_c = arg1
    char* var_c = arg1
    char* var_1c
    
    if (data_307885c == 0)
        HWND hDlg = data_3078830
        var_1c = 0x8e
        data_307885c = 1
        HWND hWnd = GetDlgItem(hDlg, var_1c)
        var_1c = zx.d(data_307885c)
        BOOL eax
        eax, arg1 = EnableWindow(hWnd, var_1c)
    
    int32_t* ebx = data_3079208
    
    if (ebx == 0 || ebx[1] != 0x19)
        return 
    
    var_1c = arg1
    char** var_c_1 = &var_1c
    sub_4c42b0(&var_1c, &data_83f3d3)
    char* const eax_1 = ebx[8]
    
    if (eax_1 == 0)
        eax_1 = &data_83f3d3
    
    sub_4f2a50(eax_1, *ebx)
    int32_t* eax_2 = ebx[8]
    
    if (eax_2 == 0)
        eax_2 = &data_83f3d3
    
    var_1c = **ebx
    sub_4f30b0(eax_2)
}
