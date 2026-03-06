// 函数名称: sub_685dc0
// 虚拟地址: 0x685dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_685dc0(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_2c = edi
    char* var_24 = nullptr
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x1c)
    
    if (arg4 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    if (arg3 != 0 && arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t var_18_1 = 0x42
    char* var_1c_1 = arg2
    var_24 = arg2
    
    if (arg3 u<= 0x3fffffff)
        var_20 = arg3 * 2
    else
        var_20 = 0x7fffffff
    
    int32_t result = arg1(&var_24, arg4, arg5, arg6)
    
    if (arg2 == 0)
        return result
    
    if (result s>= 0)
        int32_t temp0_1 = var_20
        var_20 -= 1
        
        if (temp0_1 - 1 s< 0)
            char** var_34_2 = &var_24
            
            if (sub_5ad3b0(nullptr) != 0xffffffff)
                goto label_685e7f
        else
            *var_24 = 0
            var_24 = &var_24[1]
        label_685e7f:
            int32_t temp1_1 = var_20
            var_20 -= 1
            
            if (temp1_1 - 1 s>= 0)
                *var_24 = 0
                return result
            
            char** var_34_3 = &var_24
            
            if (sub_5ad3b0(nullptr) != 0xffffffff)
                return result
    
    bool cond:0_1 = var_20 s>= 0
    *(arg2 + (arg3 << 1) - 2) = 0
    int32_t eax_8
    eax_8.b = cond:0_1
    return eax_8 - 2
}
