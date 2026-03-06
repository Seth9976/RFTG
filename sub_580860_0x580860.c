// 函数名称: sub_580860
// 虚拟地址: 0x580860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_580860(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_26a6554
    *(eax_2 + 0x28) = arg1 - *(eax_2 + 0x2c)
    void* eax_3 = data_26a6554
    
    if (*(eax_3 + 0x10) == 0)
        SetWindowPos(*(eax_3 + 0x14), nullptr, 0, 0, arg2, arg1, 0x16)
    else
        SetWindowPos(*(eax_3 + 0x14), nullptr, 0, 0, arg2, *(eax_3 + 0x28) - 2, 0x16)
        void* eax_4 = data_26a6554
        SetWindowPos(*(eax_4 + 0x10), nullptr, 0, *(eax_4 + 0x28), arg2, *(eax_4 + 0x2c), 0x14)
    
    void* ecx_4 = data_26a6554
    HWND entry_hWnd
    
    if (*(ecx_4 + 0xc) != 0)
        int32_t var_28_1 = 0
        int32_t var_30
        __builtin_memset(&var_30, 0, 0x28)
        int32_t lParam = 0x2c
        int32_t var_2c_1 = *(ecx_4 + 0x14)
        RECT rect
        GetClientRect(entry_hWnd, &rect)
        SendMessageA(*(data_26a6554 + 0xc), 0x406, 0, &lParam)
        ecx_4 = data_26a6554
    
    if (*(ecx_4 + 4) != 0)
        void* eax_7 = *(ecx_4 + 4)
        
        if (*(eax_7 + 0x14) == 8)
            *(eax_7 + 8) = &data_8951dc
            ecx_4 = data_26a6554
    
    LPARAM edx_6 = *(ecx_4 + 0x14)
    LRESULT result = SendMessageA(entry_hWnd, 0x111, zx.d(GetDlgCtrlID(edx_6)) | 0x10000, edx_6)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
