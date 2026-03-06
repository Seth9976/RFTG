// 函数名称: sub_646d80
// 虚拟地址: 0x646d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646d80(int32_t* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ebx = *(arg2 + 0x1c)
    
    if (ebx == 0)
        return 0xffffff7f
    
    int32_t eax_3 = sub_68b0a0(arg1, 8) + 1
    *(ebx + 0x18) = eax_3
    
    if (eax_3 s> 0)
        int32_t i = 0
        
        if (eax_3 s> 0)
            void* var_8_1 = ebx + 0x720
            
            do
                int32_t* eax_4 = sub_650d90(arg1)
                *var_8_1 = eax_4
                
                if (eax_4 == 0)
                    goto label_647021
                
                var_8_1 += 4
                i += 1
            while (i s< *(ebx + 0x18))
        
        int32_t eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_68b0a0(arg1, 6)
        
        if (eax_5 + 1 s> 0)
            int32_t var_8_2 = 0
            
            while (sub_68b0a0(arg1, 0x10) == 0)
                int32_t eax_8 = var_8_2 + 1
                var_8_2 = eax_8
                
                if (eax_8 s>= eax_5 + 1)
                    int32_t eax_10 = sub_68b0a0(arg1, 6) + 1
                    *(ebx + 0x10) = eax_10
                    
                    if (eax_10 s> 0)
                        int32_t var_8_3 = 0
                        void* edi_2 = ebx + 0x420
                        
                        while (true)
                            int32_t eax_11 = sub_68b0a0(arg1, 0x10)
                            *(edi_2 - 0x100) = eax_11
                            
                            if (eax_11 s< 0)
                                break
                            
                            if (eax_11 s>= 2)
                                break
                            
                            int32_t eax_13 = (*((&data_825e6c)[eax_11] + 4))(arg2, arg1)
                            *edi_2 = eax_13
                            
                            if (eax_13 == 0)
                                break
                            
                            int32_t eax_15 = var_8_3 + 1
                            edi_2 += 4
                            var_8_3 = eax_15
                            
                            if (eax_15 s>= *(ebx + 0x10))
                                int32_t eax_17 = sub_68b0a0(arg1, 6) + 1
                                *(ebx + 0x14) = eax_17
                                
                                if (eax_17 s> 0)
                                    int32_t var_8_4 = 0
                                    void* edi_3 = ebx + 0x620
                                    
                                    while (true)
                                        int32_t eax_18 = sub_68b0a0(arg1, 0x10)
                                        *(edi_3 - 0x100) = eax_18
                                        
                                        if (eax_18 s< 0)
                                            break
                                        
                                        if (eax_18 s>= 3)
                                            break
                                        
                                        int32_t eax_20 = (*((&data_825e74)[eax_18] + 4))(arg2, arg1)
                                        *edi_3 = eax_20
                                        
                                        if (eax_20 == 0)
                                            break
                                        
                                        int32_t eax_22 = var_8_4 + 1
                                        edi_3 += 4
                                        var_8_4 = eax_22
                                        
                                        if (eax_22 s>= *(ebx + 0x14))
                                            int32_t eax_24 = sub_68b0a0(arg1, 6) + 1
                                            *(ebx + 0xc) = eax_24
                                            
                                            if (eax_24 s> 0)
                                                int32_t var_8_5 = 0
                                                void* edi_4 = ebx + 0x220
                                                
                                                while (true)
                                                    int32_t eax_25 = sub_68b0a0(arg1, 0x10)
                                                    *(edi_4 - 0x100) = eax_25
                                                    
                                                    if (eax_25 s< 0)
                                                        break
                                                    
                                                    if (eax_25 s>= 1)
                                                        break
                                                    
                                                    int32_t eax_27 =
                                                        (*((&data_825e80)[eax_25] + 4))(arg2, arg1)
                                                    *edi_4 = eax_27
                                                    
                                                    if (eax_27 == 0)
                                                        break
                                                    
                                                    int32_t eax_29 = var_8_5 + 1
                                                    edi_4 += 4
                                                    var_8_5 = eax_29
                                                    
                                                    if (eax_29 s>= *(ebx + 0xc))
                                                        int32_t eax_30
                                                        int32_t ecx_7
                                                        void* edx_5
                                                        eax_30, ecx_7, edx_5 = sub_68b0a0(arg1, 6)
                                                        int32_t eax_31 = eax_30 + 1
                                                        *(ebx + 8) = eax_31
                                                        
                                                        if (eax_31 s> 0)
                                                            int32_t var_8_6 = 0
                                                            void* edi_5 = ebx + 0x20
                                                            
                                                            while (true)
                                                                *edi_5 =
                                                                    _calloc(eax_31, edx_5, ecx_7, 1, 0x10)
                                                                **edi_5 = sub_68b0a0(arg1, 1)
                                                                *(*edi_5 + 4) = sub_68b0a0(arg1, 0x10)
                                                                *(*edi_5 + 8) = sub_68b0a0(arg1, 0x10)
                                                                int32_t eax_36 = sub_68b0a0(arg1, 8)
                                                                edx_5 = *edi_5
                                                                *(edx_5 + 0xc) = eax_36
                                                                void* eax_37 = *edi_5
                                                                ecx_7 = 1
                                                                
                                                                if (*(eax_37 + 4) s>= 1)
                                                                    break
                                                                
                                                                if (*(eax_37 + 8) s>= 1)
                                                                    break
                                                                
                                                                int32_t eax_38 = *(eax_37 + 0xc)
                                                                
                                                                if (eax_38 s>= *(ebx + 0xc))
                                                                    break
                                                                
                                                                if (eax_38 s< 0)
                                                                    break
                                                                
                                                                eax_31 = var_8_6 + 1
                                                                edi_5 += 4
                                                                var_8_6 = eax_31
                                                                
                                                                if (eax_31 s>= *(ebx + 8))
                                                                    if (sub_68b0a0(arg1, 1) == 1)
                                                                        return 0
                                                                    
                                                                    break
                                                        
                                                        break
                                            
                                            break
                                
                                break
                    
                    break
    
    label_647021:
    sub_646a00(arg2)
    return 0xffffff7b
}
