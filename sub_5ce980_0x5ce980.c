// 函数名称: sub_5ce980
// 虚拟地址: 0x5ce980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ce980(void* arg1)
{
    // 第一条实际指令: int32_t ebx = 2
    int32_t ebx = 2
    int32_t var_70 = 1
    int32_t var_50 = 1
    int32_t var_80 = 0
    int32_t var_7c = 0
    char const* const var_78 = "Retry"
    int32_t var_74 = 0
    char const* const var_6c = "Break"
    int32_t var_68 = 0
    int32_t var_64 = 2
    char const* const var_60 = "Abort"
    int32_t var_5c = 2
    int32_t var_58 = 3
    char const* const var_54 = "Ignore"
    int32_t var_4c = 4
    char const* const var_48 = "Always Ignore"
    __alloca_probe_16(0x1000)
    int32_t __saved_edi
    
    if (&__saved_edi != 0)
        int32_t ecx_1 = *(arg1 + 4)
        char const* const edx_1 = "time"
        
        if (ecx_1 != 1)
            edx_1 = "times"
        
        int32_t var_90_1 = *(arg1 + 8)
        char const* const var_94_1 = edx_1
        int32_t var_98_1 = ecx_1
        int32_t var_9c_1 = *(arg1 + 0x10)
        int32_t var_a0_1 = *(arg1 + 0xc)
        int32_t var_a4_1 = *(arg1 + 0x14)
        sub_5ce6a0(&__saved_edi, 0x1000, "Assertion failure at %s (%s:%d), triggered %u %s:\r\n  '%s'")
        int32_t* var_b4_1 = &__saved_edi
        sub_5ce960("\n\n%s\n\n")
        char* eax_3 = sub_5d2340("SDL_ASSERT")
        
        if (eax_3 == 0)
            void* edi_3 = sub_5ca1d0()
            
            if (edi_3 != 0)
                if ((sub_5c9760(edi_3) & 1) == 0)
                    edi_3 = nullptr
                else
                    sub_5c9da0(edi_3)
            
            int32_t var_90_4 = 0x1c
            int32_t var_94_7 = 0
            int32_t var_24
            int32_t* var_98_2 = &var_24
            sub_5cd100()
            var_24 = 0x20
            void* var_20_1 = edi_3
            char const* const var_1c_1 = "Assertion Failed"
            int32_t* var_18_1 = &__saved_edi
            int32_t var_14_1 = 5
            int32_t* var_10_1 = &var_80
            int32_t var_8
            
            if (sub_5cab20(&var_24, &var_8) != 0)
                sub_5a8559(&data_8b80d0, "Abort/Break/Retry/Ignore/AlwaysIgnore? [abriA] : ")
                sub_5a9298(&data_8b80d0)
                char var_44[0x20]
                
                if (sub_5a8abc(&var_44, 0x20, &data_8b8090) != 0)
                    ebx = 2
                    char* i
                    
                    do
                        if (sub_5cd590(&var_44, U"a") == 0)
                            break
                        
                        if (sub_5cd590(&var_44, U"bg") == 0)
                            ebx = 1
                            break
                        
                        if (sub_5cd590(&var_44, U"r") == 0)
                            ebx = 0
                            break
                        
                        if (sub_5cd590(&var_44, U"if") == 0)
                            goto label_5ceb5c
                        
                        if (sub_5cd590(&var_44, U"A") == 0)
                            ebx = 4
                            break
                        
                        sub_5a8559(&data_8b80d0, "Abort/Break/Retry/Ignore/AlwaysIgnore? [abriA] : ")
                        sub_5a9298(&data_8b80d0)
                        i = sub_5a8abc(&var_44, 0x20, &data_8b8090)
                    while (i != 0)
            else
                int32_t eax_18 = var_8
                
                if (eax_18 != 0xffffffff)
                    ebx = eax_18
                else
                label_5ceb5c:
                    ebx = 3
            
            if (edi_3 != 0)
                sub_5c9e00(edi_3)
        else if (sub_5cd590(eax_3, "abort") != 0)
            if (sub_5cd590(eax_3, "break") == 0)
                return 1
            
            int32_t eax_7 = sub_5cd590(eax_3, "retry")
            
            if (eax_7 == 0)
                return eax_7
            
            if (sub_5cd590(eax_3, "ignore") == 0)
                return 3
            
            int32_t eax_10 = sub_5cd590(eax_3, "always_ignore")
            int32_t eax_11 = neg.d(eax_10)
            return (sbb.d(eax_11, eax_11, eax_10 != 0) & 0xfffffffe) + 4
    
    return ebx
}
