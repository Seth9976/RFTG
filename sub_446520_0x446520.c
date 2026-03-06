// 函数名称: sub_446520
// 虚拟地址: 0x446520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_446520(int32_t* arg1)
{
    // 第一条实际指令: void* eax_1 = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* eax_1 = sub_46b2b0(*(data_27e7a40 + 0x74))
    
    if (sub_41d070() == *(*(data_27e7a40 + 0x548) + 0xbfa8))
        void* eax_4 = *(data_27e7a40 + 0x548)
        
        if (*(eax_4 + 0x2c098) == 0 && *(eax_4 + 0x2c0b8) == 0)
            char eax_5
            
            if (arg1[0x1f] s<= 0x1f4)
                eax_5 = sub_446250(0x1f4, arg1)
            
            if (arg1[0x1f] s> 0x1f4 || eax_5 == 0)
                int32_t eax_18 = *(eax_1 + 0x1c)
                
                if (eax_18 u> 0x20)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x45e0, "GetActiveState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t edx_1 = zx.d(lookup_table_4469fc[eax_18])
                char eax_7
                
                switch (edx_1)
                    case 1
                        eax_7 = sub_446010(eax_18, edx_1, eax_1, arg1)
                    label_4465b1:
                        
                        if (eax_7 != 0)
                            return 1
                    case 2
                        if (eax_18 == 0x14 && *(eax_1 + 0x1f3c) == arg1[0x2b])
                            return 6
                        
                        if (*(eax_1 + 0x550) s< *(eax_1 + 0x558))
                            char eax_10 = sub_446100(arg1)
                            char eax_11
                            
                            if (eax_10 != 0)
                                eax_11 = sub_4464e0(eax_1)
                            
                            if (eax_10 != 0 && eax_11 != 0 && *(eax_1 + 0x550) == 0)
                                return 0xb
                            
                            if (sub_446100(arg1) != 0)
                                return 5
                            
                        label_446611:
                            
                            if (sub_436af0(arg1) != 0 && sub_4464e0(eax_1) != 0
                                    && *(eax_1 + 0x550) == 0)
                                return 6
                    case 3
                        char eax_17
                        
                        if (arg1[0x1f] s<= 0x1f4)
                            eax_17 = sub_446250(0x1f4, arg1)
                        
                        if (arg1[0x1f] s> 0x1f4 || eax_17 == 0)
                            eax_7 = sub_446100(arg1)
                            goto label_4465b1
                    case 4
                        if (arg1[0x1f] s<= 0x1f4)
                            eax_18, edx_1 = sub_446250(0x1f4, arg1)
                        
                        if (arg1[0x1f] s> 0x1f4 || eax_18.b == 0)
                            int32_t eax_19
                            int32_t edx_2
                            eax_19, edx_2 = sub_445fd0(eax_18, edx_1, eax_1, arg1)
                            
                            if (eax_19.b != 0)
                                return 7
                            
                            if (sub_446010(eax_19, edx_2, eax_1, arg1) != 0)
                                return 8
                            
                            int32_t eax_22 = *(eax_1 + 0x1f30)
                            int32_t edx_3 = *(eax_1 + 0x1f34)
                            
                            if (eax_22 s< edx_3)
                                void* ecx_5 = eax_1 + (eax_22 << 2) + 0x1a10
                                
                                do
                                    if (*ecx_5 == arg1[0x2b])
                                        return 9
                                    
                                    eax_22 += 1
                                    ecx_5 += 4
                                while (eax_22 s< edx_3)
                            
                            if (*(eax_1 + 0x550) s< *(eax_1 + 0x558))
                                char eax_23 = sub_446100(arg1)
                                char eax_24
                                
                                if (eax_23 != 0)
                                    eax_24 = sub_4464e0(eax_1)
                                
                                if (eax_23 != 0 && eax_24 != 0 && *(eax_1 + 0x550) == 0)
                                    return 0xb
                                
                                if (sub_446100(arg1) != 0)
                                    return 5
                                
                                goto label_446611
                    case 5
                        if (*(eax_1 + 0x1f3c) == arg1[0x2b])
                            return 6
                        
                    label_446848:
                        
                        if (sub_446100(arg1) != 0)
                            return 5
                    case 6
                        if (*(eax_1 + 0x1f3c) == arg1[0x2b])
                            return 6
                        
                        goto label_446809
                    case 7
                    label_446720:
                        
                        if (sub_446100(arg1) != 0)
                            return 8
                    case 8
                        if (*(eax_1 + 0xa94) != 0)
                            goto label_446720
                        
                        if (sub_446010(eax_18, edx_1, eax_1, arg1) != 0)
                            return 8
                    case 9
                        if (*(eax_1 + 0x1f3c) == arg1[0x2b])
                            return 6
                        
                        if (*(eax_1 + 0x550) s< *(eax_1 + 0x558) && *arg1 == 1
                                && sub_446050(eax_1, arg1) != 0)
                            if (*(eax_1 + 0x560) != 0)
                                int32_t edx_5 = arg1[0x20]
                                int32_t var_10_9 = edx_5
                                
                                if (sub_446170(*(data_27e7a40 + 0x74), edx_5) != 0)
                                    return 0
                            
                            return 5
                    case 0xa
                    label_446809:
                        
                        if (sub_446100(arg1) != 0)
                            return 0xb
                    case 0xb
                        int32_t eax_46 = *(eax_1 + 0x1f3c)
                        
                        if (eax_46 == arg1[0x2b])
                            return 6
                        
                        int32_t eax_47
                        int32_t edx_8
                        eax_47, edx_8 = sub_445fd0(eax_46, edx_1, eax_1, arg1)
                        
                        if (eax_47.b != 0)
                            return 7
                        
                        if (sub_446010(eax_47, edx_8, eax_1, arg1) != 0)
                            return 8
                        
                        if (sub_446100(arg1) != 0 && (*(eax_1 + 0xa94) == 1 || *(eax_1 + 0x1f30) == 1))
                            return 5
                    case 0xc
                        int32_t eax_38 = arg1[0x1f]
                        
                        if (eax_38 s>= 0 && eax_38 s< 0x1f4
                                && *(*(sub_418a10() + arg1[0x1f] * 0x14 + 0x46c) + 4) == 0xa2)
                            return 0xc
                    case 0xd
                        if (*(eax_1 + 0xa94) == 0)
                            if (sub_446010(eax_18, edx_1, eax_1, arg1) != 0)
                                return 8
                            
                            if (*(eax_1 + 0x550) s< *(eax_1 + 0x558) && sub_446100(arg1) != 0)
                                return 3
                        else if (*(eax_1 + 0x550) s< *(eax_1 + 0x558) && sub_446100(arg1) != 0)
                            *(eax_1 + 0x574)
                            
                            if (sub_4461e0(sub_4185c0(), arg1) != 0)
                                return 4
                    case 0xe
                        int32_t eax_58
                        int32_t edx_10
                        eax_58, edx_10 = sub_445fd0(eax_18, edx_1, eax_1, arg1)
                        
                        if (eax_58.b != 0)
                            return 7
                        
                        if (sub_446010(eax_58, edx_10, eax_1, arg1) != 0)
                            return 8
                        
                        if (*(eax_1 + 0x550) s>= *(eax_1 + 0x558))
                            return 0
                        
                        goto label_446848
    
    return 0
}
