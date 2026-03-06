// 函数名称: sub_5a95d7
// 虚拟地址: 0x5a95d7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a95d7(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg3)
    void* var_c
    char var_8
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != arg1.b)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    char* esi_1 = arg2
    
    if (esi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0x7fffffff
    
    uint32_t result
    
    if (*(var_14 + 0x14) != 0)
        void* ebx_1 = arg1 - esi_1
        int32_t edi
        int32_t var_20_2 = edi
        uint32_t eax_6
        uint32_t eax_8
        
        do
            eax_6 = sub_5a9f5e(zx.d(*(ebx_1 + esi_1)), &var_14)
            eax_8 = sub_5a9f5e(zx.d(*esi_1), &var_14)
            esi_1 = &esi_1[1]
            
            if (eax_6 == 0)
                break
        while (eax_6 == eax_8)
        
        result = eax_6 - eax_8
    else
        result = sub_5a959e(arg1, esi_1)
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd
    
    return result
}
