// 函数名称: sub_54c860
// 虚拟地址: 0x54c860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_54c860()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6901d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i_1 = nullptr
    int32_t var_18 = 0
    int32_t var_14 = 0
    int32_t var_8_1 = 0
    int32_t* ecx
    int32_t edx
    sub_50a040(&i_1, edx, ecx, 4, &i_1)
    int32_t* i = i_1
    
    while (i != 0)
        int32_t* ecx_1 = *i
        i = i[1]
        
        if (*ecx_1 != 0)
            sub_54c770(ecx_1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_5041e0(&i_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
