// 函数名称: sub_53d0a0
// 虚拟地址: 0x53d0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_53d0a0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691f31
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    int32_t var_18 = 0
    
    do
        int32_t var_30_1 = i + 1
        int32_t var_34_1 = arg2
        char* var_14
        sub_4c4a50(&var_14, "%s%d")
        int32_t var_8_1 = 1
        char* const eax_4 = var_14
        
        if (eax_4 == 0)
            eax_4 = &data_83f3d3
        
        if (sub_53ce60(eax_4) == 0)
            char* eax_12 = var_14
            *arg1 = eax_12
            
            if (eax_12 != 0 && *eax_12 != 0)
                void* eax_14 = sub_4c4060(arg1)
                *(eax_14 + 4) += 1
                eax_12 = var_14
            
            int32_t var_18_1 = 1
            var_8_1.b = 0
            
            if (eax_12 != 0 && *eax_12 != 0)
                void* eax_16 = sub_4c4060(&var_14)
                int32_t temp1_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_16 + 0xc) + 0x10
                    sub_4f4430(eax_16, sub_4f4380(esi_4), esi_4)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        var_8_1.b = 0
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            void* eax_8 = sub_4c4060(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_8 + 0xc) + 0x10
                sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
        
        i += 1
    while (i s< 0xf4240)
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0xafd, "EmitterGetUniqueName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
