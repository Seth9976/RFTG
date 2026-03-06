// 函数名称: sub_4bc8c0
// 虚拟地址: 0x4bc8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bc8c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d97b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_424 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_2bc
    int128_t* eax_3 = sub_5abfc0(&var_2bc, 0, 0x14c)
    var_2bc = 0
    void var_164
    __builtin_memcpy(&var_164, &var_2bc, 0x14c)
    char* const var_168 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t esi = 0
    void var_16c
    char eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_5003c0(eax_3, &var_164, &var_16c, &var_164, &var_16c)
    
    if (eax_4 != 0)
        char i
        
        do
            void* eax_6 = sub_4bc770(arg2, edx_1, &var_16c, arg2)
            
            if (eax_6.b != 0)
                esi += 1
            
            i, edx_1 = sub_5003c0(eax_6, &var_164, &var_16c, &var_164, &var_16c)
        while (i != 0)
    
    int32_t var_428_4 = 0x14c
    char var_42c_3 = 0
    int32_t* var_430_1 = &var_2bc
    int32_t var_414 = arg2
    int32_t var_410 = 0
    int32_t var_2c0 = esi
    sub_5abfc0(var_430_1, var_42c_3, var_428_4)
    int32_t result = arg1
    var_2bc = 0
    void var_40c
    __builtin_memcpy(&var_40c, &var_2bc, 0x14c)
    __builtin_memcpy(result, &var_414, 0x158)
    int32_t var_8_2 = 0xffffffff
    char* const ecx_3 = var_168
    
    if (ecx_3 != 0 && *ecx_3 != 0)
        void* eax_9 = sub_4c4060(&var_168)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_2), esi_2)
        
        result = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
