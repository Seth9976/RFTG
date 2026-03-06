// 函数名称: sub_4f6d20
// 虚拟地址: 0x4f6d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4f6d20()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d0f5
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_be1cb8 != 0)
        sub_4fc570(&data_be1cb8)
        result = data_be1cb8
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_be1cb8, 0, 0x14)
        data_be1cd0 = 0
    
    int32_t var_8_1 = 0xffffffff
    
    if (data_be1c9c != 0)
        sub_4fc4a0(&data_be1c9c)
        result = data_be1c9c
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_be1c9c, 0, 0x14)
        data_be1cb4 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
