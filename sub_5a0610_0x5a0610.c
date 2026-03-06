// 函数名称: sub_5a0610
// 虚拟地址: 0x5a0610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a0610(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    char const* const edi = "#?RADIANCE"
    void var_408
    char* eax_3 = sub_59fb10(arg4, &var_408)
    int32_t eax_5
    
    while (true)
        char ecx = *eax_3
        char const temp0_1 = *edi
        bool c_1 = ecx u< temp0_1
        
        if (ecx == temp0_1)
            if (ecx == 0)
                eax_5 = 0
                break
            
            ecx = eax_3[1]
            char temp3_1 = edi[1]
            c_1 = ecx u< temp3_1
            
            if (ecx == temp3_1)
                eax_3 = &eax_3[2]
                edi = &edi[2]
                
                if (ecx != 0)
                    continue
                
                eax_5 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_5 = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2)
        break
    
    if (eax_5 == 0)
        char* eax_7 = sub_59fb10(arg4, &var_408)
        char* var_40c = eax_7
        
        if (*eax_7 != 0)
            while (true)
                char const* const ecx_4 = "FORMAT=32-bit_rle_rgbe"
                int32_t eax_9
                
                while (true)
                    char edx = *eax_7
                    char const temp4_1 = *ecx_4
                    bool c_3 = edx u< temp4_1
                    
                    if (edx == temp4_1)
                        if (edx == 0)
                            eax_9 = 0
                            break
                        
                        edx = eax_7[1]
                        char temp7_1 = ecx_4[1]
                        c_3 = edx u< temp7_1
                        
                        if (edx == temp7_1)
                            eax_7 = &eax_7[2]
                            ecx_4 = &ecx_4[2]
                            
                            if (edx != 0)
                                continue
                            
                            eax_9 = 0
                            break
                    
                    bool c_4 = unimplemented  {sbb eax, eax}
                    eax_9 = sbb.d(sbb.d(eax_7, eax_7, c_3), 0xffffffff, c_4)
                    break
                
                if (eax_9 == 0)
                    ebx = eax_9 + 1
                
                eax_7 = sub_59fb10(arg4, &var_408)
                var_40c = eax_7
                
                if (*eax_7 == 0)
                    break
            
            if (ebx != 0)
                char* eax_10 = sub_59fb10(arg4, &var_408)
                var_40c = eax_10
                
                if (sub_5a7934(eax_10, "-Y ", 3) == 0)
                    void* eax_15 = &var_40c[3]
                    var_40c = eax_15
                    *arg3 = sub_5a82a5(eax_15, &var_40c, 0xa)
                    char* eax_17 = var_40c
                    
                    while (*eax_17 == 0x20)
                        eax_17 = &eax_17[1]
                        var_40c = eax_17
                    
                    if (sub_5a7934(eax_17, "+X ", 3) == 0)
                        void* eax_20 = &var_40c[3]
                        var_40c = eax_20
                        *arg5 = sub_5a82a5(eax_20, nullptr, 0xa)
                        *arg2 = 3
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
                
                *(arg4 + 0xa8) = *(arg4 + 0xb0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
    
    *(arg4 + 0xa8) = *(arg4 + 0xb0)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
