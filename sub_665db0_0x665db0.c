// 函数名称: sub_665db0
// 虚拟地址: 0x665db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_665db0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* result = arg2
    int32_t* result_2 = result
    
    if (arg1 != 0)
        result = sub_66e9c0(arg1)
        int32_t* result_1 = result
        int32_t var_18_1 = 0
        
        if (result s> 0)
            int32_t ecx_7
            
            do
                int32_t* result_3 = result_2
                int32_t i_1 = 0
                
                if (*(arg1 + 0xe8) u> 0)
                    int32_t i
                    
                    do
                        int128_t* edi_1 = *result_3
                        
                        if (*(arg1 + 0xfc) == 0 && arg1[0x139] == 0)
                            if ((*(arg1 + 0x6c) & 0x400) == 0)
                                sub_664320(arg1, "png_write_info was never called before png_write_row")
                                noreturn
                            
                            sub_671250(arg1)
                        
                        if (arg1[0x138] == 0 || (arg1[0x74] & 2) == 0)
                        label_665f41:
                            char edx = arg1[0x140]
                            int32_t ecx_2 = *(arg1 + 0xf0)
                            char var_c_1 = arg1[0x13b]
                            char eax_3 = arg1[0x13d]
                            char var_b_1 = eax_3
                            eax_3 = muls.dp.b(eax_3, edx)
                            int32_t var_14 = ecx_2
                            char var_a_1 = edx
                            uint32_t eax_4 = zx.d(eax_3)
                            void* eax_6
                            
                            if (eax_3 u< 8)
                                eax_6 = (eax_4 * ecx_2 + 7) u>> 3
                            else
                                eax_6 = (eax_4 u>> 3) * ecx_2
                            
                            void* var_10_1 = eax_6
                            sub_5ab990(*(arg1 + 0x108) + 1, edi_1, eax_6)
                            
                            if (arg1[0x138] == 0)
                            label_665fda:
                                
                                if (*(arg1 + 0x74) != 0)
                                    sub_672d80(arg1, &var_14)
                                
                                if (eax_3 != arg1[0x13e] || eax_3 != arg1[0x143])
                                    sub_664320(arg1, "internal write transform logic error")
                                    noreturn
                                
                                if ((arg1[0x258] & 4) != 0 && arg1[0x25c] == 0x40)
                                    sub_672ca0(&var_14, *(arg1 + 0x108) + 1)
                                
                                if (var_c_1 == 3 && *(arg1 + 0x130) s>= 0)
                                    sub_66ee00(arg1, &var_14)
                                
                                sub_671c20(arg1, &var_14)
                                int32_t eax_14 = *(arg1 + 0x1b8)
                                
                                if (eax_14 != 0)
                                    eax_14(arg1, *(arg1 + 0xfc), zx.d(arg1[0x139]))
                            else
                                char eax_9 = arg1[0x139]
                                
                                if (eax_9 u>= 6 || (arg1[0x74] & 2) == 0)
                                    goto label_665fda
                                
                                sub_6715c0(&var_14, *(arg1 + 0x108) + 1, zx.d(eax_9))
                                
                                if (var_14 != 0)
                                    goto label_665fda
                                
                                sub_6713f0(arg1)
                        else
                            uint32_t eax_2 = zx.d(arg1[0x139])
                            
                            if (eax_2 u> 6)
                                goto label_665f41
                            
                            switch (eax_2)
                                case 0
                                    if ((arg1[0xfc] & 7) == 0)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 1
                                    if ((arg1[0xfc] & 7) == 0 && *(arg1 + 0xe4) u>= 5)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 2
                                    if (((*(arg1 + 0xfc)).b & 7) == 4)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 3
                                    if ((arg1[0xfc] & 3) == 0 && *(arg1 + 0xe4) u>= 3)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 4
                                    if (((*(arg1 + 0xfc)).b & 3) == 2)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 5
                                    if ((arg1[0xfc] & 1) == 0 && *(arg1 + 0xe4) u>= 2)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                                case 6
                                    if ((arg1[0xfc] & 1) != 0)
                                        goto label_665f41
                                    
                                    sub_6713f0(arg1)
                        
                        i = i_1 + 1
                        result_3 = &result_3[1]
                        i_1 = i
                    while (i u< *(arg1 + 0xe8))
                    result = result_1
                
                ecx_7 = var_18_1 + 1
                var_18_1 = ecx_7
            while (ecx_7 s< result)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
