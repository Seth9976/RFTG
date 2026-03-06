// 函数名称: sub_535750
// 虚拟地址: 0x535750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_535750(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f888
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    bool ecx
    bool var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* eax_3 = __execvp(0x48, 0x10)
    
    if (eax_3 == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4fe7d0(eax_3, data_30d7374)
    char* arg_c
    char* const eax_6 = arg_c
    
    if (eax_6 == 0)
        eax_6 = &data_83f3d3
    
    char* eax_7 = sub_535220(eax_6)
    
    if (eax_7 == 2)
        char eax_15
        int80_t st0_1
        st0_1, eax_15 = sub_56c450(eax_3)
        
        if (eax_15 == 0)
            goto label_53586d
        
        int32_t** edi_3 = *arg1
        sub_5353f0(eax_3, eax_3[2] s> 0)
        *edi_3 = eax_3
        sub_535a10(edi_3)
        int32_t var_8_4 = 0xffffffff
        void* eax_22 = arg_c
        
        if (eax_22 != 0 && *eax_22 != 0)
            eax_22 = sub_4c4060(&arg_c)
            int32_t temp2_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_6 = *(eax_22 + 0xc) + 0x10
                sub_4f4430(eax_22, sub_4f4380(esi_6), esi_6)
        
        eax_22.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_22
    
    char* eax_11
    
    if (eax_7 == 3)
    label_53586d:
        char* eax_16 = arg_c
        
        if (eax_16 == 0)
            eax_16 = &data_83f3d3
        
        char* var_28_4 = eax_16
        sub_4c5680("structure reimport failed to read '%s'")
        _aligned_free_base(eax_3)
        int32_t var_8_3 = 0xffffffff
        eax_11 = arg_c
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_4c4060(&arg_c)
            int32_t temp3_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_4 = *(eax_11 + 0xc) + 0x10
                sub_4f4430(eax_11, sub_4f4380(esi_4), esi_4)
                int32_t eax_20
                eax_20.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_20
    else
        char* const eax_10 = arg_c
        
        if (eax_10 == 0)
            eax_10 = &data_83f3d3
        
        char* const var_28_1 = eax_10
        sub_4c5680("unknown structure type '%s'")
        _aligned_free_base(eax_3)
        int32_t var_8_2 = 0xffffffff
        eax_11 = arg_c
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_4c4060(&arg_c)
            int32_t temp4_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_2 = *(eax_11 + 0xc) + 0x10
                sub_4f4430(eax_11, sub_4f4380(esi_2), esi_2)
    
    eax_11.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
