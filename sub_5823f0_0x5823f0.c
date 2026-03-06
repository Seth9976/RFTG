// 函数名称: sub_5823f0
// 虚拟地址: 0x5823f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_5823f0(int32_t arg1, int32_t arg2, void* arg3, WPARAM arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(arg3 + 0x14) == 0x63)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    LRESULT result = 0xffffffff
    void var_10c
    sub_5abfc0(&var_10c, 0, 0x104)
    char* const edi = &data_83f3d3
    LRESULT eax_5 = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg4, 0)
    LRESULT var_110 = eax_5
    
    if (eax_5 != 0xffffffff && eax_5 != 0)
        switch (*(arg3 + 0x14))
            case 0, 1, 2, 3, 7
                edi = *(arg3 + 0x10)
            case 4
                uint32_t var_124_1 = zx.d(*(arg3 + 0x12))
                uint32_t var_128_1 = zx.d(*(arg3 + 0x11))
                uint32_t var_12c_1 = zx.d(*(arg3 + 0x10))
                _swprintf(&var_10c, 0x104, "%d,%d,%d")
                edi = &var_10c
            case 5
                sub_57e6c0(*(arg3 + 0x10))
                edi = &data_31601c8
            case 6
                sub_57e800(*(arg3 + 0x10))
                *(arg3 + 8) = 0x31602e0
                edi = *(*(arg3 + 0x10) + 4)
            case 8
                if (*(arg3 + 0x10) == 0)
                    edi = &data_8951dc
                else
                    edi = &data_8954cc
            case 9
                uint32_t var_124_2 = zx.d(*(arg3 + 0x10))
                uint32_t var_128_2 = zx.d(*(arg3 + 0x11))
                uint32_t var_12c_2 = zx.d(*(arg3 + 0x12))
                uint32_t var_130_1 = zx.d(*(arg3 + 0x13))
                _swprintf(&var_10c, 0x104, "%d.%d.%d.%d")
                edi = &var_10c
            case 0xa
                GetDateFormatA(0x400, 1, *(arg3 + 0x10), nullptr, &var_10c, 0x104)
                edi = &var_10c
            case 0xb
                GetTimeFormatA(0x400, 0, *(arg3 + 0x10), "hh':'mm':'ss tt", &var_10c, 0x104)
                edi = &var_10c
            case 0xc
                GetDateFormatA(0x400, 1, *(arg3 + 0x10), nullptr, &var_10c, 0x104)
                void* edi_1 = &var_110:3
                char i
                
                do
                    i = *(edi_1 + 1)
                    edi_1 += 1
                while (i != 0)
                *edi_1 = 0x20
                void* eax_10 = &var_10c
                char i_1
                
                do
                    i_1 = *eax_10
                    eax_10 += 1
                while (i_1 != 0)
                void var_10b
                int32_t eax_11 = eax_10 - &var_10b
                GetTimeFormatA(0x400, 0, *(arg3 + 0x10), "hh':'mm':'ss tt", 
                    &__saved_ebp + eax_11 - 0x108, 0x104 - eax_11)
                edi = &var_10c
        
        *(arg3 + 8)
        int128_t** lParam = sub_57caf0(*(arg3 + 0x14), *var_110, *(arg3 + 4), edi, *(arg3 + 0xc))
        
        if (SendMessageA(*(data_26a6554 + 0x18), 0x19a, arg4, lParam) == 0xffffffff)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        LRESULT lParam_1 = var_110
        LRESULT wParam = SendMessageA(*(data_26a6554 + 0x14), 0x18f, 0, lParam_1)
        
        if (wParam == 0xffffffff)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        LRESULT eax_17 = SendMessageA(*(data_26a6554 + 0x14), 0x19a, wParam, lParam)
        HWND hWnd = *(data_26a6554 + 0x14)
        var_110 = eax_17
        RedrawWindow(hWnd, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        
        if (eax_17 == 0xffffffff)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        void* eax_20 = data_26a6554
        
        if (lParam_1 == *(eax_20 + 4))
            *(eax_20 + 4) = lParam
        
        sub_57cb70(lParam_1)
        result = var_110
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
