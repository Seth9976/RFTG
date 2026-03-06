// 函数名称: sub_5c5990
// 虚拟地址: 0x5c5990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c5990(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9, int32_t* arg10)
{
    // 第一条实际指令: if (arg2 == 0xffffffff && arg1 == 0)
    if (arg2 == 0xffffffff && arg1 == 0)
        zip_error_set(arg10, 0x12, arg1)
        return 0
    
    int32_t* eax_2 = sub_5a881a(0x88)
    
    if (eax_2 == 0)
        zip_error_set(arg10, 0xe, eax_2)
        return 0
    
    eax_2[7] = 0
    
    if (arg1 != 0)
        int32_t eax_5 = (*arg9)(arg1)
        eax_2[7] = eax_5
        
        if (eax_5 == 0)
            zip_error_set(arg10, 0xe, eax_5)
            __free_base(eax_2)
            return 0
    
    eax_2[6] = arg9
    eax_2[8] = arg2
    eax_2[0x1a] = arg3
    eax_2[0x1b] = arg4
    int32_t eax_8
    int32_t ecx_3
    
    if (arg6 s> 0 || (arg6 s>= 0 && arg5 u>= 0))
        eax_8 = arg3 + arg5
        ecx_3 = adc.d(arg4, arg6, arg3 + arg5 u< arg3)
    else
        eax_8 = 0
        ecx_3 = 0
    
    eax_2[0x1c] = eax_8
    eax_2[0x1d] = ecx_3
    int32_t eax_9 = 1
    
    if (eax_2[7] == 0)
        eax_9 = arg7
    
    eax_2[9] = eax_9
    
    if (arg8 == 0)
        zip_stat_init(&eax_2[0xa])
    else
        __builtin_memcpy(&eax_2[0xa], arg8, 0x40)
        eax_2[0xa] &= 0xfffffffe
        eax_2[0xc] = 0
        eax_2[0xb] = 0
    
    eax_2[0x20] = 0
    eax_2[0x21] = 0xffffffff
    zip_error_init(eax_2)
    int32_t var_18_1 = 0xffffffff
    int32_t eax_11
    int32_t edx_4
    eax_11, edx_4 = zip_source_make_command_bitmap(0xe, 7)
    eax_2[4] = eax_11 | 0x3f
    eax_2[5] = edx_4
    
    if (eax_2[7] == 0)
        if (GetFileType(eax_2[8]) == FILE_TYPE_DISK)
            eax_2[4] = 0x40ff
            eax_2[5] = 0
    else
        HANDLE eax_13 = arg9[1](eax_2)
        enum FILE_TYPE eax_14
        
        if (eax_13 != 0xffffffff)
            eax_14 = GetFileType(eax_13)
        
        if (eax_13 == 0xffffffff || eax_14 == FILE_TYPE_DISK)
            eax_2[4] = 0xffff
            eax_2[5] = 0
        
        if (eax_13 != 0xffffffff)
            CloseHandle(eax_13)
    
    int32_t* result = zip_source_function_create(sub_5c5360, eax_2, arg10)
    
    if (result != 0)
        return result
    
    __free_base(eax_2[7])
    __free_base(eax_2)
    return nullptr
}
