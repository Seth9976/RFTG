// 函数名称: sub_522840
// 虚拟地址: 0x522840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522840(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e941
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char* esi = arg3[1]
    
    if (sub_5a8326(sx.d(*esi)) == 0 && *esi != 0x5f)
        sub_522830(arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    int32_t ecx_3
    
    while (true)
        int32_t ecx_2 = sx.d(esi[1])
        esi = &esi[1]
        
        if (sub_5a8326(ecx_2) == 0)
            int32_t eax_6
            eax_6.b = *esi
            
            if (eax_6.b != 0x5f)
                int32_t eax_7
                eax_7, ecx_3 = sub_5a8426(sx.d(eax_6.b))
                
                if (eax_7 == 0)
                    break
    
    int32_t eax_8 = arg3[1]
    void* edx_1 = *arg3
    void* eax_9 = sub_5218c0(ecx_3, edx_1)
    *(eax_9 + 4) = eax_8
    *eax_9 = 9
    *(eax_9 + 8) = esi - eax_8
    int32_t var_24
    sub_5225d0(&var_24, edx_1, eax_9)
    int32_t var_8_1 = 1
    arg3[1] = esi
    sub_522420(arg3)
    char* var_1c
    char* esi_1 = var_1c
    int32_t edx_2 = var_24
    int32_t var_20
    arg4[1] = var_20
    *arg4 = edx_2
    arg4[2] = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        void* eax_14 = sub_4c4060(&arg4[2])
        *(eax_14 + 4) += 1
    
    int32_t var_18_1 = 1
    var_8_1.b = 0
    
    if (esi_1 != 0 && *esi_1 != 0)
        void* eax_16 = sub_4c4060(&var_1c)
        int32_t temp0_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_16 + 0xc) + 0x10
            sub_4f4430(eax_16, sub_4f4380(esi_3), esi_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
