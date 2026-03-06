// 函数名称: sub_5a9697
// 虚拟地址: 0x5a9697
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a9697(char* arg1, char* arg2)
{
    // 第一条实际指令: if (data_bec5e8 != 0)
    if (data_bec5e8 != 0)
        return sub_5a95d7(arg1, arg2, nullptr)
    
    if (arg1 != 0 && arg2 != 0)
        return sub_5a959e(arg1, arg2) __tailcall
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff
}
