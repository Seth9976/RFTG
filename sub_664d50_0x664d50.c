// 函数名称: sub_664d50
// 虚拟地址: 0x664d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_664d50(void* arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* ebx_1 = arg2
        
        if (ebx_1 != 0)
            int32_t ecx_1 = arg4
            
            if (ecx_1 != 0)
                int32_t eax = *(ebx_1 + 0x30)
                int32_t esi = *(ebx_1 + 0x34)
                int32_t eax_1 = eax + ecx_1
                
                if (eax_1 s> esi)
                    int128_t* edi_1 = *(ebx_1 + 0x38)
                    
                    if (edi_1 == 0)
                        *(ebx_1 + 0x34) = ecx_1 + 8
                        *(ebx_1 + 0x30) = 0
                        int32_t eax_7 = sub_666560(arg1, (ecx_1 + 8) * 0x1c)
                        *(ebx_1 + 0x38) = eax_7
                        
                        if (eax_7 == 0)
                            *(ebx_1 + 0x34) = esi
                            *(ebx_1 + 0x30) = eax
                            return 1
                        
                        *(ebx_1 + 0xb8) |= 0x4000
                    else
                        *(ebx_1 + 0x34) = eax_1 + 8
                        int128_t* eax_3 = sub_666560(arg1, (eax_1 + 8) * 0x1c)
                        *(ebx_1 + 0x38) = eax_3
                        
                        if (eax_3 == 0)
                            *(ebx_1 + 0x34) = esi
                            *(ebx_1 + 0x38) = edi_1
                            return 1
                        
                        sub_5ab990(eax_3, edi_1, esi * 0x1c)
                        sub_666530(arg1, edi_1)
                    
                    ecx_1 = arg4
                
                int32_t var_14_1 = 0
                
                if (ecx_1 s<= 0)
                    return 0
                
                int32_t* edi_3 = arg3 + 0x14
                
                while (true)
                    PSTR lpString = edi_3[-4]
                    int32_t* esi_1 = *(ebx_1 + 0x38) + *(ebx_1 + 0x30) * 0x1c
                    
                    if (lpString != 0)
                        int32_t ecx_13 = edi_3[-5]
                        
                        if (ecx_13 s< 0xffffffff || ecx_13 s>= 3)
                            sub_664100(arg1, "text compression mode is out of range")
                        else
                            int32_t eax_10 = lstrlenA(lpString)
                            char* var_8_1
                            void* ebx_2
                            
                            if (edi_3[-5] s> 0)
                                PSTR lpString_2 = *edi_3
                                
                                if (lpString_2 == 0)
                                    var_8_1 = nullptr
                                else
                                    var_8_1 = lstrlenA(lpString_2)
                                
                                PSTR lpString_3 = edi_3[1]
                                
                                if (lpString_3 == 0)
                                    ebx_2 = nullptr
                                else
                                    ebx_2 = lstrlenA(lpString_3)
                            else
                                var_8_1 = nullptr
                                ebx_2 = nullptr
                            
                            char* lpString_1 = edi_3[-3]
                            int32_t var_10_1
                            
                            if (lpString_1 == 0 || *lpString_1 == 0)
                                var_10_1 = 0
                                int32_t ecx_14
                                ecx_14.b = edi_3[-5] s> 0
                                *esi_1 = ecx_14 * 2 - 1
                            else
                                var_10_1 = lstrlenA(lpString_1)
                                *esi_1 = edi_3[-5]
                            
                            int128_t* eax_16 = sub_666560(arg1, var_10_1 + ebx_2 + var_8_1 + eax_10 + 4)
                            esi_1[1] = eax_16
                            
                            if (eax_16 == 0)
                                return 1
                            
                            sub_5ab990(eax_16, edi_3[-4], eax_10)
                            *(eax_10 + esi_1[1]) = 0
                            int128_t* eax_18 = esi_1[1] + eax_10 + 1
                            
                            if (edi_3[-5] s<= 0)
                                esi_1[5] = 0
                                esi_1[6] = 0
                                esi_1[2] = eax_18
                            else
                                esi_1[5] = eax_18
                                sub_5ab990(eax_18, *edi_3, var_8_1)
                                var_8_1[esi_1[5]] = 0
                                void* eax_20 = &var_8_1[esi_1[5] + 1]
                                esi_1[6] = eax_20
                                sub_5ab990(eax_20, edi_3[1], ebx_2)
                                *(ebx_2 + esi_1[6]) = 0
                                esi_1[2] = ebx_2 + esi_1[6] + 1
                            
                            if (var_10_1 != 0)
                                sub_5ab990(esi_1[2], edi_3[-3], var_10_1)
                            
                            *(var_10_1 + esi_1[2]) = 0
                            
                            if (*esi_1 s<= 0)
                                esi_1[3] = var_10_1
                                esi_1[4] = 0
                                *(arg2 + 0x30) += 1
                                ebx_1 = arg2
                            else
                                esi_1[4] = var_10_1
                                esi_1[3] = 0
                                *(arg2 + 0x30) += 1
                                ebx_1 = arg2
                    
                    int32_t eax_26 = var_14_1 + 1
                    edi_3 = &edi_3[7]
                    var_14_1 = eax_26
                    
                    if (eax_26 s>= arg4)
                        return 0
    
    return 0
}
