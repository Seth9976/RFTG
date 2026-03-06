// 函数名称: sub_5b1ded
// 虚拟地址: 0x5b1ded
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b1ded(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t eax_1 = arg1[3]
        
        if ((eax_1.b & 0x83) != 0 && (eax_1.b & 0x40) == 0)
            if ((eax_1.b & 2) == 0)
                int32_t eax_3 = eax_1 | 1
                arg1[3] = eax_3
                
                if ((eax_3 & 0x10c) != 0)
                    *arg1 = arg1[2]
                else
                    sub_5b8ca8(arg1)
                
                int32_t eax_6 = sub_5b4386(__fileno(arg1), arg1[2], arg1[6])
                arg1[1] = eax_6
                
                if (eax_6 != 0 && eax_6 != 0xffffffff)
                    if ((arg1[3].b & 0x82) == 0)
                        int32_t eax_7 = __fileno(arg1)
                        int32_t eax_8
                        
                        if (eax_7 != 0xffffffff)
                            eax_8 = __fileno(arg1)
                        
                        void* eax_14
                        
                        if (eax_7 == 0xffffffff || eax_8 == 0xfffffffe)
                            eax_14 = &data_8b8ea8
                        else
                            int32_t edi
                            int32_t var_c_5 = edi
                            void* edi_1 = &(&data_3166ee0)[__fileno(arg1) s>> 5]
                            eax_14 = ((__fileno(arg1) & 0x1f) << 6) + *edi_1
                        
                        eax_14.b = *(eax_14 + 4)
                        eax_14.b &= 0x82
                        
                        if (eax_14.b == 0x82)
                            arg1[3] |= 0x2000
                    
                    if (arg1[6] == 0x200)
                        int32_t eax_15 = arg1[3]
                        
                        if ((eax_15.b & 8) != 0 && (eax_15 & 0x400) == 0)
                            arg1[6] = 0x1000
                    
                    char* ecx_6 = *arg1
                    arg1[1] -= 1
                    uint32_t result = zx.d(*ecx_6)
                    *arg1 = &ecx_6[1]
                    return result
                
                int32_t eax_16 = neg.d(eax_6)
                arg1[3] |= (sbb.d(eax_16, eax_16, eax_6 != 0) & 0x10) + 0x10
                arg1[1] = 0
            else
                arg1[3] = eax_1 | 0x20
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return 0xffffffff
}
