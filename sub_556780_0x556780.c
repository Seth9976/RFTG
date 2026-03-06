// 函数名称: sub_556780
// 虚拟地址: 0x556780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_556780(int32_t** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c919
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x10)
            esi_1 = esi + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    *edi = 0
    edi[1] = 0
    edi[2] = 0
    edi[3] = 0
    int32_t* var_14 = edi
    int32_t* var_18 = edi
    int32_t var_8_1 = 0
    
    if (edi != 0)
        char* eax_4 = *arg2
        *edi = eax_4
        
        if (eax_4 != 0 && *eax_4 != 0)
            void* eax_6 = sub_4c4060(edi)
            *(eax_6 + 4) += 1
        
        var_8_1.b = 1
        char* ecx_3 = arg2[1]
        edi[1] = ecx_3
        
        if (ecx_3 != 0 && *ecx_3 != 0)
            void* eax_8 = sub_4c4060(&edi[1])
            *(eax_8 + 4) += 1
    
    edi[2] = 0
    edi[3] = arg1[1]
    void* result = arg1[1]
    
    if (result == 0)
        *arg1 = edi
    else
        *(result + 8) = edi
    
    arg1[2] += 1
    arg1[1] = edi
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
