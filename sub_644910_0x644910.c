// 函数名称: sub_644910
// 虚拟地址: 0x644910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_644910(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, uint32_t arg9)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 8)
    int32_t ecx = *(arg2 + 8)
    int32_t eax_1 = *(arg2 + 0xc)
    int32_t esi_1 = (0x10000 - arg6) * arg1
    int32_t i_3 = (arg4 << 0x10) - arg1 * arg5
    char* var_8 = *(arg3 + 0x14)
    int32_t ebx_2 = *(arg3 + 0x10) - *(arg3 + 8) * 4
    int32_t ecx_2 = (ecx - *(arg3 + 8)) << 0xf
    int32_t edx_2 = (eax_1 - *(arg3 + 0xc)) << 0xf
    int32_t i_2 = 0
    
    if (arg9 == 0)
        if (*(arg3 + 0xc) s> 0)
            void* ebx_43 = arg2
            uint32_t edi_44 = arg4 * arg5 + esi_1 + ecx_2
            int32_t eax_37 = i_3 - arg4 * arg6 + edx_2
            arg9 = edi_44
            int32_t ecx_23 = eax_37
            arg4 = eax_37
            
            while (true)
                int32_t i = 0
                uint32_t esi_8 = edi_44
                int32_t edi_45 = ecx_23
                
                if (*(arg3 + 8) s> 0)
                    do
                        int32_t edx_22 = sx.d((esi_8 s>> 0x10).w)
                        int32_t ecx_28 = sx.d((edi_45 s>> 0x10).w)
                        
                        if (arg7 != 0)
                            edx_22 = *(ebx_43 + 8) - edx_22 - 1
                            ebx_43 = arg2
                        
                        if (arg8 != 0)
                            ecx_28 = *(ebx_43 + 0xc) - ecx_28 - 1
                            ebx_43 = arg2
                        
                        if (edx_22 s>= 0 && ecx_28 s>= 0 && edx_22 s< *(ebx_43 + 8)
                                && ecx_28 s< *(ebx_43 + 0xc))
                            int32_t* edx_23 = *(ebx_43 + 0x10) * ecx_28 + (edx_22 << 2)
                            ebx_43 = arg2
                            *var_8 = *(edx_23 + *(ebx_43 + 0x14))
                        
                        esi_8 += arg6
                        edi_45 += arg5
                        var_8 = &var_8[4]
                        i += 1
                    while (i s< *(arg3 + 8))
                
                var_8 = &var_8[ebx_2]
                arg9 += neg.d(arg5)
                ecx_23 = arg4 + arg6
                i_3 = i_2 + 1
                i_2 = i_3
                arg4 = ecx_23
                
                if (i_3 s>= *(arg3 + 0xc))
                    break
                
                edi_44 = arg9
    else if (*(arg3 + 0xc) s> 0)
        void* ebx_5 = arg2
        int32_t esi_2 = arg6
        int32_t edi_15 = arg4 * arg5 + esi_1 + ecx_2
        int32_t var_20 = i_3 - arg4 * esi_2 + edx_2
        void* eax_6 = arg3
        int32_t var_2c_1 = edi_15
        int32_t i_1
        
        do
            int32_t ecx_5 = var_20
            int32_t var_18_1 = edi_15
            int32_t var_1c_1 = ecx_5
            int32_t j_1 = 0
            
            if (*(eax_6 + 8) s> 0)
                int32_t j
                
                do
                    int32_t edi_17 = var_18_1 s>> 0x10
                    int32_t ecx_6 = ecx_5 s>> 0x10
                    
                    if (arg7 != 0)
                        edi_17 = ecx - 1 - edi_17
                    
                    if (arg8 != 0)
                        ecx_6 = eax_1 - 1 - ecx_6
                    
                    if (edi_17 s> 0xffffffff && ecx_6 s> 0xffffffff && edi_17 s< *(ebx_5 + 8) - 1
                            && ecx_6 s< *(ebx_5 + 0xc) - 1)
                        int32_t eax_8
                        int32_t edx_11
                        edx_11:eax_8 = sx.q(*(ebx_5 + 0x10))
                        int32_t esi_4 = ((edx_11 & 3) + eax_8) s>> 2
                        int32_t ecx_7 = *(ebx_5 + 0x14)
                        int32_t eax_11 = esi_4 * ecx_6 + edi_17
                        int32_t ebx_6 = *(ecx_7 + (eax_11 << 2))
                        int32_t edx_13 = *(ecx_7 + (eax_11 << 2) + 4)
                        int32_t edi_18 = ecx_7 + (eax_11 << 2)
                        int32_t ecx_8 = *(edi_18 + (esi_4 << 2) + 4)
                        int32_t esi_5 = *(edi_18 + (esi_4 << 2))
                        int32_t var_c_1 = ebx_6
                        arg4 = esi_5
                        
                        if (arg7 != 0)
                            int32_t eax_12 = ebx_6
                            ebx_6 = edx_13
                            arg4 = ecx_8
                            ecx_8 = esi_5
                            esi_5 = arg4
                            var_c_1 = ebx_6
                            edx_13 = eax_12
                        
                        if (arg8 != 0)
                            int32_t edi_19 = ebx_6
                            int32_t eax_13 = edx_13
                            ebx_6 = esi_5
                            edx_13 = ecx_8
                            var_c_1 = ebx_6
                            arg4 = edi_19
                            ecx_8 = eax_13
                        
                        uint32_t eax_15 = zx.d(var_1c_1.w)
                        uint32_t eax_16 = zx.d(ebx_6.b)
                        uint32_t esi_7 = zx.d(var_18_1.w)
                        uint32_t eax_17 = zx.d(arg4.b)
                        uint32_t edi_25 =
                            zx.d((((zx.d(edx_13.b) - eax_16) * esi_7) s>> 0x10).b + eax_16.b)
                        *var_8 = (((zx.d((((zx.d(ecx_8.b) - eax_17) * esi_7) s>> 0x10).b + eax_17.b)
                            - edi_25) * eax_15) s>> 0x10).b + edi_25.b
                        uint32_t eax_21 = zx.d((var_c_1 u>> 8).b)
                        uint32_t eax_24 = zx.d((arg4 u>> 8).b)
                        uint32_t edi_31 =
                            zx.d((((zx.d((edx_13 u>> 8).b) - eax_21) * esi_7) s>> 0x10).b + eax_21.b)
                        var_8[1] = (((
                            zx.d((((zx.d((ecx_8 u>> 8).b) - eax_24) * esi_7) s>> 0x10).b + eax_24.b)
                            - edi_31) * eax_15) s>> 0x10).b + edi_31.b
                        uint32_t eax_28 = zx.d((var_c_1 u>> 0x10).b)
                        uint32_t eax_31 = zx.d((arg4 u>> 0x10).b)
                        uint32_t edi_37 =
                            zx.d((((zx.d((edx_13 u>> 0x10).b) - eax_28) * esi_7) s>> 0x10).b + eax_28.b)
                        uint32_t eax_33 = var_c_1 u>> 0x18
                        uint32_t eax_35 = arg4 u>> 0x18
                        esi_2 = arg6
                        eax_6 = arg3
                        uint32_t edx_19 =
                            zx.d(((((edx_13 u>> 0x18) - eax_33) * esi_7) s>> 0x10).b + eax_33.b)
                        var_8[2] = (((
                            zx.d((((zx.d((ecx_8 u>> 0x10).b) - eax_31) * esi_7) s>> 0x10).b + eax_31.b)
                            - edi_37) * eax_15) s>> 0x10).b + edi_37.b
                        ebx_5 = arg2
                        var_8[3] = (((
                            zx.d(((((ecx_8 u>> 0x18) - eax_35) * esi_7) s>> 0x10).b + eax_35.b)
                            - edx_19) * eax_15) s>> 0x10).b + edx_19.b
                    
                    ecx_5 = var_1c_1 + arg5
                    var_18_1 += esi_2
                    var_8 = &var_8[4]
                    j = j_1 + 1
                    var_1c_1 = ecx_5
                    j_1 = j
                while (j s< *(eax_6 + 8))
                edi_15 = var_2c_1
            
            var_8 = &var_8[ebx_2]
            edi_15 += neg.d(arg5)
            var_20 += esi_2
            i_1 = i_2 + 1
            i_2 = i_1
            var_2c_1 = edi_15
        while (i_1 s< *(eax_6 + 0xc))
        return eax_6
    
    return i_3
}
