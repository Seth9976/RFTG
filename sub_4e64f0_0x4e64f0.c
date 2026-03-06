// 函数名称: sub_4e64f0
// 虚拟地址: 0x4e64f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_4e64f0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d849
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* arg_8
    char* eax_3 = arg_8
    char** ebx
    bool cond:2_1
    
    if (eax_3 == 0 || *eax_3 == 0)
    label_4e6544:
        ebx = arg1
        *ebx = eax_3
        
        if (eax_3 != 0 && *eax_3 != 0)
            void* eax_7 = sub_4c4060(ebx)
            *(eax_7 + 4) += 1
            eax_3 = arg_8
        
        cond:2_1 = eax_3 == 0
    else
        bool cond:0_1 = *(sub_4c4060(&arg_8) + 8) != 0
        eax_3 = arg_8
        
        if (not(cond:0_1))
            goto label_4e6544
        
        if (eax_3 == 0)
            eax_3 = &data_83f3d3
        
        bool cond:1_1 = sub_5a7934(eax_3, "./", 2) != 0
        char* eax_9 = arg_8
        char* var_1c
        
        if (not(cond:1_1))
            if (eax_9 == 0)
                eax_9 = &data_83f3d3
            
            if (eax_9 == 0xfffffffe)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            char* var_18
            sub_4c42b0(&var_18, &eax_9[2])
            var_8_1.b = 2
            var_8_1.b = 3
            sub_4c48a0(sub_51c990(&var_1c), arg1, &var_18)
            var_8_1.b = 2
            char* eax_12 = var_1c
            int32_t var_14_1 = 1
            
            if (eax_12 != 0 && *eax_12 != 0)
                void* eax_14 = sub_4c4060(&var_1c)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_4 = *(eax_14 + 0xc) + 0x10
                    sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
            
            var_8_1.b = 1
            char* eax_17 = var_18
            
            if (eax_17 != 0 && *eax_17 != 0)
                void* eax_19 = sub_4c4060(&var_18)
                int32_t temp3_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_6 = *(eax_19 + 0xc) + 0x10
                    sub_4f4430(eax_19, sub_4f4380(esi_6), esi_6)
            
            var_8_1.b = 0
            char* eax_22 = arg_8
            
            if (eax_22 != 0 && *eax_22 != 0)
                void* eax_24 = sub_4c4060(&arg_8)
                int32_t temp4_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp4_1 == 1)
                    int32_t esi_8 = *(eax_24 + 0xc) + 0x10
                    sub_4f4430(eax_24, sub_4f4380(esi_8), esi_8)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        if (eax_9 == 0)
            eax_9 = &data_83f3d3
        
        void* eax_28 = sub_5a9450(eax_9, 0x5c)
        void* eax_30
        
        if (eax_28 == 0)
            char* eax_29 = arg_8
            
            if (eax_29 == 0)
                eax_29 = &data_83f3d3
            
            eax_30 = sub_5a9450(eax_29, 0x2f)
        
        if (eax_28 == 0 && eax_30 == 0)
        label_4e6753:
            var_8_1.b = 4
            sub_4c48a0(sub_51c990(&var_1c), arg1, &arg_8)
            int32_t var_14_2 = 1
            var_8_1.b = 1
            sub_4c43d0(&var_1c)
            var_8_1.b = 0
            sub_4c43d0(&arg_8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        char* eax_31 = arg_8
        
        if (eax_31 == 0)
            eax_31 = &data_83f3d3
        
        if (sub_5a9f0b(eax_31, "sys", 3) != 0)
            char* eax_33 = arg_8
            
            if (eax_33 == 0)
                eax_33 = &data_83f3d3
            
            if (sub_5a9f0b(eax_33, "res", 3) != 0)
                char* eax_35 = arg_8
                
                if (eax_35 == 0)
                    eax_35 = &data_83f3d3
                
                if (sub_5a9f0b(eax_35, "xbin", 4) != 0)
                    goto label_4e6753
        
        eax_3 = arg_8
        ebx = arg1
        *ebx = eax_3
        cond:2_1 = eax_3 == 0
        
        if (eax_3 != 0)
            if (*eax_3 != 0)
                void* eax_40 = sub_4c4060(ebx)
                *(eax_40 + 4) += 1
                eax_3 = arg_8
            
            cond:2_1 = eax_3 == 0
    
    var_8_1.b = 0
    int32_t var_14_3 = 1
    
    if (not(cond:2_1) && *eax_3 != 0)
        void* eax_42 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_12 = *(eax_42 + 0xc) + 0x10
            sub_4f4430(eax_42, sub_4f4380(esi_12), esi_12)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx
}
