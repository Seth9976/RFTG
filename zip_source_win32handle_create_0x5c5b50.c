// 函数名称: zip_source_win32handle_create
// 虚拟地址: 0x5c5b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_win32handle_create(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg1 == 0xffffffff || arg5 s< 0xffffffff || (arg5 s<= 0xffffffff && arg4 u< 0xffffffff))
    if (arg1 == 0xffffffff || arg5 s< 0xffffffff || (arg5 s<= 0xffffffff && arg4 u< 0xffffffff))
        zip_error_set(arg6, 0x12, 0)
        return 0
    
    int32_t* eax = sub_5a881a(0x88)
    
    if (eax == 0)
        zip_error_set(arg6, 0xe, 0)
        return 0
    
    eax[8] = arg1
    eax[7] = 0
    eax[6] = 0
    eax[0x1a] = arg2
    eax[0x1b] = arg3
    int32_t eax_4
    int32_t ecx_2
    
    if (arg5 s> 0 || (arg5 s>= 0 && arg4 u>= 0))
        eax_4 = arg2 + arg4
        ecx_2 = adc.d(arg3, arg5, arg2 + arg4 u< arg2)
    else
        eax_4 = 0
        ecx_2 = 0
    
    eax[0x1c] = eax_4
    eax[0x1d] = ecx_2
    eax[9] = 1
    zip_stat_init(&eax[0xa])
    eax[0x20] = 0
    eax[0x21] = 0xffffffff
    zip_error_init(eax)
    int32_t var_1c_1 = 0xffffffff
    int32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = zip_source_make_command_bitmap(0xe, 7)
    eax[4] = eax_5 | 0x3f
    eax[5] = edx_1
    
    if (eax[7] == 0)
        if (GetFileType(eax[8]) == FILE_TYPE_DISK)
            eax[4] = 0x40ff
            eax[5] = 0
    else
        HANDLE eax_8 = (*4)(eax)
        enum FILE_TYPE eax_9
        
        if (eax_8 != 0xffffffff)
            eax_9 = GetFileType(eax_8)
        
        if (eax_8 == 0xffffffff || eax_9 == FILE_TYPE_DISK)
            eax[4] = 0xffff
            eax[5] = 0
        
        if (eax_8 != 0xffffffff)
            CloseHandle(eax_8)
    
    int32_t* result = zip_source_function_create(sub_5c5360, eax, arg6)
    
    if (result != 0)
        return result
    
    __free_base(eax[7])
    __free_base(eax)
    return nullptr
}
