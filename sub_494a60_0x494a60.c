// 函数名称: sub_494a60
// 虚拟地址: 0x494a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_494a60(int32_t arg1 @ esi, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: int128_t* ecx
    int128_t* ecx
    int32_t i_6
    ecx, i_6 = __chkstk(0x2e58)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    data_c021e8 += 1
    long double x87_r7 = fconvert.t(-1.0)
    double var_2e4c = fconvert.d(x87_r7)
    int32_t eax_3 = arg2 * 0xb4
    int32_t i_8 = i_6
    int32_t var_2e44 = 0
    int32_t* entry_ebx
    
    if (*(ecx + 0x18) != 0)
        int16_t* eax_4 = eax_3 + ecx + 0xb0
        ecx.w = arg3
        *eax_4 += ecx.w
        *entry_ebx = 0
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return eax_4
    
    int32_t eax_5 = *entry_ebx
    void var_2e34
    int32_t var_52c[0x140]
    
    if (eax_5 s> 0x14)
        int32_t i_3 = 0
        int64_t var_f6c[0x148]
        
        if (eax_5 s> 0)
            int32_t i_9 = i_6
            int32_t i
            
            do
                int32_t var_10_1 = arg2
                int32_t eax_8
                char edx_1
                eax_8, edx_1 = sub_49dbf0(sub_48bb40(ecx, &var_2e34, i_6.b), i_9, &var_2e34, arg2, 1)
                long double st0_1
                st0_1, i_6 = sub_4904a0(eax_8, edx_1, &var_2e34, arg2)
                var_f6c[i_3] = fconvert.d(st0_1)
                i = i_3 + 1
                i_3 = i
                i_9 += 4
            while (i s< *entry_ebx)
            x87_r7 = fconvert.t(-1.0)
            i_6 = i_8
        
        int32_t ecx_5 = arg3.d
        int32_t i_1 = 0
        int32_t i_4 = 0
        
        if (ecx_5 s> 0)
            int32_t edi_1 = *entry_ebx
            
            do
                int32_t j_1 = 0xffffffff
                long double x87_r6_1 = x87_r7
                int32_t j = 0
                var_2e4c = fconvert.d(x87_r6_1)
                
                if (edi_1 s<= 0)
                    x87_r7 = x87_r6_1
                else
                    do
                        long double temp0_1 = fconvert.t(var_f6c[j])
                        x87_r6_1 - temp0_1
                        i_1.w = (x87_r6_1 < temp0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            x87_r7 = x87_r6_1
                            j_1 = j
                            x87_r6_1 = fconvert.t(var_f6c[j])
                        
                        j += 1
                    while (j s< *entry_ebx)
                    
                    i_1 = i_4
                    var_2e4c = fconvert.d(x87_r6_1)
                
                var_52c[i_1] = *(i_6 + (j_1 << 2))
                *entry_ebx = edi_1 - 1
                *(i_6 + (j_1 << 2)) = *(i_6 + ((edi_1 - 1) << 2))
                edi_1 = *entry_ebx
                i_1 += 1
                var_f6c[j_1] = fconvert.d(fconvert.t(var_f6c[edi_1]))
                i_4 = i_1
            while (i_1 s< arg3.d)
            
            ecx_5 = arg3.d
        
        if (ecx_5 s> 0)
            __builtin_memcpy(i_6, &var_52c, ecx_5 << 2)
            ecx_5 = arg3.d
        
        *entry_ebx = ecx_5
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return i_1
    
    if (eax_5 s> 5)
        do
            int32_t ecx_8 = arg3.d
            
            if (ecx_8 s<= 2)
                break
            
            int32_t eax_10 = *entry_ebx
            
            if (eax_10 - ecx_8 s<= 2)
                break
            
            int32_t i_11 = 0xffffffff
            var_2e4c = fconvert.d(x87_r7)
            int32_t i_7 = 0xffffffff
            int32_t i_5 = 0
            
            if (eax_10 s> 0)
                int32_t i_10 = i_6
                int32_t i_2
                
                do
                    int32_t var_10_3 = arg2
                    int32_t edx_5 = sub_49dbf0(
                        sub_49dbf0(sub_48bb40(ecx, &var_2e34, i_6.b), &var_52c, &var_2e34, arg2, 
                            var_2e44), 
                        i_10, &var_2e34, arg2, 1)
                    int32_t eax_14 = eax_3
                    int16_t var_2d84[0xf08]
                    *(&var_2d84 + eax_14) += arg3 - 1
                    char var_f74
                    
                    if (var_f74 == 1)
                        int32_t var_10_5 = 0
                        eax_14, edx_5 = sub_48bc70(&var_2e34, edx_5)
                    
                    int32_t eax_16
                    long double st0_2
                    st0_2, eax_16, i_6 = sub_4904a0(eax_14, edx_5.b, &var_2e34, arg2)
                    long double x87_r6_4 = fconvert.t(var_2e4c) - fconvert.t(9.9999999999999995e-07)
                    x87_r6_4 - st0_2
                    eax_16.w = (x87_r6_4 < st0_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, st0_2) ? 1 : 0) << 0xa
                        | (x87_r6_4 == st0_2 ? 1 : 0) << 0xe | 0x3800
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_2))
                        i_6 = i_5
                        var_2e4c = fconvert.d(st0_2)
                        i_7 = i_6
                    
                    i_10 += 4
                    i_2 = i_5 + 1
                    i_5 = i_2
                while (i_2 s< *entry_ebx)
                x87_r7 = fconvert.t(-1.0)
                i_11 = i_7
                i_6 = i_8
            
            int32_t esi_11 = *(i_6 + (i_11 << 2))
            *entry_ebx -= 1
            arg3.d -= 1
            var_52c[var_2e44] = esi_11
            var_2e44 += 1
            *(i_6 + (i_11 << 2)) = *(i_6 + (*entry_ebx << 2))
        while (*entry_ebx s> 5)
    
    var_2e4c = fconvert.d(x87_r7)
    int16_t top = 0
    int32_t var_10_7 = arg2
    int32_t esi_13 = var_2e44
    sub_49dbf0(sub_48bb40(ecx, &var_2e34, i_6.b), &var_52c, &var_2e34, arg2, esi_13)
    int32_t var_2e58
    int32_t eax_26
    
    if (*(ecx + 0x18) != 0 || ecx[0x1ec].b != 0xff || *(ecx + 0x1ec2) != 0)
        sub_494790(&var_2e34, arg2, i_8, *entry_ebx, arg3.d, 0, &var_2e58, &var_2e4c)
    else
        int32_t var_10_9 = 0x40000
        char var_14_4 = 0
        void* var_18_3 = &data_2609940
        data_26031d0 = 0
        data_2603c28 = 0
        data_2604680 = 0
        data_26050d8 = 0
        data_2605b30 = 0
        data_2606588 = 0
        data_2606fe0 = 0
        data_2607a38 = 0
        data_2608490 = 0
        data_2608ee8 = 0
        sub_5abfc0(var_18_3, var_14_4, var_10_9)
        double* var_10_10 = &var_2e4c
        int32_t ecx_15 = *entry_ebx
        int32_t* var_14_5 = &var_2e58
        int32_t var_18_4 = 0
        void* var_2c = &var_2e34
        data_27e7a98 = 0
        int80_t st0_3
        st0_3, eax_26 = sub_4949e0(var_2c, arg2, i_8, ecx_15, arg3.d, var_18_4, var_14_5)
        top = 0xffff
    
    unimplemented  {fld st0, qword [ebp-0x2e48]}
    unimplemented  {fld st0, qword [0x8a54b8]}
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_3 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    eax_26.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        char const* const var_10_12 = "Failed to find good discard set!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    int32_t edx_9 = var_2e58
    int32_t ecx_17 = 0
    
    if (edx_9 s>= 1)
        eax_26 = 1
        
        do
            if ((edx_9 & eax_26) != 0)
                var_52c[esi_13] = *(i_8 + (ecx_17 << 2))
                esi_13 += 1
            
            ecx_17 += 1
            eax_26 = 1 << ecx_17.b
        while (eax_26 s<= edx_9)
        
        var_2e44 = esi_13
    
    if (esi_13 s> 0)
        __builtin_memcpy(i_8, &var_52c, esi_13 << 2)
        esi_13 = var_2e44
    
    *entry_ebx = esi_13
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return eax_26
}
