// 函数名称: sub_5a950e
// 虚拟地址: 0x5a950e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a950e(char* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: char* var_24 = nullptr
    char* var_24 = nullptr
    int32_t edi
    int32_t var_28 = edi
    void* var_20
    __builtin_memset(&var_20, 0, 0x1c)
    
    if (arg1 == 0 || arg3 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    void* eax_2 = _strlen(arg1)
    int32_t var_18 = 0x49
    char* var_1c = arg1
    var_24 = arg1
    var_20 = 0x7fffffff
    
    if (eax_2 u<= 0x7fffffff)
        var_20 = eax_2
    
    return arg2(&var_24, arg3, arg4, arg5)
}
