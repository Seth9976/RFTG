// 函数名称: sub_5645b0
// 虚拟地址: 0x5645b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5645b0(int32_t* arg1, int32_t* arg2 @ esi, float arg3)
{
    // 第一条实际指令: int32_t ebx = *(arg3 i+ 0x30)
    int32_t ebx = *(arg3 i+ 0x30)
    int32_t eax = *arg1
    int32_t ecx = arg1[1]
    int32_t var_c = sub_553f70(ebx) * eax
    int32_t eax_6
    int32_t* edx_1
    eax_6, edx_1 = sub_4cce80(sub_554170(ebx, arg3, eax))
    int32_t var_18 = eax_6
    int32_t* var_24 = &var_18
    char eax_8 = sub_564540(arg1, edx_1)
    
    if (eax_8 == 0)
        return eax_8
    
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*(arg3 i+ 0x4c))))
    long double x87_r6_2 = float.t(0)
    long double x87_r5_1 = fconvert.t(fconvert.s(float.t(eax) / x87_r6))
    x87_r5_1 - x87_r6_2
    long double x87_r4 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r5_2
    
    if (p)
        x87_r5_2 = x87_r5_1 + x87_r4
    else
        x87_r5_2 = x87_r5_1 - x87_r4
    
    int32_t edi_1 = sub_685f40(x87_r5_2)
    long double x87_r4_4 = fconvert.t(fconvert.s(float.t(ecx) / x87_r6))
    x87_r4_4 - x87_r6_2
    int32_t eax_9
    eax_9.w = (x87_r4_4 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_4, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r4_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r6_3
    
    if (p_1)
        x87_r6_3 = x87_r6_2 + x87_r4
    else
        x87_r6_3 = x87_r6_2 - x87_r4
    
    int32_t eax_10
    int32_t edx_2
    eax_10, edx_2 = sub_685f40(x87_r6_3)
    long double x87_r6_4 = float.t(1)
    x87_r6_4 - x87_r4_4
    int32_t ebx_2 = eax_10
    eax_10.w = (x87_r6_4 < x87_r4_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r4_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r4_4 ? 1 : 0) << 0xe
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2) || edi_1 s<= 0 || ebx_2 s<= 0)
        int32_t ecx_6 = var_18
        arg2[1] = ecx
        arg2[2] = ecx_6
        *arg2 = eax
        int32_t eax_18
        eax_18.b = 1
        return eax_18
    
    *arg2 = edi_1
    arg2[1] = ebx_2
    int32_t eax_13 = sub_4cce80(sub_554170(ebx, edx_2, edi_1))
    int32_t eax_15 = var_18
    int32_t ecx_5 = *arg2
    int32_t eax_16 = arg2[1]
    arg2[2] = eax_13
    sub_5a5ea0(eax_16, eax_13, ecx_5, eax_15, eax, ecx)
    int32_t eax_17
    eax_17.b = 1
    return eax_17
}
