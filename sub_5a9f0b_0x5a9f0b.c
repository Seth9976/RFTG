// 函数名称: sub_5a9f0b
// 虚拟地址: 0x5a9f0b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a9f0b(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: if (data_bec5e8 != 0)
    if (data_bec5e8 != 0)
        return sub_5a9e29(arg1, arg2, arg3, nullptr)
    
    if (arg1 != 0 && arg2 != 0 && arg3 u<= 0x7fffffff)
        return ___ascii_strnicmp(arg1, arg2, arg3) __tailcall
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff
}
