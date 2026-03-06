// 函数名称: sub_557a80
// 虚拟地址: 0x557a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_557a80(int32_t* arg1)
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
    int32_t* eax_3 = __execvp(0x14, 0x10)
    
    if (eax_3 == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4fe7d0(eax_3, data_30d74b4)
    char* arg_c
    char* const ecx = arg_c
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    if (sub_5574a0(ecx, eax_3) != 0)
        *(*arg1 + 0xc) = eax_3
        int32_t var_8_3 = 0xffffffff
        void* eax_13 = arg_c
        
        if (eax_13 != 0 && *eax_13 != 0)
            eax_13 = sub_4c4060(&arg_c)
            int32_t temp0_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_4 = *(eax_13 + 0xc) + 0x10
                sub_4f4430(eax_13, sub_4f4380(esi_4), esi_4)
        
        eax_13.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
    
    char* const eax_7 = arg_c
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    char* const var_24_1 = eax_7
    sub_4c5680("anim reimport reading xan '%s'")
    _aligned_free_base(eax_3)
    int32_t var_8_2 = 0xffffffff
    char* eax_8 = arg_c
    
    if (eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_4c4060(&arg_c)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
