// 函数名称: sub_4ea9d0
// 虚拟地址: 0x4ea9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ea9d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f6d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* arg_c
    char* const ecx = arg_c
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    int32_t* eax_3 = data_30d7428
    int32_t edx
    int32_t* eax_4 = sub_504e50(eax_3, edx, ecx, eax_3)
    
    if (eax_4 == 0)
        int32_t var_8_2 = 0xffffffff
        char* eax_5 = arg_c
        
        if (eax_5 != 0 && *eax_5 != 0)
            eax_5 = sub_4c4060(&arg_c)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_2 = *(eax_5 + 0xc) + 0x10
                sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
        
        eax_5.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_500770(arg1[1])
    int32_t* edx_1 = *arg1
    arg1[1] = 0
    sub_4ea1a0(*eax_4, edx_1)
    sub_4fed40(*eax_4, eax_4[3])
    sub_500770(eax_4[1])
    _aligned_free_base(eax_4)
    int32_t var_8_3 = 0xffffffff
    void* eax_11 = arg_c
    
    if (eax_11 != 0 && *eax_11 != 0)
        eax_11 = sub_4c4060(&arg_c)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_4 = *(eax_11 + 0xc) + 0x10
            sub_4f4430(eax_11, sub_4f4380(esi_4), esi_4)
    
    eax_11.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
