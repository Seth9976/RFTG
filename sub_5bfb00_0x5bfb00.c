// 函数名称: sub_5bfb00
// 虚拟地址: 0x5bfb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bfb00(int32_t* arg1, int32_t arg2, void* arg3, int16_t arg4, int32_t* arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int128_t* eax = sub_5bf220(arg1, &var_8, 0x40, nullptr)
    
    if (var_8 + 5 u> 0xffff)
        zip_error_set(arg5, 0x12, 0)
        return 0
    
    char* eax_4 = sub_5c0ee0(0, var_8 + 5, 0)
    
    if (eax_4 == 0)
        zip_error_set(arg5, 0xe, eax_4)
        return 0
    
    sub_5c11e0(eax_4, 1)
    sub_5c10d0(eax_4, sub_5bf100(arg1))
    sub_5c1000(eax_4, eax, var_8)
    
    if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(eax_4) == 0)
        zip_error_set(arg5, 0x14, 0)
        sub_5c0c20(eax_4)
        return 0
    
    int128_t* eax_10 = zip_error_code_system(eax_4)
    int32_t* result = sub_5c15c0(arg4, sub_5c0fd0(eax_4), eax_10, 0x300)
    sub_5c0c20(eax_4)
    return result
}
