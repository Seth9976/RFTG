// 函数名称: sub_5de5d0
// 虚拟地址: 0x5de5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5de5d0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: HINSTANCE hInstance = data_bf7fe8
    HINSTANCE hInstance = data_bf7fe8
    PWSTR eax = data_bf7fe0
    int32_t result = 0
    HWND hWnd = CreateWindowExW(WS_EX_LEFT, eax, eax, 0x88000000, 0, 0, 0xa, 0xa, nullptr, nullptr, 
        hInstance, nullptr)
    void* var_4c = arg1
    sub_5dc360()
    HDC eax_1 = GetDC(hWnd)
    void ppfd
    sub_5de1b0(&ppfd, arg1)
    SetPixelFormat(eax_1, ChoosePixelFormat(eax_1, &ppfd), &ppfd)
    int32_t eax_4 = (*(*(arg1 + 0x278) + 0xc))(eax_1)
    
    if (eax_4 != 0)
        (*(*(arg1 + 0x278) + 0x14))(eax_1, eax_4)
        sub_5de4c0(arg1, eax_1)
        int32_t* eax_6 = *(arg1 + 0x278)
        void var_14
        
        if (*eax_6 != 0)
            eax_6[7](eax_1, arg2, arg3, 1, &result, &var_14)
        (*(*(arg1 + 0x278) + 0x14))(eax_1, 0)
        (*(*(arg1 + 0x278) + 0x10))(eax_4)
    
    ReleaseDC(hWnd, eax_1)
    DestroyWindow(hWnd)
    void* var_4c_10 = arg1
    sub_5dc360()
    return result
}
