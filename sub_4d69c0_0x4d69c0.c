// 函数名称: sub_4d69c0
// 虚拟地址: 0x4d69c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d69c0(int32_t* arg1)
{
    // 第一条实际指令: void* edx = data_27e7fcc
    void* edx = data_27e7fcc
    int32_t* edi = arg1
    
    if (*(edi + 0x56) != 0)
        int32_t ecx_1 = edi[9]
        
        if (ecx_1 != 0)
            long double x87_r7_3 =
                fconvert.t(fconvert.s(fconvert.t(*(edx + 0x4c)) - fconvert.t(edi[0xa])))
            long double x87_r6_1 = fconvert.t(edi[0xb])
            x87_r6_1 - x87_r7_3
            arg1.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                if (ecx_1 == 1)
                    (*(*data_27e7fd8 + 0x24))(edi)
                    *(edi + 0x56) = 0
                    return 
                
                if (ecx_1 != 2)
                    sub_4c5870("Halt", &data_83f3d3, "Sound.cpp", 0x27a, "SoundUpdateInstance")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                long double x87_r7_4 = fconvert.t(edi[0xd])
                edi[9] = 0
                edi[0xe] = fconvert.s(x87_r7_4)
    
    if (edi[9] != 0)
        float var_c_2 = fconvert.s(fconvert.t(edi[0xc]))
        float var_8_1 = fconvert.s(fconvert.t(edi[0xd]))
        long double x87_r6_2 = float.t(0)
        long double x87_r7_15 = float.t(0)
        long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(*(edx + 0x4c)) - fconvert.t(edi[0xa]))) - x87_r6_2))
            / fconvert.t(fconvert.s(fconvert.t(edi[0xb]) - x87_r6_2))))
        x87_r6_6 - x87_r7_15
        arg1.w = (x87_r6_6 < x87_r7_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_15) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_15 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x41}
        long double x87_r7_16
        
        if (p_2)
            long double x87_r6_7 = float.t(1)
            x87_r6_7 - x87_r7_15
            arg1.w = (x87_r6_7 < x87_r7_15 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_15 ? 1 : 0) << 0xe | 0x3800
            bool p_3 = unimplemented  {test ah, 0x41}
            
            if (p_3)
                long double x87_r5_2 = fconvert.t(var_c_2)
                x87_r7_16 = x87_r7_15 * (fconvert.t(var_8_1) - x87_r5_2) + x87_r5_2
            else
                x87_r7_16 = fconvert.t(var_8_1)
        else
            x87_r7_16 = fconvert.t(var_c_2)
        
        edi[0xe] = fconvert.s(fconvert.t(fconvert.s(x87_r7_16)))
    
    int32_t eax_2
    long double st0
    st0, eax_2 = sub_4d65f0(edi)
    long double x87_r7_20 = fconvert.t(edi[0x11])
    long double x87_r6_11 = fconvert.t(fconvert.s(st0))
    x87_r6_11 - x87_r7_20
    eax_2.w = (x87_r6_11 < x87_r7_20 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_11, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_11 == x87_r7_20 ? 1 : 0) << 0xe | 0x3000
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        int32_t* ecx_3 = data_27e7fd8
        edi[0x11] = fconvert.s(x87_r7_20)
        int32_t* var_18_2 = ecx_3
        (*(*ecx_3 + 0x1c))(edi, fconvert.s(x87_r7_20))
    
    (*(*data_27e7fd8 + 0x18))(edi)
    
    if ((*(*data_27e7fd8 + 0x10))(edi) != 0)
        *(edi + 0x56) = 0
        sub_4d61b0(edi)
}
