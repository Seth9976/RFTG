// 函数名称: sub_5c37c0
// 虚拟地址: 0x5c37c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c37c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg2 == 0)
        if (arg3 != 0)
            *arg3 = arg2
        
        return 0
    
    uint32_t edx = 1
    void* ecx_1 = nullptr
    uint32_t var_8_1 = 1
    
    if (arg2 != 0)
        do
            uint32_t eax_5 = zx.d(*((zx.d(*(ecx_1 + arg1)) << 1) + &data_6b2c18))
            int32_t eax_6
            
            if (eax_5 u< 0x80)
                eax_6 = 1
            else if (eax_5 u>= 0x800)
                eax_6 = sbb.d(eax_5, eax_5, eax_5 u< 0x10000) + 4
            else
                eax_6 = 2
            
            ecx_1 += 1
            edx += eax_6
        while (ecx_1 u< arg2)
        
        var_8_1 = edx
    
    int32_t ebx
    int32_t var_10 = ebx
    int32_t result = sub_5a881a(edx)
    
    if (result == 0)
        zip_error_set(arg4, 0xe, result)
        return 0
    
    void* esi_1 = nullptr
    void* edi = nullptr
    
    if (arg2 u> 0)
        do
            int32_t eax_11 =
                sub_5c3720(zx.d(*((zx.d(*(esi_1 + arg1)) << 1) + &data_6b2c18)), arg1, edi + result)
            esi_1 += 1
            edi += eax_11
        while (esi_1 u< arg2)
    
    *(result + var_8_1 - 1) = 0
    
    if (arg3 != 0)
        *arg3 = var_8_1 - 1
    
    return result
}
