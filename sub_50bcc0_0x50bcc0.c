// 函数名称: sub_50bcc0
// 虚拟地址: 0x50bcc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50bcc0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691f90
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i_1 = nullptr
    int32_t var_1c = 0
    int32_t var_18 = 0
    int32_t var_8_1 = 0
    int32_t* ecx
    int32_t edx
    sub_50a040(&i_1, edx, ecx, 3, &i_1)
    int32_t* i = i_1
    
    while (i != 0)
        int32_t* esi_1 = *i
        i = i[1]
        
        if (*esi_1 != 0)
            int32_t* eax_4 = *esi_1
            esi_1[7] += 1
            int32_t* var_14_1 = esi_1
            var_8_1.b = 1
            sub_50bb10(*eax_4)
            var_8_1.b = 0
            esi_1[7] -= 1
    
    int32_t var_8_2 = 0xffffffff
    int32_t* result = sub_5041e0(&i_1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
