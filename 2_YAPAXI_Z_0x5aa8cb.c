// 函数名称: ??2@YAPAXI@Z
// 虚拟地址: 0x5aa8cb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t??2@YAPAXI@Z(uint32_t arg1)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    do
        int32_t result = sub_5a881a(arg1)
        
        if (result != 0)
            return result
        
        i = __callnewh(arg1)
    while (i != 0)
    
    if ((data_bec5dc & 1) == 0)
        data_bec5dc.d |= 1
        int32_t var_18_3 = 1
        char const* const var_8 = "bad allocation"
        sub_5aa94b(&data_bec5d0, &var_8)
        data_bec5d0 = &std::bad_alloc::`vftable'{for `std::exception'}
        _atexit(sub_6adafa)
    
    struct std::exception::VTable* var_14
    std::exception::exception(&var_14, &data_bec5d0)
    var_14 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_5ab41b(&var_14, 0x8aa7b8)
    noreturn
}
