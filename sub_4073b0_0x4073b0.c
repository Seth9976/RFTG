// 函数名称: sub_4073b0
// 虚拟地址: 0x4073b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4073b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c64b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_307b634 != 0)
        sub_40ae70(&data_307b634)
        result = data_307b634
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_307b634, 0, 0x14)
        data_307b64c = 0
    
    if (data_307b618 != 0)
        sub_40adc0(&data_307b618)
        result = data_307b618
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_307b618, 0, 0x14)
        data_307b630 = 0
    
    if (data_307b5fc != 0)
        sub_40ad10(&data_307b5fc)
        result = data_307b5fc
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_307b5fc, 0, 0x14)
        data_307b614 = 0
    
    if (data_307b5e0 != 0)
        sub_40ac60(&data_307b5e0)
        result = data_307b5e0
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_307b5e0, 0, 0x14)
        data_307b5f8 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
