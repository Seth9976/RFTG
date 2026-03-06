// 函数名称: sub_4e9480
// 虚拟地址: 0x4e9480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4e9480(float* arg1, float* arg2 @ esi)
{
    // 第一条实际指令: long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(arg1[4]) - fconvert.t(*arg1))) * fconvert.t(fconvert.s(fconvert.t(arg1[9]) - fconvert.t(arg1[1]))) - fconvert.t(fconvert.s(fconvert.t(arg1[5]) - fconvert.t(arg1[1]))) * fconvert.t(fconvert.s(fconvert.t(arg1[8]) - fconvert.t(*arg1)))
    long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(arg1[4]) - fconvert.t(*arg1)))
        * fconvert.t(fconvert.s(fconvert.t(arg1[9]) - fconvert.t(arg1[1])))
        - fconvert.t(fconvert.s(fconvert.t(arg1[5]) - fconvert.t(arg1[1])))
        * fconvert.t(fconvert.s(fconvert.t(arg1[8]) - fconvert.t(*arg1)))
    long double x87_r7_21 = fconvert.t(fconvert.s(fconvert.t(arg2[4]) - fconvert.t(*arg2)))
        * fconvert.t(fconvert.s(fconvert.t(arg2[9]) - fconvert.t(arg2[1])))
        - fconvert.t(fconvert.s(fconvert.t(arg2[5]) - fconvert.t(arg2[1])))
        * fconvert.t(fconvert.s(fconvert.t(arg2[8]) - fconvert.t(*arg2)))
    long double x87_r7_22 = float.t(0)
    long double x87_r6_4 = fconvert.t(fconvert.s(x87_r7_10))
    x87_r6_4 - x87_r7_22
    int32_t* eax
    eax.w = (x87_r6_4 < x87_r7_22 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_22) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_22 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(fconvert.s(x87_r7_21))
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        x87_r5 - x87_r7_22
        eax.w = (x87_r5 < x87_r7_22 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_22) ? 1 : 0) << 0xa
            | (x87_r5 == x87_r7_22 ? 1 : 0) << 0xe | 0x2800
    
    if (p || (eax:1.b & 0x41) != 0)
        x87_r6_4 - x87_r7_22
        eax.w = (x87_r6_4 < x87_r7_22 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_22) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_22 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax:1.b & 0x41) == 0)
            x87_r5 - x87_r7_22
            eax.w = (x87_r5 < x87_r7_22 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r5 == x87_r7_22 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                eax.b = 1
                return 
        
        eax = arg1[0x12]
        int32_t ecx = arg2[0x12]
        
        if (eax == ecx || eax == 0 || ecx == 0)
            eax.b = 0
            return 
        
        float eax_1
        float edx_1
        eax_1, edx_1 = sub_418560(eax)
        float edx_2
        eax, edx_2 = sub_418560(arg2[0x12])
        long double x87_r7_24 = fconvert.t(eax_1)
        long double x87_r6_6 = fconvert.t(eax)
        x87_r6_6 - x87_r7_24
        eax.w = (x87_r6_6 < x87_r7_24 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_24) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_24 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            long double x87_r7_25 = fconvert.t(edx_1)
            long double x87_r6_7 = fconvert.t(edx_2)
            x87_r6_7 - x87_r7_25
            eax.w = (x87_r6_7 < x87_r7_25 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, x87_r7_25) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_25 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (not(p_3))
                eax.b = 0
                return 
    
    eax.b = 1
}
