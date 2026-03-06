// 函数名称: sub_4c6fd0
// 虚拟地址: 0x4c6fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4c6fd0(int32_t** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cbe9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 3
    sub_5041e0(&arg1[0x14])
    var_8_1.b = 2
    sub_5041e0(&arg1[0x11])
    var_8_1.b = 1
    int32_t* result = sub_5041e0(&arg1[0xe])
    
    if (arg1[7] != 0)
        sub_40ae70(&arg1[7])
        result = arg1[7]
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&arg1[7], 0, 0x14)
        arg1[0xd] = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if (*arg1 != 0)
        sub_4c9480(arg1)
        result = *arg1
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(arg1, 0, 0x14)
        arg1[6] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
