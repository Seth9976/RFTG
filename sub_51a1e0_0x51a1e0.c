// 函数名称: sub_51a1e0
// 虚拟地址: 0x51a1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_51a1e0(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(arg3, &rect)
    RECT rect_1
    GetWindowRect(arg3, &rect_1)
    void* eax_2 = data_27e7fd0
    int32_t edx = *(eax_2 + 0x14)
    int32_t eax_3 = *(eax_2 + 0x18)
    int32_t edi_2 = rect_1.bottom - rect.bottom - rect_1.top
    int32_t esi_3 = rect_1.right - rect.right - rect_1.left
    int32_t* entry_ebx
    int32_t eax_6 = entry_ebx[3] - entry_ebx[1] - edi_2
    int32_t ecx_2 = entry_ebx[2] - *entry_ebx - esi_3
    float var_30 = fconvert.s(float.t(edx) / float.t(eax_3))
    int32_t var_30_2
    int32_t ecx_3
    int32_t eax_7
    long double x87_r7_2
    
    if (arg4 == 1 || arg4 == 2)
        x87_r7_2 = fconvert.t(var_30)
    label_51a29e:
        var_30_2 = ecx_2
        long double x87_r7_7 = float.t(0)
        long double x87_r6_5 = fconvert.t(fconvert.s(float.t(ecx_2) / x87_r7_2))
        x87_r6_5 - x87_r7_7
        eax_7.w = (x87_r6_5 < x87_r7_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_7) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            ecx_3 = sub_685f40(x87_r7_7 + fconvert.t(0.5))
        else
            ecx_3 = sub_685f40(x87_r7_7 - fconvert.t(0.5))
    else
        x87_r7_2 = fconvert.t(var_30)
        
        if (arg4 != 3 && arg4 != 6)
            long double x87_r6_3 = fconvert.t(fconvert.s(float.t(ecx_2) / float.t(eax_6)))
            x87_r6_3 - x87_r7_2
            eax_7.w = (x87_r6_3 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
        
        if (arg4 != 3 && arg4 != 6 && (eax_7:1.b & 0x41) != 0)
            goto label_51a29e
        
        long double x87_r7_4 = float.t(0)
        long double x87_r6_4 = fconvert.t(fconvert.s(x87_r7_2 * float.t(eax_6)))
        x87_r6_4 - x87_r7_4
        eax_7.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
        bool p = unimplemented  {test ah, 0x5}
        long double x87_r7_5
        
        if (p)
            x87_r7_5 = x87_r7_4 + fconvert.t(0.5)
        else
            x87_r7_5 = x87_r7_4 - fconvert.t(0.5)
        
        ecx_3 = eax_6
        var_30_2 = sub_685f40(x87_r7_5)
    int32_t eax_13
    int32_t edx_1
    edx_1:eax_13 = sx.q(var_30_2 - edx)
    
    if ((eax_13 ^ edx_1) - edx_1 s< 0xa)
        var_30_2 = edx
        ecx_3 = eax_3
    
    if (arg4 == 1 || arg4 == 7 || arg4 == 4)
        *entry_ebx = entry_ebx[2] - var_30_2 - esi_3
    else
        entry_ebx[2] = *entry_ebx + var_30_2 + esi_3
    
    if (arg4 == 4 || arg4 == 3 || arg4 == 5)
        entry_ebx[1] = entry_ebx[3] - ecx_3 - edi_2
    else
        entry_ebx[3] = entry_ebx[1] + ecx_3 + edi_2
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
