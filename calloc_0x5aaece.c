// 函数名称: _calloc
// 虚拟地址: 0x5aaece
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")_calloc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8 = 0
    int32_t result = sub_5b629e(arg4, arg5, &var_8)
    
    if (result == 0 && var_8 != result && __errno() != 0)
        void* eax_1 = __errno()
        *eax_1 = var_8
    
    return result
}
