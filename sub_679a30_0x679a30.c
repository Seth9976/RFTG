// 函数名称: sub_679a30
// 虚拟地址: 0x679a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_679a30(int32_t arg1, int32_t arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: int32_t* eax = arg3[6]
    int32_t* eax = arg3[6]
    int32_t ebx = eax[1]
    char* edi = *eax
    int32_t* var_8 = eax
    arg3[0x37] = arg1
    arg3[0x38] = arg2
    
    if (ebx != 0)
        goto label_679a73
    
    if (eax[3](arg3) != 0)
        eax = var_8
        edi = *eax
        ebx = eax[1]
    label_679a73:
        uint32_t ecx_1 = zx.d(*edi) << 8
        void* edi_1 = &edi[1]
        int32_t ebx_1 = ebx - 1
        
        if (ebx != 1)
            goto label_679a95
        
        if (eax[3](arg3) != 0)
            eax = var_8
            edi_1 = *eax
            ebx_1 = eax[1]
        label_679a95:
            uint32_t var_c_2 = ecx_1 + zx.d(*edi_1)
            void* edi_2 = edi_1 + 1
            int32_t ebx_2 = ebx_1 - 1
            
            if (ebx_1 != 1)
                goto label_679ab4
            
            if (eax[3](arg3) != 0)
                eax = var_8
                edi_2 = *eax
                ebx_2 = eax[1]
            label_679ab4:
                void* edi_3 = edi_2 + 1
                int32_t ebx_3 = ebx_2 - 1
                arg3[0x35] = zx.d(*edi_2)
                
                if (ebx_2 != 1)
                    goto label_679ad9
                
                if (eax[3](arg3) != 0)
                    eax = var_8
                    edi_3 = *eax
                    ebx_3 = eax[1]
                label_679ad9:
                    void* edi_4 = edi_3 + 1
                    int32_t ebx_4 = ebx_3 - 1
                    arg3[8] = zx.d(*edi_3) << 8
                    
                    if (ebx_3 != 1)
                        goto label_679afc
                    
                    if (eax[3](arg3) != 0)
                        eax = var_8
                        edi_4 = *eax
                        ebx_4 = eax[1]
                    label_679afc:
                        arg3[8] += zx.d(*edi_4)
                        void* edi_5 = edi_4 + 1
                        int32_t ebx_5 = ebx_4 - 1
                        
                        if (ebx_4 != 1)
                            goto label_679b22
                        
                        if (eax[3](arg3) != 0)
                            eax = var_8
                            edi_5 = *eax
                            ebx_5 = eax[1]
                        label_679b22:
                            void* edi_6 = edi_5 + 1
                            int32_t ebx_6 = ebx_5 - 1
                            arg3[7] = zx.d(*edi_5) << 8
                            
                            if (ebx_5 != 1)
                                goto label_679b45
                            
                            if (eax[3](arg3) != 0)
                                eax = var_8
                                edi_6 = *eax
                                ebx_6 = eax[1]
                            label_679b45:
                                arg3[7] += zx.d(*edi_6)
                                void* edi_7 = edi_6 + 1
                                int32_t ebx_7 = ebx_6 - 1
                                
                                if (ebx_6 != 1)
                                    goto label_679b68
                                
                                if (eax[3](arg3) != 0)
                                    edi_7 = *var_8
                                    ebx_7 = var_8[1]
                                label_679b68:
                                    int32_t ecx_10 = arg3[0x68]
                                    arg3[9] = zx.d(*edi_7)
                                    void* eax_14 = *arg3
                                    *(eax_14 + 0x18) = ecx_10
                                    *(eax_14 + 0x1c) = arg3[7]
                                    *(eax_14 + 0x20) = arg3[8]
                                    *(eax_14 + 0x24) = arg3[9]
                                    *(*arg3 + 0x14) = 0x64
                                    int32_t ebx_8 = ebx_7 - 1
                                    void* edi_8 = edi_7 + 1
                                    (*(*arg3 + 4))(arg3, 1)
                                    
                                    if (*(arg3[0x6e] + 0x10) != 0)
                                        *(*arg3 + 0x14) = 0x3a
                                        (**arg3)(arg3)
                                    
                                    if (arg3[8] u<= 0 || arg3[7] u<= 0 || arg3[9] s<= 0)
                                        *(*arg3 + 0x14) = 0x20
                                        (**arg3)(arg3)
                                    
                                    if (var_c_2 - 8 != arg3[9] * 3)
                                        *(*arg3 + 0x14) = 0xb
                                        (**arg3)(arg3)
                                    
                                    if (arg3[0x36] == 0)
                                        arg3[0x36] = (*arg3[1])(arg3, 1, arg3[9] * 0x54)
                                    
                                    int32_t* ecx_18 = arg3[0x36]
                                    int32_t var_10_1 = 0
                                    int32_t* var_c_4 = ecx_18
                                    
                                    if (arg3[9] s> 0)
                                        while (true)
                                            ecx_18[1] = var_10_1
                                            
                                            if (ebx_8 == 0)
                                                if (var_8[3](arg3) == 0)
                                                    return 0
                                                
                                                edi_8 = *var_8
                                                ebx_8 = var_8[1]
                                                ecx_18 = var_c_4
                                            
                                            void* edi_9 = edi_8 + 1
                                            int32_t ebx_10 = ebx_8 - 1
                                            *ecx_18 = zx.d(*edi_8)
                                            
                                            if (ebx_8 == 1)
                                                if (var_8[3](arg3) == 0)
                                                    return 0
                                                
                                                edi_9 = *var_8
                                                ebx_10 = var_8[1]
                                                ecx_18 = var_c_4
                                            
                                            uint32_t eax_28 = zx.d(*edi_9)
                                            void* edi_10 = edi_9 + 1
                                            int32_t ebx_12 = ebx_10 - 1
                                            ecx_18[2] = eax_28 s>> 4 & 0xf
                                            ecx_18[3] = eax_28 & 0xf
                                            
                                            if (ebx_10 == 1)
                                                if (var_8[3](arg3) == 0)
                                                    return 0
                                                
                                                edi_10 = *var_8
                                                ebx_12 = var_8[1]
                                                ecx_18 = var_c_4
                                            
                                            ecx_18[4] = zx.d(*edi_10)
                                            void* eax_32 = *arg3
                                            *(eax_32 + 0x18) = *ecx_18
                                            *(eax_32 + 0x1c) = ecx_18[2]
                                            *(eax_32 + 0x20) = ecx_18[3]
                                            *(eax_32 + 0x24) = ecx_18[4]
                                            *(*arg3 + 0x14) = 0x65
                                            ebx_8 = ebx_12 - 1
                                            edi_8 = edi_10 + 1
                                            (*(*arg3 + 4))(arg3, 1)
                                            var_c_4 = &var_c_4[0x15]
                                            int32_t eax_35 = var_10_1 + 1
                                            var_10_1 = eax_35
                                            
                                            if (eax_35 s>= arg3[9])
                                                break
                                            
                                            ecx_18 = var_c_4
                                    
                                    *(arg3[0x6e] + 0x10) = 1
                                    *var_8 = edi_8
                                    var_8[1] = ebx_8
                                    return 1
    
    return 0
}
