// 函数名称: sub_64b8e0
// 虚拟地址: 0x64b8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64b8e0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    void* esi = *(arg1 + 0x68)
    void* eax_1 = *(arg1 + 0x40)
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* edi = *(eax_1 + 0x68)
    void* eax_2 = *(eax_1 + 4)
    void* eax_3 = *(eax_2 + 0x1c)
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 =
        sub_686950(mxcsr, x87control, fconvert.d(fconvert.t(*(edi + 0x70)) + fconvert.t(0.5)))
    int32_t ebx = sub_685f40(st0)
    int32_t var_c = ebx
    int32_t eax_6 = sub_68b1a0(*(esi + (ebx << 2) + 0xc))
    int32_t eax_7 = *(arg1 + 0x1c)
    int32_t esi_4 = eax_6 * 8
    int32_t ecx_2
    
    if (eax_7 == 0)
        ecx_2 = *(edi + 0x60)
    else
        ecx_2 = *(edi + 0x68) * *(edi + 0x60)
    
    int32_t var_10
    
    if (eax_7 == 0)
        var_10 = *(edi + 0x64)
    else
        var_10 = *(edi + 0x68) * *(edi + 0x64)
    
    int32_t eax_9 = *(eax_3 + (eax_7 << 2)) s>> 1
    int32_t eax_11 = sub_685f40(float.t(*(eax_3 + 0xd2c)) * fconvert.t(*(eax_3 + 0xd30)))
    int32_t var_20 = eax_11
    
    if (*(edi + 0x50) == 0)
        if (*(edi + 0x78) == 0)
            *(edi + 0x78) = arg1
        
        return 
    
    int32_t i_3 = *(edi + 0x5c)
    *(edi + 0x78) = arg1
    double var_50_1
    
    if (i_3 s> 0)
        int32_t i_2
        int32_t i
        
        if (*(arg1 + 0x1c) == 0)
            i_2 = i_3
            i = i_3
        else
            i = *(edi + 0x68) * i_3
            i_2 = i
        
        int32_t edx_5 = *(edi + 0x54) - i + esi_4
        double var_3c_1 = fconvert.d(fconvert.t(15.0) / fconvert.t(*(eax_3 + 0xd38)))
        
        if (edx_5 s<= eax_11)
            if (edx_5 s< eax_11 && ebx + 1 s< 0xf)
                void* var_24_2 = esi + (ebx << 2) + 0xc
                
                for (; esi_4 s< i; i = i_2)
                    if (*(edi + 0x54) - i + esi_4 s>= eax_11)
                        break
                    
                    void* eax_19 = var_24_2 + 4
                    var_24_2 = eax_19
                    var_50_1:4.d = *eax_19
                    ebx += 1
                    esi_4 = sub_68b1a0() * 8
                    
                    if (ebx s>= 0xe)
                        break
                    
                    eax_11 = var_20
                
                var_c = ebx
        else if (ebx s> 0)
            int32_t* var_24_1 = esi + (ebx << 2) + 0xc
            
            for (; esi_4 s> i; i = i_2)
                if (*(edi + 0x54) - i + esi_4 s<= eax_11)
                    break
                
                int32_t* eax_15 = var_24_1 - 4
                var_24_1 = eax_15
                var_50_1:4.d = *eax_15
                ebx -= 1
                esi_4 = sub_68b1a0() * 8
                
                if (ebx s<= 0)
                    break
                
                eax_11 = var_20
            
            var_c = ebx
        
        double var_34_1 = fconvert.d(float.t(*(eax_2 + 8)))
        int16_t x87control_2
        long double st0_1
        st0_1, x87control_2 = sub_686950(mxcsr, x87control_1, 
            fconvert.d(float.t(var_c) - fconvert.t(*(edi + 0x70)) + fconvert.t(0.5)))
        long double x87_r6_1 = fconvert.t(fconvert.d(float.t(eax_9)))
        long double x87_r5_1 = fconvert.t(var_34_1)
        long double x87_r7_14 = st0_1 / x87_r6_1 * x87_r5_1
        long double x87_r4_1 = fconvert.t(var_3c_1)
        long double x87_r3_2 = fneg(x87_r4_1)
        x87_r3_2 - x87_r7_14
        
        if ((((x87_r3_2 < x87_r7_14 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_2, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r3_2 == x87_r7_14 ? 1 : 0) << 0xe | 0x1800):1.b & 0x41) != 0)
            x87_r4_1 = x87_r3_2
        
        x87_r4_1 - x87_r7_14
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r5_1 = x87_r4_1
        
        long double x87_r7_17 = x87_r7_14 / x87_r5_1 * x87_r6_1 + fconvert.t(*(edi + 0x70))
        *(edi + 0x70) = fconvert.d(x87_r7_17)
        ebx = sub_685f40(sub_686950(mxcsr, x87control_2, fconvert.d(x87_r7_17 + fconvert.t(0.5))))
        esi_4 = sub_68b1a0(*(esi + (ebx << 2) + 0xc)) * 8
    
    if (*(edi + 0x60) s> 0 && esi_4 s< ecx_2)
        *(edi + 0x58)
        
        if (esi_4 - ecx_2 + *(edi + 0x58) s< 0)
            int32_t* eax_28 = esi + (ebx << 2) + 0xc
            
            while (true)
                ebx += 1
                
                if (ebx s>= 0xf)
                    break
                
                var_50_1:4.d = eax_28[1]
                esi_4 = sub_68b1a0() * 8
                *(edi + 0x58)
                
                if (esi_4 - ecx_2 + *(edi + 0x58) s>= 0)
                    break
                
                eax_28 = &eax_28[1]
    
    if (*(edi + 0x64) s> 0 && esi_4 s> var_10 && esi_4 - var_10 + *(edi + 0x58) s> *(eax_3 + 0xd2c))
        int32_t* eax_34 = esi + (ebx << 2) + 0xc
        
        while (true)
            int32_t temp2_1 = ebx
            ebx -= 1
            
            if (temp2_1 - 1 s< 0)
                goto label_64bbd7
            
            var_50_1:4.d = *(eax_34 - 4)
            esi_4 = sub_68b1a0() * 8
            
            if (esi_4 - var_10 + *(edi + 0x58) s<= *(eax_3 + 0xd2c))
                break
            
            eax_34 -= 4
    
    int32_t eax_47
    
    if (ebx s>= 0)
        int32_t eax_51
        int32_t edx_27
        edx_27:eax_51 = sx.q(ecx_2 - *(edi + 0x58) + 7)
        
        if (ebx s>= 0xf)
            ebx = 0xe
        
        *(edi + 0x7c) = ebx
        var_50_1:4.d = *(esi + (ebx << 2) + 0xc)
        int32_t eax_53
        int32_t ecx_20
        eax_53, ecx_20 = sub_68b1a0()
        int32_t i_1 = (((edx_27 & 7) + eax_51) s>> 3) - eax_53
        
        while (i_1 s> 0)
            var_50_1:4.d = 8
            var_50_1.d = 0
            i_1 -= 1
            sub_68b1d0(*(esi + (ebx << 2) + 0xc), 0x800000000)
        
        var_50_1:4.d = *(esi + (ebx << 2) + 0xc)
        eax_47 = sub_68b1a0()
        goto label_64bc8b
    
    label_64bbd7:
    int32_t eax_41 = *(eax_3 + 0xd2c) - *(edi + 0x58)
    *(edi + 0x7c) = 0
    int32_t eax_43
    int32_t edx_24
    edx_24:eax_43 = sx.q(eax_41 + var_10)
    var_50_1:4.d = *(esi + 0xc)
    int32_t ebx_2 = ((edx_24 & 7) + eax_43) s>> 3
    
    if (sub_68b1a0() s> ebx_2)
        var_50_1:4.d = ebx_2 << 3
        var_50_1.d = *(esi + 0xc)
        sub_68aec0(var_50_1)
        eax_47 = sub_68b1a0(*(esi + 0xc))
    label_64bc8b:
        esi_4 = eax_47 * 8
    
    if (*(edi + 0x60) s> 0 || *(edi + 0x64) s> 0)
        if (var_10 s> 0 && esi_4 s> var_10)
            *(edi + 0x58) += esi_4 - var_10
        else if (ecx_2 s<= 0 || esi_4 s>= ecx_2)
            int32_t eax_57 = *(edi + 0x58)
            
            if (eax_57 s<= var_20)
                if (ecx_2 s<= 0)
                    *(edi + 0x58) = var_20
                else
                    int32_t eax_61 = eax_57 - ecx_2 + esi_4
                    *(edi + 0x58) = eax_61
                    
                    if (eax_61 s> var_20)
                        *(edi + 0x58) = var_20
            else if (var_10 s<= 0)
                *(edi + 0x58) = var_20
            else
                int32_t eax_59 = eax_57 - var_10 + esi_4
                *(edi + 0x58) = eax_59
                
                if (eax_59 s< var_20)
                    *(edi + 0x58) = var_20
        else
            *(edi + 0x58) += esi_4 - ecx_2
    
    int32_t ecx_25 = *(edi + 0x5c)
    
    if (ecx_25 s<= 0)
        return 
    
    if (*(arg1 + 0x1c) != 0)
        *(edi + 0x54) += esi_4 - *(edi + 0x68) * ecx_25
        return 
    
    *(edi + 0x54) += esi_4 - ecx_25
}
