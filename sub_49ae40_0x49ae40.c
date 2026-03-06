// 函数名称: sub_49ae40
// 虚拟地址: 0x49ae40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_49ae40(char* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    data_c02200 += 1
    float arg_4
    int32_t* esi = arg_4
    
    if (esi[6].b == 0)
        int32_t* var_18_1 = esi
        *(&esi[arg1 * 0x2d] + 0xb5) = sub_49c8f0(sub_4929c0(), esi, arg1, 2)
    
    char eax = *(&esi[arg1 * 0x2d] + 0x25)
    long double x87_r7
    
    if (eax == 0)
        x87_r7 = float.t(0)
    else if (eax != 1)
        x87_r7 = float.t(1)
    else
        x87_r7 = fconvert.t(0.5f)
    
    arg_4 = fconvert.s(x87_r7)
    long double x87_r7_1 = fconvert.t((sub_4c95c0() & 0x7fffff) | 0x3f800000)
    void* eax_5 = *esi
    int128_t* ecx_7
    int32_t* ebx_1
    int32_t* edi_2
    int32_t* var_24_1
    int32_t* var_20_1
    int32_t var_1c_1
    int32_t var_18_3
    
    if (eax_5 == 0 || (*(eax_5 + 0x241c) & 2) == 0 || esi[6].b != 0)
        long double x87_r7_3 = fconvert.t(fconvert.s(x87_r7_1 - fconvert.t(1.0)))
        long double x87_r6_1 = fconvert.t(arg_4)
        x87_r6_1 - x87_r7_3
        eax_5.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        float eax_12
        
        if (p_1 || esi[6].b != 0)
            edi_2 = arg3
            ebx_1 = arg4
            eax_12, ecx_7 = sub_49a840(edi_2, arg2, ebx_1, esi, arg1, arg5, arg6, arg7, arg8, arg9)
            arg_4 = eax_12
        else
            var_18_3 = arg9
            var_1c_1 = arg8
            var_20_1 = arg6
            var_24_1 = arg5
        label_49af1d:
            edi_2 = arg3
            ebx_1 = arg4
            eax_12, ecx_7 =
                sub_49a3a0(arg2, ebx_1, arg7, esi, arg1, edi_2, var_24_1, var_20_1, var_1c_1, var_18_3)
            arg_4 = eax_12
    else
        int32_t* eax_6 = sub_419230()
        
        if (sub_49abb0(eax_6, esi, arg2) == 0)
            var_18_3 = arg9
            var_1c_1 = arg8
            var_20_1 = arg6
            var_24_1 = arg5
            goto label_49af1d
        
        ebx_1 = arg4
        edi_2 = arg3
        float eax_9
        eax_9, ecx_7 = sub_49aca0(edi_2, eax_6, esi, arg5, arg6)
        arg_4 = eax_9
        sub_4192d0()
    int32_t* var_18_5 = arg5
    return sub_49a6c0(arg6, ebx_1, ecx_7, esi, arg1, arg2, &arg_4, edi_2)
}
