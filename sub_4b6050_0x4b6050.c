// 函数名称: sub_4b6050
// 虚拟地址: 0x4b6050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b6050(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* entry_ebx
    int32_t* eax_4 = data_26a44b4 + (*(entry_ebx + 0x9c) << 4)
    int32_t edx_2 = eax_4[3]
    **eax_4
    int32_t ecx_1 = eax_4[2]
    int32_t edx_3 = eax_4[1]
    int32_t var_58_1
    int32_t var_54_1
    
    if (sub_4f65a0(&entry_ebx[4], *entry_ebx) != 0)
        switch (*(entry_ebx + 0x98))
            case 0
                var_58_1 = 0
                var_54_1 = 0xa
            label_4b6103:
                void var_d8
                int32_t eax_8
                int80_t st0_1
                st0_1, eax_8 = sub_40a930(&var_d8)
                long double x87_r6_1 = fconvert.t(data_8c4d34)
                int32_t eax_9 = *(entry_ebx + (*(entry_ebx + 0x9c) << 2) + 0x10)
                void var_50
                int32_t ecx_2
                int32_t esi_2
                esi_2, ecx_2 = __builtin_memcpy(&var_50, eax_8, 0x40)
                int32_t var_f0_1 = ecx_2
                void var_98
                int32_t* eax_10 = sub_4f8710(esi_2, &var_98, eax_9, &var_50, arg4, arg3, 
                    fconvert.s(x87_r6_1), nullptr, nullptr, nullptr)
                int32_t var_7c_1 = eax_10[1]
                int32_t var_78_1 = eax_10[2]
                int32_t eax_11 = eax_10[4]
                int32_t var_74_1 = eax_10[3]
                
                if (*eax_10 == 2)
                    if (eax_11 == edx_2)
                        *entry_ebx = 0
                        
                        if (*(entry_ebx + 0x94) s> 1)
                            entry_ebx[8] = 1
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                    else if (eax_11 == ecx_1)
                        *(entry_ebx + 0x9c) += 1
                    label_4b61ab:
                        int32_t eax_13 = *(entry_ebx + 0x9c)
                        
                        if (eax_13 s< var_58_1)
                            eax_13 = var_58_1
                        else if (eax_13 s> var_54_1)
                            eax_13 = var_54_1
                        
                        *(entry_ebx + 0x9c) = eax_13
                    else if (eax_11 == edx_3)
                        *(entry_ebx + 0x9c) -= 1
                        goto label_4b61ab
            case 2
                var_58_1 = 0xb
                var_54_1 = 0xb
                goto label_4b6103
            case 3
                var_58_1 = 0xc
                var_54_1 = 0xd
                goto label_4b6103
            case 4
                var_58_1 = 0xe
                var_54_1 = 0xf
                goto label_4b6103
            default
                sub_4c5870("Halt", &data_83f3d3, "..\code\RulesDlg.cpp", 0x64, "GetExpansionRulesPages")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
