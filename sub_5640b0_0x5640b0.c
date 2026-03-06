// 函数名称: sub_5640b0
// 虚拟地址: 0x5640b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5640b0(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const ebx = arg3
    char* const esi = &data_83f3d3
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    char* eax_3 = sub_5a8f10(ebx, 0x2a)
    
    if (eax_3 != 0 && eax_3[1] != 0)
        char* const eax_5 = ebx
        int32_t var_1c_1 = eax_3 - ebx + 1
        void* ecx
        
        do
            ecx.b = *eax_5
            eax_5 = &eax_5[1]
        while (ecx.b != 0)
        char* ecx_1 = *(arg4 + 0x20)
        char* eax_9 = &data_83f3d3
        
        if (ecx_1 != 0)
            eax_9 = ecx_1
        
        void* edx
        
        do
            edx.b = *eax_9
            eax_9 = &eax_9[1]
        while (edx.b != 0)
        
        if (ecx_1 == 0)
            ecx_1 = &data_83f3d3
        
        if (sub_5a9697(eax_9 - &eax_9[1] - (eax_5 - &eax_5[1] - (eax_3 - ebx + 1)) + ecx_1, &eax_3[1])
                != 0)
            int32_t var_8_2 = 0xffffffff
            sub_4c43d0(&var_14)
            int32_t* eax_14
            eax_14.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        
        sub_4c4690(&var_14, ebx)
        esi = var_14
        ebx = &data_83f3d3
        
        if (esi != 0)
            ebx = esi
    
    char* const eax_15 = *(arg4 + 0x20)
    
    if (eax_15 == 0)
        eax_15 = &data_83f3d3
    
    ebx.b = sub_564000(ebx, eax_15).b
    int32_t var_8_3 = 0xffffffff
    uint32_t eax_16
    
    if (esi != 0 && *esi != 0)
        eax_16 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(eax_16 + 0xc) + 0x10
            sub_4f4430(eax_16, sub_4f4380(esi_5), esi_5)
    
    eax_16.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
