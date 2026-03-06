// 函数名称: sub_53e750
// 虚拟地址: 0x53e750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53e750()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = data_3079208
    
    if (eax_3 != 0 && eax_3[1] == 0x19)
        int32_t* i = sub_466320(eax_3)
        int32_t* i_2 = i
        
        if (i_2 != 0)
            int32_t* i_1 = nullptr
            
            if (i_2[1] s> 0)
                int32_t var_18_1 = 0
                
                do
                    int32_t* esi_2 = *i_2 + var_18_1
                    int32_t eax_5 = 0
                    int32_t ecx_1 = *esi_2
                    
                    if (ecx_1 s<= 0)
                    label_53e808:
                        char* var_14
                        int32_t ecx_2
                        void* edx_2
                        ecx_2, edx_2 = sub_53d0a0(&var_14, "Particle ")
                        int32_t var_8_1 = 0
                        char* eax_6 = var_14
                        
                        if (eax_6 == 0)
                            eax_6 = &data_83f3d3
                        
                        char* var_30_2 = eax_6
                        int32_t var_34_2 = 1
                        sub_530b60(esi_2, edx_2, ecx_2, &data_8c35ec)
                        int32_t var_8_2 = 0xffffffff
                        char* eax_8 = var_14
                        
                        if (eax_8 != 0 && *eax_8 != 0)
                            void* eax_10 = sub_4c4060(&var_14)
                            int32_t temp0_1 = *(eax_10 + 4)
                            *(eax_10 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                int32_t esi_4 = *(eax_10 + 0xc) + 0x10
                                sub_4f4430(eax_10, sub_4f4380(esi_4), esi_4)
                    else
                        int32_t* edx_1 = esi_2[1]
                        
                        while (*edx_1 != 1)
                            eax_5 += 1
                            edx_1 = &edx_1[2]
                            
                            if (eax_5 s>= ecx_1)
                                goto label_53e808
                    
                    var_18_1 += 0x134
                    i = i_1 + 1
                    i_1 = i
                while (i s< i_2[1])
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return i
    
    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0xd98, 
        "MakeSureAllEmittersHaveNames")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
