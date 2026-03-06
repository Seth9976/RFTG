// 函数名称: sub_568ee0
// 虚拟地址: 0x568ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_568ee0(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    float* esi = arg1
    int32_t var_10 = 0
    float* var_c = esi
    int32_t var_8 = 0
    int32_t ecx = 1
    int32_t eax_7
    
    while (true)
        int32_t edi_2 = (ecx - 1) & 1
        long double x87_r6_1
        
        if (edi_2 == 0)
            x87_r6_1 = fconvert.t(*arg2)
        else
            x87_r6_1 = fconvert.t(arg2[3])
        
        long double x87_r6_2
        
        if (((ecx - 1).b & 2) == 0)
            x87_r6_2 = fconvert.t(arg2[1])
        else
            x87_r6_2 = fconvert.t(arg2[4])
        
        long double x87_r6_3
        
        if (((ecx - 1).b & 4) == 0)
            x87_r6_3 = fconvert.t(arg2[2])
        else
            x87_r6_3 = fconvert.t(arg2[5])
        
        long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(esi[1]) * fconvert.t(fconvert.s(x87_r6_2))
            + fconvert.t(*esi) * fconvert.t(fconvert.s(x87_r6_1))
            + fconvert.t(esi[2]) * fconvert.t(fconvert.s(x87_r6_3)))) + fconvert.t(esi[3])))
        x87_r6_10 - x87_r7
        int32_t eax
        eax.w = (x87_r6_10 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_10, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            var_8 += 1
        
        int32_t esi_2 = (ecx - 2) & 1
        long double x87_r6_11
        
        if (esi_2 == 0)
            x87_r6_11 = fconvert.t(*arg2)
        else
            x87_r6_11 = fconvert.t(arg2[3])
        
        long double x87_r6_12
        
        if ((ecx.b & 2) == 0)
            x87_r6_12 = fconvert.t(arg2[1])
        else
            x87_r6_12 = fconvert.t(arg2[4])
        
        long double x87_r6_13
        
        if ((ecx.b & 4) == 0)
            x87_r6_13 = fconvert.t(arg2[2])
        else
            x87_r6_13 = fconvert.t(arg2[5])
        
        long double x87_r6_20 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(var_c[1]) * fconvert.t(fconvert.s(x87_r6_12))
            + fconvert.t(*var_c) * fconvert.t(fconvert.s(x87_r6_11))
            + fconvert.t(var_c[2]) * fconvert.t(fconvert.s(x87_r6_13)))) + fconvert.t(var_c[3])))
        x87_r6_20 - x87_r7
        float* eax_1
        eax_1.w = (x87_r6_20 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_20, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_20 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            var_8 += 1
        
        long double x87_r6_21
        
        if (edi_2 == 0)
            x87_r6_21 = fconvert.t(*arg2)
        else
            x87_r6_21 = fconvert.t(arg2[3])
        
        long double x87_r6_22
        
        if (((ecx.b + 1) & 2) == 0)
            x87_r6_22 = fconvert.t(arg2[1])
        else
            x87_r6_22 = fconvert.t(arg2[4])
        
        long double x87_r6_23
        
        if (((ecx.b + 1) & 4) == 0)
            x87_r6_23 = fconvert.t(arg2[2])
        else
            x87_r6_23 = fconvert.t(arg2[5])
        
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(var_c[1]) * fconvert.t(fconvert.s(x87_r6_22))
            + fconvert.t(*var_c) * fconvert.t(fconvert.s(x87_r6_21))
            + fconvert.t(var_c[2]) * fconvert.t(fconvert.s(x87_r6_23)))) + fconvert.t(var_c[3]))) - x87_r7
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            var_8 += 1
        
        long double x87_r6_31
        
        if (esi_2 == 0)
            x87_r6_31 = fconvert.t(*arg2)
        else
            x87_r6_31 = fconvert.t(arg2[3])
        
        long double x87_r6_32
        
        if (((ecx - 2).b & 2) == 0)
            x87_r6_32 = fconvert.t(arg2[1])
        else
            x87_r6_32 = fconvert.t(arg2[4])
        
        long double x87_r6_33
        
        if (((ecx.b + 2) & 4) == 0)
            x87_r6_33 = fconvert.t(arg2[2])
        else
            x87_r6_33 = fconvert.t(arg2[5])
        
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(var_c[1]) * fconvert.t(fconvert.s(x87_r6_32))
            + fconvert.t(*var_c) * fconvert.t(fconvert.s(x87_r6_31))
            + fconvert.t(var_c[2]) * fconvert.t(fconvert.s(x87_r6_33)))) + fconvert.t(var_c[3]))) - x87_r7
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_4))
            var_8 += 1
        
        ecx += 4
        
        if (ecx - 1 s< 8)
            esi = var_c
        else
            if (var_8 == 8)
                int32_t eax_5
                eax_5.b = 0
                return eax_5
            
            var_c = &var_c[4]
            eax_7 = var_10 + 1
            var_10 = eax_7
            
            if (eax_7 s>= 6)
                break
            
            esi = var_c
            var_8 = 0
            ecx = 1
    
    eax_7.b = 1
    return eax_7
}
