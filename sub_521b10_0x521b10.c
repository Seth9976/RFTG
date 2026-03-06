// 函数名称: sub_521b10
// 虚拟地址: 0x521b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_521b10(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d001
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    int32_t var_8_1 = 1
    char* var_14
    int32_t edx
    sub_521a40(arg1, sub_521ab0(arg2, edx, &var_14))
    var_8_1.b = 0
    char* eax_5 = var_14
    int32_t var_18_1 = 1
    
    if (eax_5 != 0 && *eax_5 != 0)
        void* eax_7 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_7 + 0xc) + 0x10
            sub_4f4430(eax_7, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
