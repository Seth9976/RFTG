// 函数名称: sub_496bd0
// 虚拟地址: 0x496bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_496bd0(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int128_t* edx
    ecx, edx = __chkstk(0x2418)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t ecx_2 = 0
    int32_t eax_4 = 0
    int32_t edx_2 = 1
    int32_t var_530[0x139]
    
    if (arg2 s> 0)
        do
            if ((arg3 & edx_2) != 0)
                var_530[ecx_2] = *(arg4 + (eax_4 << 2))
                ecx_2 += 1
            
            eax_4 += 1
            edx_2 = rol.d(edx_2, 1)
        while (eax_4 s< arg2)
    
    int32_t edx_3 = arg6 * 5
    void* eax_6 = *(edx + (edx_3 << 2) + 0x46c)
    int32_t result_1
    int32_t result
    char edx_4
    
    if (*(eax_6 + 6) != 2)
        result, edx_4 = sub_4a1730(arg7, arg5, edx, arg6, &var_530, ecx_2, arg7, arg8)
        result_1 = result
    else
        result, edx_4 = sub_49f150(eax_6, edx_3, arg5, arg6, &var_530, ecx_2)
        result_1 = result
    
    if (result s>= 0 && result s<= arg9)
        if (*(edx + 0x18) != 0)
            int32_t ecx_5 = data_c02124
            (&data_2602ea8)[ecx_5 * 2] = arg3
            (&data_2602eac)[ecx_5 * 2] = result
            data_c02124 = ecx_5 + 1
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return result
        
        char* var_14_2 = arg5
        void var_23f8
        sub_48bb40(edx, &var_23f8, edx_4)
        char* i = &arg5[1]
        
        if (i s< sx.d(*(edx + 0x458)))
            void* edi_1 = i * 0xb4 + edx + 0x60
            
            do
                uint32_t eax_10 = zx.d(*edi_1)
                
                if (eax_10.w != 0xffff)
                    if (*(*(edx + (edx_3 << 2) + 0x46c) + 6) != 2)
                        sub_4a5400(eax_10, 0xffffffff, i, &var_23f8, sx.d(eax_10.w), 0, 0)
                        int32_t j = sx.d(*edi_1)
                        int32_t j_1 = j
                        
                        do
                            j = sub_4a5e70(j, i, &var_23f8, j_1)
                        while (j != 0)
                    else
                        int32_t eax_11 = sx.d(eax_10.w)
                        sub_4a00b0(eax_11, i, &var_23f8, eax_11)
                
                i = &i[1]
                edi_1 += 0xb4
            while (i s< sx.d(*(edx + 0x458)))
        
        int32_t var_14_6 = arg12
        int32_t var_18_3 = arg11
        int32_t var_1c_3 = arg10
        result = sub_496b20(&var_23f8, arg5, arg6, ecx, arg4, arg2, arg7, arg8, arg9, result_1, 0, arg3)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
