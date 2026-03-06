// 函数名称: sub_5a93bd
// 虚拟地址: 0x5a93bd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a93bd(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_28 = edi
    int32_t var_24 = 0
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    
    if (arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    var_20 = 0x7fffffff
    int32_t var_18 = 0x42
    int32_t var_1c = 0
    var_24 = 0
    return arg1(&var_24, arg2, arg3, arg4, var_24, var_20, var_1c, var_18)
}
