// 函数名称: sub_524610
// 虚拟地址: 0x524610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_524610(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f523
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_6c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_5c = arg1
    int32_t var_58 = 0
    int32_t var_54
    sub_5242f0(arg2, sub_522420(arg2), arg2, &var_54)
    int32_t var_8_1 = 1
    
    if (var_54 != 1)
        int32_t var_34
        arg1[1] = var_34
        int32_t var_38
        *arg1 = var_38
        char* var_30
        arg1[2] = var_30
        
        if (var_30 != 0 && *var_30 != 0)
            void* eax_9 = sub_4c4060(&arg1[2])
            *(eax_9 + 4) += 1
    else
        int32_t var_4c
        arg1[1] = var_4c
        int32_t var_50
        *arg1 = var_50
        char* var_48
        arg1[2] = var_48
        
        if (var_48 != 0 && *var_48 != 0)
            void* eax_6 = sub_4c4060(&arg1[2])
            *(eax_6 + 4) += 1
    
    int32_t var_58_1 = 1
    var_8_1.b = 0
    sub_524580(&var_54)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg1
}
