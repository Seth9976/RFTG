// 函数名称: sub_4cbb70
// 虚拟地址: 0x4cbb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4cbb70(void* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 8)
    int32_t* eax = *(arg1 + 8)
    void* edi = arg3
    long double x87_r7_1
    
    if (eax == 0)
        x87_r7_1 = float.t(0)
    else
        int32_t edx
        eax, arg3, edx = sub_418560(*eax)
        x87_r7_1 = fconvert.t(*(arg1 + 0x1c)) * fconvert.t(eax)
        int32_t var_c_1 = edx
    
    int32_t ebx
    ebx.b = 0
    long double x87_r7_3 = fconvert.t(*(edi + 0xc)) + fconvert.t(fconvert.s(x87_r7_1))
    long double x87_r5_1 = fconvert.t(*(edi + 0x18))
    x87_r5_1 - x87_r7_3
    eax.w = (x87_r5_1 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax:1.b & 1) != 0)
        long double x87_r6_1 = fconvert.t(*(edi + 0xc))
        long double x87_r5_2 = float.t(0)
        x87_r5_2 - x87_r6_1
        eax.w = (x87_r5_2 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            int32_t eax_3
            eax_3.b = true
            return 1
    else
        ebx.b = 1
    
    void* var_24 = arg3
    sub_4cb8b0(arg1, edi, fconvert.s(x87_r7_3))
    *(edi + 8) += arg4
    int32_t result
    result.b = ebx.b == 0
    return result
}
