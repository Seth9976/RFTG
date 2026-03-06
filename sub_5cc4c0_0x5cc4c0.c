// 函数名称: sub_5cc4c0
// 虚拟地址: 0x5cc4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cc4c0(void* arg1)
{
    // 第一条实际指令: HWND hWnd = *(*(arg1 + 0x74) + 4)
    HWND hWnd = *(*(arg1 + 0x74) + 4)
    char* eax_1 = *(arg1 + 8)
    PWSTR lpString
    PWSTR lpString_1
    
    if (eax_1 == 0)
        lpString_1 = nullptr
        lpString = 0x6b3fac
    else
        void* var_14_1 = sub_5cd1b0(eax_1) + 1
        int32_t var_18_1 = *(arg1 + 8)
        lpString = sub_5dd160("UTF-16LE", "UTF-8")
        lpString_1 = lpString
        
        if (lpString_1 == 0)
            lpString = 0x6b3fac
    
    SetWindowTextW(hWnd, lpString)
    PWSTR lpString_2 = lpString_1
    return sub_5d0af0()
}
