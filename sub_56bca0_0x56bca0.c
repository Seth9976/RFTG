// 函数名称: sub_56bca0
// 虚拟地址: 0x56bca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_56bca0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c8e4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = *arg1
    int32_t* ecx = data_3079210
    int32_t ebx_3 = (eax_4 s>> 4 | eax_4) & ecx[1]
    
    for (int32_t* i = *(*ecx + (ebx_3 << 2)); i != 0; i = i[5])
        if (eax_4 == *i)
            i[1] = *arg2
            int32_t* eax_12 = sub_4c4510(&arg2[1])
            i[3] = arg2[2]
            i[4] = arg2[3]
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x18)
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
    int32_t* var_18 = edi
    
    if (edi != 0)
        *edi = *arg1
    
    arg1 = &edi[1]
    int32_t var_8_1 = 0
    
    if (edi != 0xfffffffc)
        int32_t* edx_2 = arg2
        edi[1] = *edx_2
        char* ecx_5 = edx_2[1]
        edi[2] = ecx_5
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            void* eax_8 = sub_4c4060(&edi[2])
            *(eax_8 + 4) += 1
            edx_2 = arg2
        
        edi[3] = edx_2[2]
        edi[4] = edx_2[3]
    
    edi[5] = *(*ecx + (ebx_3 << 2))
    *(*ecx + (ebx_3 << 2)) = edi
    ecx[2] += 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return ecx
}
