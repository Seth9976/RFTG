// 函数名称: sub_4a43c0
// 虚拟地址: 0x4a43c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a43c0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    void* ecx
    void* edx
    ecx, edx = __chkstk(0x11ac)
    int32_t var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    char* eax_2 = arg1
    void* __return_addr_1 = nullptr
    __return_addr = nullptr
    int32_t arg_24 = 0
    int32_t arg_1c = 0
    int32_t arg_28 = 0
    int32_t arg_20 = 0
    void* arg_10 = nullptr
    
    if ((*(edx + 0x18) == 0 || sx.d(*(edx + 0x19)) == eax_2) && *(edx + 0x45c) == 0)
        int32_t ecx_4 = eax_2 * 0xb4
        void arg_3c
        void* var_18_1 = &arg_3c
        int32_t var_1c_1 = 3
        int32_t eax_4 = sub_49dea0(eax_2, ecx_4 + edx + 0x20, ecx_4, edx)
        int32_t eax_5 = 0
        var_8 = eax_4
        
        if (eax_4 s> 0)
            int16_t arg_35c
            
            do
                void arg_40
                void* ecx_6 = *(&arg_40 + (eax_5 << 3))
                
                if ((*(ecx_6 + 0xc) & 4) != 0)
                    *(&arg_35c + (__return_addr_1 << 2)) = sx.d(*(&arg_3c + (eax_5 << 3)))
                    __return_addr_1 += 1
                    arg_24 = 1
                    __return_addr = __return_addr_1
                
                if ((*(ecx_6 + 0xc) & 8) != 0)
                    *(&arg_35c + (__return_addr_1 << 2)) = sx.d(*(&arg_3c + (eax_5 << 3)))
                    __return_addr_1 += 1
                    arg_1c = 1
                    __return_addr = __return_addr_1
                
                if ((*(ecx_6 + 0xc) & 0x10) != 0)
                    *(&arg_35c + (__return_addr_1 << 2)) = sx.d(*(&arg_3c + (eax_5 << 3)))
                    __return_addr_1 += 1
                    arg_28 = 1
                    __return_addr = __return_addr_1
                
                if ((*(ecx_6 + 0xc) & 0x20) != 0 && *(ecx_4 + edx + 0xa3) s> 0)
                    *(&arg_35c + (__return_addr_1 << 2)) = sx.d(*(&arg_3c + (eax_5 << 3)))
                    __return_addr_1 += 1
                    arg_20 = 1
                    __return_addr = __return_addr_1
                
                int32_t edx_12 = *(ecx_6 + 8)
                int32_t arg_30 = *(ecx_6 + 0xc)
                
                if ((edx_12 & 0x20000) != 0 && (edx_12 & 0x40000) == 0)
                    arg_10 = 1
                
                eax_5 += 1
            while (eax_5 s< var_8)
            
            int32_t edi_9 = 0
            
            if (__return_addr_1 != 0)
                int32_t ecx_11 = 0
                var_8 = 0
                int32_t arg_c = 0
                
                if (*(edx + 0x458) s> 0)
                    void* edx_15 = edx + 0x46
                    void* arg_18 = edx_15
                    int32_t arg_87c[0x148]
                    char* ebx
                    
                    while (true)
                        ebx = eax_2
                        
                        if (ecx_11 != ebx)
                            arg1 = nullptr
                            int32_t arg_2c = 0
                            
                            if (arg_24 != 0)
                                edx_15 = 0x41
                                
                                if (sub_49c940(ecx_11, 0x41, edx) != 0)
                                    edi_9 = 1
                            
                            if (arg_1c != 0)
                                edx_15 = 0x400
                                
                                if (sub_49c940(arg_c, 0x400, edx) != 0)
                                    edx_15 = 0x41
                                    arg1 = 1
                                    arg_2c = sub_49c940(ebx, 0x41, edx) * 2
                            
                            if (arg_28 != 0 && sub_4b1530(arg_c, edx_15, edx, arg_c) s> 0)
                                arg1 = 1
                            
                            if (arg_20 != 0)
                                arg1 = 1
                            
                            if (edi_9 != 0 || arg1 != edi_9)
                                int32_t eax_12 = sx.d(*arg_18)
                                arg2 = eax_12
                                
                                if (eax_12 != 0xffffffff)
                                    while (true)
                                        int32_t edx_16 = eax_12 * 5
                                        
                                        if (*(edx + (edx_16 << 2) + 0x467) == 3)
                                            void* ecx_17 = *(edx + (edx_16 << 2) + 0x46c)
                                            
                                            if (*(ecx_17 + 6) == 1)
                                                char ecx_18 = (*(ecx_17 + 0x10)).b
                                                
                                                if (((ecx_18 & 1) != 0 || arg_10 != 0)
                                                        && (arg1 != 0 || (ecx_18 & 0x40) != 0))
                                                    ebx = eax_2
                                                    
                                                    if (sub_4a1120(edx, eax_12, arg_2c, 0, 0, 1) != 0)
                                                        int32_t eax_14 = var_8
                                                        arg_87c[eax_14] = arg2
                                                        var_8 = eax_14 + 1
                                                    
                                                    eax_12 = arg2
                                        
                                        int32_t eax_17 = sx.d(*(edx + ((eax_12 * 5 + 0x11d) << 2)))
                                        arg2 = eax_17
                                        
                                        if (eax_17 == 0xffffffff)
                                            break
                                        
                                        eax_12 = arg2
                        
                        edx_15 = sx.d(*(edx + 0x458))
                        arg_18 += 0xb4
                        ecx_11 = arg_c + 1
                        arg_c = ecx_11
                        
                        if (ecx_11 s>= edx_15)
                            break
                        
                        edi_9 = 0
                    
                    if (var_8 != 0)
                        if (arg2 != 0)
                            sub_5a6aba(eax_1 ^ &var_8)
                            return 1
                        
                        int32_t eax_18 = sub_49d9e0(edx, ebx, 8, &arg_87c, &var_8, &arg_35c, 
                            &__return_addr, 0, 0, 0, 0)
                        
                        if (*(edx + 0x1ec3) == 0 && eax_18 != 0xffffffff)
                            *(edx + (sx.d(*(edx + 0x1e6a)) << 1) + 0x1e6c) = eax_18.w
                            *(sx.d(*(edx + 0x1e6a)) + edx + 0x1e84) = ebx.b
                            int32_t ecx_21
                            ecx_21.w = arg_35c
                            *(edx + (sx.d(*(edx + 0x1e6a)) << 1) + 0x1e90) = ecx_21.w
                            *(sx.d(*(edx + 0x1e6a)) + edx + 0x1ea8) = 0
                            int32_t ecx_22 = arg_35c.d
                            *(edx + 0x1e6a) += 1
                            char* eax_20 = ecx_22 * 5
                            
                            if (*(edx + 0x18) == 0)
                                int32_t eax_21 = sub_4a0d70(eax_20, ebx, edx, eax_18, ecx_22, 0)
                                int32_t eax_22 = eax_18 * 5
                                int32_t eax_23 = sub_4a0d70(eax_22, 
                                    sx.d(*(edx + (eax_22 << 2) + 0x464)), edx, eax_18, 0xffffffff, 1)
                                int32_t edx_23 = arg_35c.d
                                int32_t var_18_3 = eax_23
                                int32_t var_1c_3 = eax_21
                                sub_49c490(eax_2, edx_23, eax_21, edx_23, eax_18)
                                char arg_d9c[0x404]
                                
                                if (ecx != 0)
                                    int32_t var_18_4 = **(ecx + 8)
                                    int32_t var_1c_4 = *(ecx_4 + edx + 0x20)
                                    sub_5a733b(&arg_d9c, 
                                        "%s uses %s to attempt to take over a world.\n")
                                    char (* var_18_5)[0x404] = &arg_d9c
                                    sub_4591b0(&arg_d9c, sub_4c5680(&arg_d9c), edx, eax_2)
                                
                                int32_t var_18_6 = **(edx + (eax_22 << 2) + 0x46c)
                                int32_t var_1c_6 = **(edx + (eax_20 << 2) + 0x46c)
                                int32_t var_20_5 = *(ecx_4 + edx + 0x20)
                                sub_5a733b(&arg_d9c, "%s uses %s to attempt takeover of %s.\n")
                                char const* const var_18_7 = "takeover"
                                char (* var_1c_7)[0x404] = &arg_d9c
                                sub_4c5680("%s (%s)")
                                char (* var_18_8)[0x404] = &arg_d9c
                                eax_20 = sub_4591b0(eax_2, &arg_d9c, edx, eax_2)
                                ecx_22 = arg_35c.d
                            
                            sub_4a3e90(eax_20, edx, ecx_22, eax_18)
                            sub_5a6aba(eax_1 ^ &var_8)
                            return 1
    
    sub_5a6aba(eax_1 ^ &var_8)
    return 0
}
