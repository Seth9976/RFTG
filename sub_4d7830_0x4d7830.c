// 函数名称: sub_4d7830
// 虚拟地址: 0x4d7830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_4d7830()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68cb11
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_26a44e4
    int32_t** result = data_27e7fdc
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x28)
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
    __builtin_memset(edi, 0, 0x28)
    int32_t* var_18 = edi
    int32_t* var_1c = edi
    int32_t var_8_1 = 0
    
    if (edi != 0)
        int32_t* entry_ebx
        *edi = *entry_ebx
        edi[1] = entry_ebx[1]
        edi[2] = entry_ebx[2]
        edi[3] = entry_ebx[3]
        edi[4] = entry_ebx[4]
        edi[5] = entry_ebx[5]
        char* ecx_4 = entry_ebx[6]
        edi[6] = ecx_4
        void* eax_6
        
        if (ecx_4 != 0 && *ecx_4 != 0)
            eax_6 = sub_4c4060(&edi[6])
            *(eax_6 + 4) += 1
        
        eax_6.b = entry_ebx[7].b
        edi[7].b = eax_6.b
    
    edi[8] = 0
    edi[9] = result[1]
    void* ecx_6 = result[1]
    
    if (ecx_6 == 0)
        *result = edi
    else
        *(ecx_6 + 0x20) = edi
    
    result[2] += 1
    result[1] = edi
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
