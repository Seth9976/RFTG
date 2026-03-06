// 函数名称: sub_5a7ac0
// 虚拟地址: 0x5a7ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a7ac0(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10c = edi
    
    if (arg1 == 0 && arg2 != 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 
    
    int32_t ebx = arg3
    
    if (ebx == 0 || arg4 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (arg2 u>= 2)
        char* esi_3 = (arg2 - 1) * ebx + arg1
        void* var_10_1 = nullptr
        char* var_8_1 = arg1
        char* var_c_1 = esi_3
        char* edi_4 = arg1
        
        while (true)
            void* eax_5 = esi_3 - edi_4
            int32_t edx_1 = 0
            int32_t var_104[0x1e]
            int32_t var_8c[0x1e]
            void* ecx
            
            if (divu.dp.d(edx_1:eax_5, ebx) + 1 u> 8)
                char* ebx_2 = ebx * ((divu.dp.d(edx_1:eax_5, ebx) + 1) u>> 1) + edi_4
                
                if (arg4(edi_4, ebx_2) s> 0)
                    int32_t i = arg3
                    char* eax_12 = ebx_2
                    
                    if (edi_4 != ebx_2)
                        char* ecx_2 = edi_4 - ebx_2
                        
                        do
                            arg1:3.b = *(ecx_2 + eax_12)
                            *(ecx_2 + eax_12) = *eax_12
                            *eax_12 = arg1:3.b
                            i -= 1
                            eax_12 = &eax_12[1]
                        while (i != 0)
                
                if (arg4(edi_4, esi_3) s> 0)
                    int32_t i_9 = arg3
                    char* eax_14 = esi_3
                    
                    if (edi_4 != esi_3)
                        void* edi_5 = edi_4 - esi_3
                        int32_t i_1
                        
                        do
                            arg1:3.b = *(edi_5 + eax_14)
                            *(edi_5 + eax_14) = *eax_14
                            *eax_14 = arg1:3.b
                            eax_14 = &eax_14[1]
                            i_1 = i_9
                            i_9 -= 1
                        while (i_1 != 1)
                        edi_4 = var_8_1
                
                if (arg4(ebx_2, esi_3) s> 0)
                    int32_t i_10 = arg3
                    char* eax_16 = esi_3
                    
                    if (ebx_2 != esi_3)
                        char* edi_7 = ebx_2 - esi_3
                        int32_t i_2
                        
                        do
                            arg1:3.b = *(edi_7 + eax_16)
                            *(edi_7 + eax_16) = *eax_16
                            *eax_16 = arg1:3.b
                            eax_16 = &eax_16[1]
                            i_2 = i_10
                            i_10 -= 1
                        while (i_2 != 1)
                        edi_4 = var_8_1
                
                while (true)
                    if (ebx_2 u<= edi_4)
                    label_5a7c32:
                        int32_t i_3
                        
                        do
                            edi_4 = &edi_4[arg3]
                            
                            if (edi_4 u> var_c_1)
                                break
                            
                            i_3 = arg4(edi_4, ebx_2)
                        while (i_3 s<= 0)
                    else
                        int32_t i_4
                        
                        do
                            edi_4 = &edi_4[arg3]
                            
                            if (edi_4 u>= ebx_2)
                                goto label_5a7c32
                            
                            i_4 = arg4(edi_4, ebx_2)
                        while (i_4 s<= 0)
                        
                        if (ebx_2 u<= edi_4)
                            goto label_5a7c32
                    
                    int32_t i_5
                    
                    do
                        esi_3 -= arg3
                        
                        if (esi_3 u<= ebx_2)
                            break
                        
                        i_5 = arg4(esi_3, ebx_2)
                    while (i_5 s> 0)
                    
                    if (edi_4 u> esi_3)
                        break
                    
                    int32_t i_6 = arg3
                    char* eax_17 = esi_3
                    
                    if (edi_4 != esi_3)
                        void* ecx_5 = edi_4 - esi_3
                        
                        do
                            arg1:3.b = *(ecx_5 + eax_17)
                            *(ecx_5 + eax_17) = *eax_17
                            *eax_17 = arg1:3.b
                            i_6 -= 1
                            eax_17 = &eax_17[1]
                        while (i_6 != 0)
                    
                    if (ebx_2 == esi_3)
                        ebx_2 = edi_4
                
                esi_3 = &esi_3[arg3]
                char* eax_18
                
                if (ebx_2 u>= esi_3)
                label_5a7cb4:
                    int32_t i_7
                    
                    do
                        esi_3 -= arg3
                        eax_18 = var_8_1
                        
                        if (esi_3 u<= eax_18)
                            goto label_5a7cc0
                        
                        i_7 = arg4(esi_3, ebx_2)
                    while (i_7 == 0)
                else
                    int32_t i_8
                    
                    do
                        esi_3 -= arg3
                        
                        if (esi_3 u<= ebx_2)
                            goto label_5a7cb4
                        
                        i_8 = arg4(esi_3, ebx_2)
                    while (i_8 == 0)
                    
                    if (ebx_2 u>= esi_3)
                        goto label_5a7cb4
                
                eax_18 = var_8_1
            label_5a7cc0:
                ecx = var_c_1 - edi_4
                
                if (esi_3 - eax_18 s< ecx)
                    if (edi_4 u< var_c_1)
                        var_8c[var_10_1] = edi_4
                        var_104[var_10_1] = var_c_1
                        ecx = var_10_1 + 1
                        var_10_1 = ecx
                    
                    if (eax_18 u< esi_3)
                        edi_4 = var_8_1
                        ebx = arg3
                        var_c_1 = esi_3
                        continue
                else
                    if (eax_18 u< esi_3)
                        var_8c[var_10_1] = eax_18
                        var_104[var_10_1] = esi_3
                        ecx = var_10_1 + 1
                        var_10_1 = ecx
                    
                    if (edi_4 u< var_c_1)
                        esi_3 = var_c_1
                        ebx = arg3
                        var_8_1 = edi_4
                        continue
                
                ebx = arg3
            else
                int32_t var_114_1 = arg4
                int32_t var_118_1 = ebx
                ecx = sub_5a7a30(esi_3, modu.dp.d(edx_1:eax_5, ebx), ecx, edi_4)
            void* eax = var_10_1 - 1
            bool cond:0_1 = var_10_1 - 1 s< 0
            var_10_1 = eax
            
            if (cond:0_1)
                break
            
            char* edx_18 = var_8c[eax]
            char* eax_20 = var_104[eax]
            var_8_1 = edx_18
            var_c_1 = eax_20
            esi_3 = eax_20
            edi_4 = edx_18
}
