// 函数名称: sub_644d00
// 虚拟地址: 0x644d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_644d00(int32_t arg1, void* arg2 @ edi, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t edx = *(arg2 + 8)
    int32_t edx = *(arg2 + 8)
    int32_t ecx_3 = (*(arg3 + 0xc) - *(arg2 + 0xc)) << 0xf
    char* var_8 = *(arg2 + 0x14)
    int32_t eax_2 = *(arg2 + 0x10)
    int32_t var_2c = eax_2 * *(arg2 + 0xc)
    int32_t ebx_2 = (*(arg3 + 8) - edx) << 0xf
    uint32_t var_30 = zx.d(sub_644220(arg3))
    char* var_34 = var_8
    int32_t i = sub_5cd100()
    int32_t i_1 = 0
    
    if (*(arg2 + 0xc) s> 0)
        int32_t edx_2 = neg.d(arg5)
        int32_t ecx_13 = arg4 * arg5 + (0x10000 - arg6) * arg1 + ebx_2
        int32_t ebx_3 = arg6
        int32_t var_1c_1 = edx_2
        int32_t var_18_1 = ecx_13
        arg4 = (arg4 << 0x10) - arg1 * arg5 - arg4 * ebx_3 + ecx_3
        
        do
            int32_t eax_8 = arg4
            int32_t esi_5 = ecx_13
            int32_t var_c_1 = eax_8
            int32_t j_1 = 0
            
            if (*(arg2 + 8) s> 0)
                int32_t j
                
                do
                    int32_t ecx_14 = sx.d((esi_5 s>> 0x10).w)
                    int32_t eax_10 = sx.d((eax_8 s>> 0x10).w)
                    
                    if (arg7 != 0)
                        ecx_14 = *(arg3 + 8) - ecx_14 - 1
                    
                    if (arg8 != 0)
                        eax_10 = *(arg3 + 0xc) - eax_10 - 1
                    
                    if (ecx_14 s>= 0 && eax_10 s>= 0 && ecx_14 s< *(arg3 + 8)
                            && eax_10 s< *(arg3 + 0xc))
                        eax_10.b = (*(arg3 + 0x10) * eax_10 + *(arg3 + 0x14))[ecx_14]
                        *var_8 = eax_10.b
                    
                    ebx_3 = arg6
                    eax_8 = var_c_1 + arg5
                    var_8 = &var_8[1]
                    j = j_1 + 1
                    esi_5 += ebx_3
                    var_c_1 = eax_8
                    j_1 = j
                while (j s< *(arg2 + 8))
                ecx_13 = var_18_1
                edx_2 = var_1c_1
            
            var_8 = &var_8[eax_2 - edx]
            arg4 += ebx_3
            i = i_1 + 1
            ecx_13 += edx_2
            i_1 = i
            var_18_1 = ecx_13
        while (i s< *(arg2 + 0xc))
    
    return i
}
