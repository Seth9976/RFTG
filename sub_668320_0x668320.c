// 函数名称: sub_668320
// 虚拟地址: 0x668320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_668320(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before cHRM")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid cHRM after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((eax_2 & 2) != 0)
        sub_664100(arg1, "Out of place cHRM chunk")
    
    if (arg2 != 0)
        int32_t eax_5 = *(arg2 + 8)
        
        if ((eax_5.b & 4) != 0 && (eax_5 & 0x800) == 0)
            sub_664100(arg1, "Duplicate cHRM chunk")
            int32_t eax_6 = sub_667b40(arg1, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
    
    if (arg3 != 0x20)
        sub_664100(arg1, "Incorrect cHRM chunk length")
        int32_t eax_7 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_7
    
    char var_28
    sub_664410(arg1, &var_28, 0x20)
    sub_662280(arg1, &var_28, 0x20)
    int32_t var_1a4 = 0
    char* var_1a8 = arg1
    uint32_t eax_8 = sub_667b40(var_1a8, var_1a4)
    
    if (eax_8 == 0)
        char var_27
        char var_26
        char var_25
        uint32_t eax_15 =
            (((((zx.d(var_28) << 8) + zx.d(var_27)) << 8) + zx.d(var_26)) << 8) + zx.d(var_25)
        uint32_t esi_2 = 0xffffffff
        uint32_t var_154_1 = eax_15
        
        if (eax_15 u> 0x7fffffff)
            var_154_1 = 0xffffffff
        
        char var_24
        char var_23
        char var_22
        char var_21
        uint32_t eax_22 =
            (((((zx.d(var_24) << 8) + zx.d(var_23)) << 8) + zx.d(var_22)) << 8) + zx.d(var_21)
        uint32_t var_15c_1 = eax_22
        
        if (eax_22 u> 0x7fffffff)
            var_15c_1 = 0xffffffff
        
        char var_20
        char var_1f
        char var_1e
        char var_1d
        uint32_t eax_29 =
            (((((zx.d(var_20) << 8) + zx.d(var_1f)) << 8) + zx.d(var_1e)) << 8) + zx.d(var_1d)
        uint32_t var_158_1 = eax_29
        
        if (eax_29 u> 0x7fffffff)
            var_158_1 = 0xffffffff
        
        char var_1c
        char var_1b
        char var_1a
        char var_19
        uint32_t eax_36 =
            (((((zx.d(var_1c) << 8) + zx.d(var_1b)) << 8) + zx.d(var_1a)) << 8) + zx.d(var_19)
        uint32_t var_160_1
        uint32_t edx_7
        
        if (eax_36 u> 0x7fffffff)
            var_160_1 = 0xffffffff
            edx_7 = 0xffffffff
        else
            edx_7 = eax_36
            var_160_1 = edx_7
        
        char var_18
        char var_17
        char var_16
        char var_15
        uint32_t eax_43 =
            (((((zx.d(var_18) << 8) + zx.d(var_17)) << 8) + zx.d(var_16)) << 8) + zx.d(var_15)
        uint32_t var_164_1
        uint32_t ecx_17
        
        if (eax_43 u> 0x7fffffff)
            var_164_1 = 0xffffffff
            ecx_17 = 0xffffffff
        else
            ecx_17 = eax_43
            var_164_1 = ecx_17
        
        char var_14
        char var_13
        char var_12
        char var_11
        uint32_t eax_50 =
            (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)
        uint32_t var_168
        uint32_t edi_4
        
        if (eax_50 u> 0x7fffffff)
            var_168 = 0xffffffff
            edi_4 = 0xffffffff
        else
            edi_4 = eax_50
            var_168 = edi_4
        
        char var_10
        char var_f
        char var_e
        char var_d
        uint32_t eax_57 =
            (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
        uint32_t var_16c_1
        
        if (eax_57 u> 0x7fffffff)
            var_16c_1 = 0xffffffff
        else
            esi_2 = eax_57
            var_16c_1 = esi_2
        
        char var_c
        char var_b
        char var_a
        char var_9
        uint32_t eax_64 = (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)
        uint32_t ebx_7
        
        ebx_7 = eax_64 u> 0x7fffffff ? 0xffffffff : eax_64
        
        if (var_154_1 == 0xffffffff || var_15c_1 == 0xffffffff || var_158_1 == 0xffffffff
                || edx_7 == 0xffffffff || ecx_17 == 0xffffffff || edi_4 == 0xffffffff
                || esi_2 == 0xffffffff || ebx_7 == 0xffffffff)
            eax_8 = sub_664100(arg1, "Ignoring cHRM chunk with negative chromaticities")
        else
            if (arg2 == 0 || (*(arg2 + 8) & 0x800) == 0)
                if (arg1[0x252] == 0)
                    uint32_t var_140_1 = ecx_17
                    uint32_t var_144_1 = edx_7
                    uint32_t var_138_1 = esi_2
                    uint32_t var_148 = var_158_1
                    uint32_t var_134_1 = ebx_7
                    uint32_t var_12c_1 = var_15c_1
                    __builtin_memcpy(&var_1a8, &var_148, 0x20)
                    int32_t var_14c
                    
                    if (sub_663ce0(arg1, &var_14c) != 0)
                        int32_t var_178
                        int32_t eax_77
                        int80_t st0_1
                        st0_1, eax_77 = sub_662c80(&var_178, var_148, 0x8000, 0x186a0)
                        
                        if (eax_77 == 0 || var_178 u> 0x8000)
                            sub_664320(arg1, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t var_174
                        int32_t eax_78
                        int80_t st0_2
                        st0_2, eax_78 = sub_662c80(&var_174, edi_4, 0x8000, 0x186a0)
                        
                        if (eax_78 == 0 || var_174 u> 0x8000)
                            sub_664320(arg1, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t var_17c
                        int32_t eax_80
                        int80_t st0_3
                        st0_3, eax_80 = sub_662c80(&var_17c, var_154_1, 0x8000, 0x186a0)
                        
                        if (eax_80 == 0)
                            sub_664320(arg1, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t esi_3 = var_17c
                        
                        if (esi_3 u> 0x8000)
                            sub_664320(arg1, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t ecx_26 = var_174
                        int32_t eax_81 = var_178
                        int32_t edx_16 = esi_3 + ecx_26 + eax_81
                        
                        if (edx_16 s> 0x8001)
                            sub_664320(arg1, "internal error handling cHRM->XYZ")
                            noreturn
                        
                        int32_t edx_17
                        
                        if (edx_16 s> 0x8000)
                            edx_17 = 0xffffffff
                        label_6688e8:
                            
                            if (eax_81 s> ecx_26)
                                if (eax_81 s< esi_3)
                                    esi_3 += edx_17
                                    var_17c = esi_3
                                else
                                    eax_81 += edx_17
                                    var_178 = eax_81
                            else if (ecx_26 s>= esi_3)
                                ecx_26 += edx_17
                                var_174 = ecx_26
                            else if (eax_81 s< ecx_26 || eax_81 s< esi_3)
                                esi_3 += edx_17
                                var_17c = esi_3
                            else
                                eax_81 += edx_17
                                var_178 = eax_81
                        else if (edx_16 s< 0x8000)
                            edx_17 = 1
                            goto label_6688e8
                        
                        if (esi_3 + ecx_26 + eax_81 != 0x8000)
                            sub_664320(arg1, "internal error handling cHRM coefficients")
                            noreturn
                        
                        *(arg1 + 0x254) = eax_81.w
                        *(arg1 + 0x256) = ecx_26.w
                    
                    ecx_17 = var_164_1
                    edx_7 = var_160_1
                    edi_4 = var_168
                    esi_2 = var_16c_1
                
                var_1a8 = var_154_1
                void* eax_85 = sub_664500(arg1, arg2, var_1a8, var_15c_1, var_158_1, edx_7, ecx_17, 
                    edi_4, esi_2, ebx_7)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_85
            
            if (var_154_1 - 0x763e u<= 0x7d0 && var_15c_1 - 0x7c9c u<= 0x7d0)
                eax_8 = var_158_1 - 0xf618
            
            if (var_154_1 - 0x763e u> 0x7d0 || var_15c_1 - 0x7c9c u> 0x7d0 || eax_8 u> 0x7d0
                    || edx_7 - 0x7d00 u> 0x7d0 || ecx_17 - 0x7148 u> 0x7d0 || edi_4 - 0xe678 u> 0x7d0
                    || esi_2 - 0x36b0 u> 0x7d0 || ebx_7 s< 0x1388 || ebx_7 s> 0x1b58)
                void var_128
                sub_663f40(&var_128, 1, 5, var_154_1)
                int32_t var_1a0_1 = 5
                int32_t var_1a4_1 = 2
                var_1a8 = &var_128
                sub_663f40(var_1a8, var_1a4_1, var_1a0_1, var_15c_1)
                sub_663f40(&var_128, 3, 5, var_158_1)
                int32_t var_1c0 = 5
                int32_t var_1c4 = 4
                void* var_1c8 = &var_128
                sub_663f40(var_1c8, var_1c4, var_1c0, var_160_1)
                sub_663f40(&var_128, 5, 5, var_164_1)
                int32_t var_1a0_2 = 5
                int32_t var_1a4_2 = 6
                var_1a8 = &var_128
                sub_663f40(var_1a8, var_1a4_2, var_1a0_2, edi_4)
                sub_663f40(&var_128, 7, 5, esi_2)
                int32_t var_1c0_1 = 5
                int32_t var_1c4_1 = 8
                var_1c8 = &var_128
                sub_663f40(var_1c8, var_1c4_1, var_1c0_1, ebx_7)
                uint32_t eax_73 = sub_664180(arg1, &var_128, 
                    "Ignoring incorrect cHRM white(@1,@2) r(@3,@4)g(@5,@6)b(@7,@8) when sRGB is also present")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_73
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_8
}
