// 函数名称: sub_4c5230
// 虚拟地址: 0x4c5230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c5230(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d901
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    int32_t var_8_1 = 1
    char* arg_8
    char* const eax_3 = arg_8
    
    if (eax_3 == 0)
        eax_3 = &data_83f3d3
    
    char* eax_4 = sub_5a8f10(eax_3, 0x2f)
    
    if (eax_4 == 0)
        char* const eax_5 = arg_8
        
        if (eax_5 == 0)
            eax_5 = &data_83f3d3
        
        eax_4 = sub_5a8f10(eax_5, 0x5c)
        
        if (eax_4 == 0)
            char* eax_6 = arg_8
            int32_t* esi = arg1
            *esi = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                void* eax_8 = sub_4c4060(esi)
                *(eax_8 + 4) += 1
                eax_6 = arg_8
            
            int32_t var_14_2 = 1
            var_8_1.b = 0
            
            if (eax_6 != 0 && *eax_6 != 0)
                void* eax_10 = sub_4c4060(&arg_8)
                int32_t temp1_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_2 = *(eax_10 + 0xc) + 0x10
                    sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
                    esi = arg1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return esi
    
    if (eax_4 == 0xffffffff)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(arg1, &eax_4[1])
    var_8_1.b = 0
    char* eax_15 = arg_8
    int32_t var_14_3 = 1
    
    if (eax_15 != 0 && *eax_15 != 0)
        void* eax_17 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_5 = *(eax_17 + 0xc) + 0x10
            sub_4f4430(eax_17, sub_4f4380(esi_5), esi_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
