// 函数名称: sub_57f540
// 虚拟地址: 0x57f540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_57f540(int32_t arg1, HWND arg2, int32_t arg3, int16_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = data_26a6554
    int32_t result
    
    if (*(esi + 0x40) == 0)
        result = *(esi + 0x24)
        
        if (arg3 s>= result - 5)
            result += 5
            
            if (arg3 s<= result)
                result = SetCursor(LoadCursorA(nullptr, 0x7f84))
                esi = data_26a6554
    else
        HDC eax_2 = GetDC(arg2)
        void* eax_3 = data_26a6554
        int32_t y_1 = *(eax_3 + 0x50)
        int32_t x = *(eax_3 + 0x44)
        int32_t y = *(eax_3 + 0x4c)
        int32_t rop2 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, x, y, nullptr)
        LineTo(eax_2, x, y_1)
        SetROP2(eax_2, rop2)
        void* eax_5 = data_26a6554
        int32_t y_2 = *(eax_5 + 0x50)
        int32_t y_3 = *(eax_5 + 0x4c)
        int32_t rop2_1 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, arg3, y_3, nullptr)
        LineTo(eax_2, arg3, y_2)
        SetROP2(eax_2, rop2_1)
        result = ReleaseDC(arg2, eax_2)
        *(data_26a6554 + 0x44) = arg3
        esi = data_26a6554
    
    if (*(esi + 0xc) != 0)
        char var_60 = 0
        int128_t var_5f[0x5]
        sub_5abfc0(&var_5f, 0, 0x4f)
        void var_b0
        void* var_f8_1 = &var_b0
        int32_t lParam = 0x2c
        SendMessageA(*(esi + 0xc), 0x40e, 0, &lParam)
        void* eax_10 = data_26a6554
        int32_t ecx_5
        
        if (arg3 s>= *(eax_10 + 0x24) + 5 && *(eax_10 + 0x40) == 0)
            LRESULT eax_14
            char* edx_7
            eax_14, ecx_5, edx_7 = SendMessageA(arg2, 0x199, 
                zx.d(SendMessageA(arg2, 0x1a9, 0, zx.d(arg4) << 0x10 | zx.d(arg3.w))), 0)
            
            if (eax_14 != 0xffffffff && eax_14 != 0)
                ecx_5 = *(eax_14 + 0x14)
                
                if (ecx_5 == 5)
                    int32_t var_144_10 = *(eax_14 + 0x10)
                    int32_t nNumber
                    sub_57e670(&nNumber, edx_7)
                    HDC eax_17 = GetDC(arg2)
                    int32_t nDenominator = GetDeviceCaps(eax_17, 0x5a)
                    int32_t esi_3 = neg.d(MulDiv(nNumber, 0x48, nDenominator))
                    ReleaseDC(arg2, eax_17)
                    int32_t var_144_14 = esi_3
                    void var_d4
                    void* var_148_14 = &var_d4
                    _swprintf(&var_60, 0x50, "%s %d")
                else if (ecx_5 != 8)
                    __mbscat_s(&var_60, *(eax_14 + 0x10), 0x4f)
        
        char* eax_19 = &var_60
        
        do
            ecx_5.b = *eax_19
            eax_19 = &eax_19[1]
        while (ecx_5.b != 0)
        
        result = __mbsnbcmp(&var_b0, &var_60, eax_19 - &var_5f)
        
        if (result != 0)
            sub_5abfc0(&var_b0, 0, 0x4f)
            __mbscat_s(&var_b0, &var_60, 0x4f)
            result = SendMessageA(*(data_26a6554 + 0xc), 0x40c, 0, &lParam)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
