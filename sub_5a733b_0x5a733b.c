// 函数名称: sub_5a733b
// 虚拟地址: 0x5a733b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a733b(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_2c = edi
    char* var_24 = nullptr
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    
    if (arg2 == 0 || arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    char* var_1c_1 = arg1
    var_24 = arg1
    var_20 = 0x7fffffff
    int32_t var_18_1 = 0x42
    void arg_c
    uint32_t result = sub_5ad547(&var_24, arg2, nullptr, &arg_c)
    int32_t temp0_1 = var_20
    var_20 -= 1
    
    if (temp0_1 - 1 s< 0)
        char** var_34_2 = &var_24
        sub_5ad3b0(nullptr)
    else
        *var_24 = 0
    
    return result
}
