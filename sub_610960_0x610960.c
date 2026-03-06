// 函数名称: sub_610960
// 虚拟地址: 0x610960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_610960(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (arg3 != esi[1] && sub_610210(esi, arg3) s< 0)
        return 0xffffffff
    
    int32_t var_18 = 0
    int32_t var_1c = 0
    int32_t ebx_1
    
    if (*arg2 != 0 || arg2[1] != 0)
    label_610a09:
        void* eax_8 = esi[0xf]
        var_18 = 1
        uint32_t var_14
        int32_t var_10
        int32_t var_c
        int32_t var_8
        
        if (eax_8 == 0)
            sub_5d7350(arg3, &var_14, &var_10, &var_c, &var_8, &arg1)
            char* eax_13 = sub_5d6810(arg6, arg4, arg5, var_14, arg7, var_10, var_c, var_8, arg1)
            esi[0xf] = eax_13
            
            if (eax_13 == 0)
                return 0xffffffff
        else
            *(eax_8 + 8) = arg4
            *(esi[0xf] + 0xc) = arg5
            *(esi[0xf] + 0x14) = arg6
            *(esi[0xf] + 0x10) = arg7
        
        ebx_1 = arg3
        
        if (esi[0xe] == 0)
            sub_5d7350(ebx_1, &var_14, &var_10, &var_c, &var_8, &arg1)
            int32_t* var_54_2 = arg1
            char* eax_17 = sub_5d6670(0, esi[2], esi[3], var_14, var_10, var_c, var_8)
            esi[0xe] = eax_17
            
            if (eax_17 == 0)
                return 0xffffffff
        
        void* eax_19 = esi[0xe]
        arg6 = *(eax_19 + 0x14)
        arg7 = *(eax_19 + 0x10)
    else
        int32_t ecx_1 = arg2[2]
        
        if (ecx_1 s< esi[2])
            goto label_610a09
        
        int32_t eax_4 = arg2[3]
        
        if (eax_4 s< esi[3])
            goto label_610a09
        
        if (ecx_1 != arg4 || eax_4 != arg5)
            if (arg4 != ecx_1 * 2 || arg5 != eax_4 * 2)
                goto label_610a09
            
            var_1c = 1
            ebx_1 = arg3
        else
            ebx_1 = arg3
    
    int32_t eax_6 = *esi
    int32_t ecx_3
    int32_t edi_1
    
    if (eax_6 u> 0x55595659)
        if (eax_6 == 0x56555949)
            ecx_3 = esi[0xb]
            edi_1 = esi[0xd]
            arg3 = esi[0xc]
        else
            if (eax_6 != 0x59565955)
                sub_5cce60("Unsupported YUV format in copy")
                return 0xffffffff
            
            ecx_3 = esi[0xb] + 1
            edi_1 = ecx_3 + 1
            arg3 = ecx_3 - 1
    else if (eax_6 == 0x55595659)
        ecx_3 = esi[0xb]
        edi_1 = ecx_3 + 1
        arg3 = ecx_3 + 3
    else if (eax_6 == 0x32315659)
        ecx_3 = esi[0xb]
        edi_1 = esi[0xc]
        arg3 = esi[0xd]
    else
        if (eax_6 != 0x32595559)
            sub_5cce60("Unsupported YUV format in copy")
            return 0xffffffff
        
        ecx_3 = esi[0xb]
        edi_1 = ecx_3 + 3
        arg3 = ecx_3 + 1
    
    uint32_t ebx_2
    
    if (ebx_1 == 0 || (ebx_1 & 0xf0000000) == 0x10000000)
        ebx_2 = zx.d(ebx_1.b)
    else if (ebx_1 == 0x32595559 || ebx_1 == 0x59565955 || ebx_1 == 0x55595659)
        ebx_2 = 2
    else
        ebx_2 = 1
    
    uint32_t temp0 = divu.dp.d(0:arg7, ebx_2)
    int32_t edx_14 = esi[2]
    
    if (var_1c == 0)
        esi[7](esi[5], esi[6], ecx_3, edi_1, arg3, arg6, esi[3], edx_14, temp0 - edx_14)
    else
        esi[8](esi[5], esi[6], ecx_3, edi_1, arg3, arg6, esi[3], edx_14, temp0 - edx_14 * 2)
    
    if (var_18 != 0)
        int32_t edx_20 = arg2[1]
        int32_t var_2c = *arg2
        int32_t var_28_1 = edx_20
        int32_t var_24_1 = arg2[2]
        int32_t var_20_1 = arg2[3]
        sub_603900(esi[0xe], &var_2c, esi[0xf], nullptr)
    
    return 0
}
