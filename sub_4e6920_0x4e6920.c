// 函数名称: sub_4e6920
// 虚拟地址: 0x4e6920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4e6920(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d7f1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    int32_t var_8_1 = 1
    char* var_14
    sub_51c990(&var_14)
    var_8_1.b = 2
    char* edi = var_14
    int32_t esi_1
    
    if (edi == 0 || *edi == 0)
        esi_1 = 0
    else
        esi_1 = *(sub_4c4060(&var_14) + 8)
    
    char* arg_8
    char* eax_7 = arg_8
    int32_t ecx
    
    if (eax_7 == 0 || *eax_7 == 0)
        ecx = 0
    else
        ecx = *(sub_4c4060(&arg_8) + 8)
        eax_7 = arg_8
    
    bool cond:0_1
    
    if (ecx s> esi_1)
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        char* ecx_1 = &data_83f3d3
        
        if (edi != 0)
            ecx_1 = edi
        
        cond:0_1 = sub_5a9f0b(ecx_1, eax_7, esi_1) != 0
        eax_7 = arg_8
    
    if (ecx s<= esi_1 || cond:0_1)
        *arg1 = eax_7
        
        if (eax_7 != 0 && *eax_7 != 0)
            void* eax_22 = sub_4c4060(arg1)
            *(eax_22 + 4) += 1
            eax_7 = arg_8
        
        int32_t var_1c_2 = 1
        var_8_1.b = 1
        
        if (edi != 0 && *edi != 0)
            void* eax_24 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_9 = *(eax_24 + 0xc) + 0x10
                sub_4f4430(eax_24, sub_4f4380(esi_9), esi_9)
            
            eax_7 = arg_8
        
        var_8_1.b = 0
    else
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        void* edi_1 = &eax_7[esi_1]
        
        if (edi_1 == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* var_18
        sub_4c42b0(&var_18, edi_1)
        var_8_1.b = 3
        char* esi_3 = var_18
        *arg1 = esi_3
        
        if (esi_3 != 0 && *esi_3 != 0)
            void* eax_11 = sub_4c4060(arg1)
            *(eax_11 + 4) += 1
        
        int32_t var_1c_1 = 1
        var_8_1.b = 2
        
        if (esi_3 != 0 && *esi_3 != 0)
            void* eax_13 = sub_4c4060(&var_18)
            int32_t temp2_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_5 = *(eax_13 + 0xc) + 0x10
                sub_4f4430(eax_13, sub_4f4380(esi_5), esi_5)
        
        var_8_1.b = 1
        char* eax_16 = var_14
        
        if (eax_16 != 0 && *eax_16 != 0)
            void* eax_18 = sub_4c4060(&var_14)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_7 = *(eax_18 + 0xc) + 0x10
                sub_4f4430(eax_18, sub_4f4380(esi_7), esi_7)
        
        var_8_1.b = 0
        eax_7 = arg_8
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_28 = sub_4c4060(&arg_8)
        int32_t temp1_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_11 = *(eax_28 + 0xc) + 0x10
            sub_4f4430(eax_28, sub_4f4380(esi_11), esi_11)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
