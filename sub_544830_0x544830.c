// 函数名称: sub_544830
// 虚拟地址: 0x544830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_544830(float arg1, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: void* ecx = data_307882c
    void* ecx = data_307882c
    long double x87_r7 = fconvert.t(*(ecx + 0x4230))
    long double x87_r6 = fconvert.t(arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    long double x87_r6_1 = fconvert.t(arg4)
    long double x87_r5_1 = fconvert.t(arg3)
    long double x87_r4 = fconvert.t(arg2)
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        long double x87_r3_1 = fconvert.t(*(ecx + 0x4234))
        x87_r4 - x87_r3_1
        eax.w = (x87_r4 < x87_r3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r4 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r3_2 = fconvert.t(*(ecx + 0x4238))
            x87_r5_1 - x87_r3_2
            eax.w = (x87_r5_1 < x87_r3_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r3_2) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r3_2 ? 1 : 0) << 0xe | 0x2000
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                long double x87_r3_3 = fconvert.t(*(ecx + 0x423c))
                x87_r6_1 - x87_r3_3
                eax.w = (x87_r6_1 < x87_r3_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r3_3) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r3_3 ? 1 : 0) << 0xe | 0x2000
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    return eax
    
    glClearColor(fconvert.s(x87_r7), fconvert.s(x87_r4), fconvert.s(x87_r5_1), fconvert.s(x87_r6_1))
    void* eax_1 = data_307882c
    *(eax_1 + 0x4230) = fconvert.s(fconvert.t(arg1))
    *(eax_1 + 0x4234) = fconvert.s(fconvert.t(arg2))
    *(eax_1 + 0x4238) = fconvert.s(fconvert.t(arg3))
    *(eax_1 + 0x423c) = fconvert.s(fconvert.t(arg4))
    return eax_1
}
