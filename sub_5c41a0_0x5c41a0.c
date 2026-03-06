// 函数名称: sub_5c41a0
// 虚拟地址: 0x5c41a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c41a0(void* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg2 == 0 || (arg3 != 8 && arg3 != 0xffffffff && arg3 != 0xfffffffe))
    if (arg2 == 0 || (arg3 != 8 && arg3 != 0xffffffff && arg3 != 0xfffffffe))
        zip_error_set(arg1 + 8, 0x12, 0)
        return 0
    
    int32_t* eax = sub_5a881a(0x2058)
    
    if (eax == 0)
        zip_error_set(arg1 + 8, 0xe, eax)
        return nullptr
    
    zip_error_init(eax)
    eax[3].b = 0
    *(eax + 0xe) = 0
    char eax_3
    
    if (arg3 == 0xffffffff || arg3 == 0xfffffffe)
        eax_3 = 1
    else
        eax_3 = 0
    
    *(eax + 0xd) = eax_3
    int32_t eax_5 = arg4 & 1
    
    if (eax_5 != 0)
        eax[4] = 9
    
    void* (* eax_6)(int32_t* arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t arg5, 
        int32_t arg6) = sub_5c4000
    
    if (eax_5 == 0)
        eax_6 = sub_5c3e50
    
    int32_t* result = sub_5c3a00(arg1, arg2, eax_6, eax)
    
    if (result != 0)
        return result
    
    __free_base(eax)
    return 0
}
