// 函数名称: sub_5b8117
// 虚拟地址: 0x5b8117
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b8117(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_38 = edi
    int32_t __saved_ebx = 0x16
    void var_20
    void* var_40 = &var_20
    int32_t var_30
    __fltout2(*arg1, arg1[1], &var_30)
    int32_t result
    
    if (arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x16
    else if (arg3 != 0)
        int32_t eax_5 = 0xffffffff
        
        if (arg3 != 0xffffffff)
            int32_t ecx_1
            ecx_1.b = var_30 == 0x2d
            eax_5 = arg3 - ecx_1
        
        void* eax_7
        eax_7.b = var_30 == 0x2d
        int32_t var_2c
        int32_t edx_1
        result, edx_1 = sub_5bb253(eax_7 + arg2, eax_5, var_2c + arg4, &var_30)
        
        if (result == 0)
            result = sub_5b8014(&var_30, edx_1, arg2, arg3, arg4, 0, arg5)
        else
            *arg2 = 0
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x16
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
