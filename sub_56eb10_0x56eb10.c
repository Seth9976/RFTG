// 函数名称: sub_56eb10
// 虚拟地址: 0x56eb10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_56eb10(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg2
    void* ebx = arg2
    void* eax_1 = *(*(ebx + 0x58) + 4)
    
    if (eax_1 == 0x1e)
        sub_57a370(arg1)
        LRESULT eax_2
        eax_2.b = 1
        return eax_2
    
    if (eax_1 != 5)
        if (eax_1 == 0x22)
            return sub_52f860(arg1)
        
        int32_t* esi_1 = arg1
        float var_c_1 = fconvert.s(float.t(1))
        
        if (*esi_1 == 9)
            var_c_1 = fconvert.s(float.t(1) - float.t(esi_1[3]) * fconvert.t(0.0020000000949949026))
            *(ebx + 0x54) = fconvert.s(fconvert.t(var_c_1) * fconvert.t(*(ebx + 0x54)))
        
        float* ecx
        void* edi_1 = sub_4e7b40(ecx, data_3079274)
        
        if (edi_1 != 0)
            if (*esi_1 == 0)
                if (esi_1[1] == 0x61)
                    eax_1, ecx = sub_4e7210(*edi_1)
                    void* esi_3 = eax_1
                    int32_t i = 0
                    
                    if (*(esi_3 + 4) s> 0)
                        int32_t var_10_1 = 0
                        
                        do
                            eax_1, ecx = sub_4e86d0(ecx, *(*esi_3 + var_10_1), edi_1)
                            
                            if (eax_1.b != 0)
                                *(esi_3 + 4)
                                float* var_24_3 = ecx
                                *(*esi_3 + mods.dp.d(sx.q(i + 1), *(esi_3 + 4)) * 0x10)
                                int32_t eax_14
                                int80_t st0
                                st0, eax_14 = sub_4e8720(edi_1, 0, fconvert.s(float.t(1)))
                                eax_14.b = 1
                                return eax_14
                            
                            var_10_1 += 0x10
                            i += 1
                        while (i s< *(esi_3 + 4))
                    
                    esi_1 = arg1
                    ebx = arg2
                
                if (*esi_1 == 0)
                    if (esi_1[1] == 0x41)
                        eax_1, ecx = sub_4e7210(*edi_1)
                        void** esi_5 = eax_1
                        int32_t i_1 = 0
                        
                        if (esi_5[1] s> 0)
                            int32_t var_10_2 = 0
                            
                            do
                                eax_1, ecx = sub_4e86d0(ecx, *(*esi_5 + var_10_2), edi_1)
                                
                                if (eax_1.b != 0)
                                    int32_t eax_15 = i_1 - 1
                                    
                                    if (eax_15 == 0xffffffff)
                                        eax_15 = esi_5[1] - 1
                                    
                                    float* var_24_5 = ecx
                                    *(*esi_5 + eax_15 * 0x10)
                                    int32_t eax_18
                                    int80_t st0_1
                                    st0_1, eax_18 = sub_4e8720(edi_1, 0, fconvert.s(float.t(1)))
                                    eax_18.b = 1
                                    return eax_18
                                
                                var_10_2 += 0x10
                                i_1 += 1
                            while (i_1 s< esi_5[1])
                        
                        esi_1 = arg1
                        ebx = arg2
                    
                    if (*esi_1 == 0)
                        if (esi_1[1] == 0x2b)
                            *(edi_1 + 0x14) = fconvert.s(fconvert.t(*(edi_1 + 0x14)) * fconvert.t(1.25))
                        
                        if (*esi_1 == 0 && esi_1[1] == 0x2d)
                            *(edi_1 + 0x14) = fconvert.s(fconvert.t(*(edi_1 + 0x14))
                                * fconvert.t(0.80000001192092896))
            
            long double x87_r7_11 = fconvert.t(var_c_1)
            *(edi_1 + 0x34) = fconvert.s(x87_r7_11 * fconvert.t(*(edi_1 + 0x34)))
            *(edi_1 + 0x48) = fconvert.s(x87_r7_11 * fconvert.t(*(edi_1 + 0x48)))
            
            if (*esi_1 == 0 && esi_1[1] == 0x62)
                eax_1.b = data_3079278 == 0
                int32_t ecx_2
                ecx_2.b = eax_1.b == 0
                data_3079278 = eax_1.b
                eax_1, ecx = sub_56ea90(edi_1, ecx_2)
        
        if (*esi_1 == 3)
            int32_t* edx_4 = *(ebx + 0x58)
            
            if (edx_4 != 0)
                eax_1 = edx_4[1]
                
                if (eax_1 == 0x19)
                    void* var_24_2 = &esi_1[4]
                    int128_t* eax_9 = sub_4eb510(eax_1, edx_4, ecx)
                    
                    if (sub_4c6320(0x10).b != 0)
                        *(ebx + 0x64) = *(eax_9 + 0x78)
                        *(ebx + 0x6c) = esi_1[4]
                        int32_t ecx_3 = esi_1[5]
                        *(ebx + 0x68) = fconvert.s(float.t(0))
                        *(ebx + 0x70) = ecx_3
                        int32_t eax_10
                        eax_10.b = 1
                        return eax_10
                else if (eax_1 == 0x18)
                    sub_56ef50(fconvert.s(fconvert.t(esi_1[4])), fconvert.s(fconvert.t(esi_1[5])))
    
    eax_1.b = 1
    return eax_1
}
