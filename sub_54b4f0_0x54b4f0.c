// 函数名称: sub_54b4f0
// 虚拟地址: 0x54b4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_54b4f0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd = *(arg1 + 0xc)
    
    if (*(data_27e7fd0 + 0x22) == 0)
        SetWindowLongA(hWnd, 0xfffffff0, 0x10cf0000)
        
        if (ChangeDisplaySettingsA(nullptr, 0) != DISP_CHANGE_SUCCESSFUL)
            char const* const __saved_edi_2 = "Opengl failed to go back to windows mode"
            sub_4c5680(*(data_27e7fd0 + 0xc))
        
        BOOL eax_13 = data_3160090
        int32_t X = data_3160088
        
        if (eax_13 != X)
            int32_t Y = data_316008c
            eax_13 = SetWindowPos(*(arg1 + 0xc), 0xfffffffe, X, Y, eax_13 - X, data_3160094 - Y, 
                SWP_SHOWWINDOW)
        
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_13
    
    SetWindowLongA(hWnd, 0xfffffff0, 0x90080000)
    GetWindowRect(*(arg1 + 0xc), &data_3160088)
    void devMode
    sub_5abfc0(&devMode, 0, 0x9c)
    void* eax_3 = data_27e7fd0
    int16_t var_80 = 0x9c
    int32_t var_38 = *(eax_3 + 0x14)
    int32_t var_34 = *(eax_3 + 0x18)
    int32_t var_3c = 0x20
    int32_t var_7c = 0x1c0000
    void* eax_7
    
    if (ChangeDisplaySettingsA(&devMode, CDS_FULLSCREEN) == DISP_CHANGE_SUCCESSFUL)
        eax_7 = data_27e7fd0
    else
        char const* const __saved_edi_1 = "Opengl failed to set full screen mode"
        sub_4c5680(*(data_27e7fd0 + 0xc))
        eax_7 = data_27e7fd0
        *(eax_7 + 0x22) = 0
    
    BOOL eax_9 =
        SetWindowPos(*(arg1 + 0xc), 0xfffffffe, 0, 0, *(eax_7 + 0x14), *(eax_7 + 0x18), SWP_SHOWWINDOW)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_9
}
