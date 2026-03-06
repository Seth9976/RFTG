// 函数名称: sub_4e10f0
// 虚拟地址: 0x4e10f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e10f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 * 0x180 + 0x27e86b4)
    int32_t eax = *(arg1 * 0x180 + 0x27e86b4)
    int32_t esi = *(arg2 * 0x180 + 0x27e86b4)
    
    if (eax s>= esi)
        if (eax s> esi)
            eax.b = 0
            return eax
        
        eax = *(arg1 * 0x180 + 0x27e86b8)
        
        if (eax != 2)
            if (*(arg2 * 0x180 + 0x27e86b8) == 2)
            label_4e114c:
                
                if (eax == 2)
                    goto label_4e115b
                
                eax.b = 0
                return eax
            
            bool cond:4_1
            
            if (eax == 2)
            label_4e115b:
                eax = *(arg1 * 0x180 + 0x27e86c4)
                int32_t esi_1 = *(arg2 * 0x180 + 0x27e86c4)
                
                if (eax s>= esi_1)
                    if (eax s> esi_1)
                        eax.b = 0
                        return eax
                    
                    long double x87_r7_1 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                    long double x87_r6_1 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                    x87_r6_1 - x87_r7_1
                    eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    
                    if ((eax:1.b & 0x41) != 0)
                        long double x87_r7_2 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                        long double x87_r6_2 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                        x87_r6_2 - x87_r7_2
                        eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_1))
                            eax.b = 0
                            return eax
                        
                    label_4e1197:
                        int32_t edx_3 = *(arg1 * 0x180 + 0x27e86c0)
                        int32_t ecx_3 = *(arg2 * 0x180 + 0x27e86c0)
                        cond:4_1 = edx_3 s< ecx_3
                        
                        if (edx_3 s<= ecx_3)
                            goto label_4e1247
                        
                        eax.b = 0
                        return eax
            else if (eax != 5)
                long double x87_r7_5 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                bool cond:1_1 = eax == 3
                long double x87_r6_5 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                x87_r6_5 - x87_r7_5
                eax.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
                
                if (cond:1_1)
                    goto label_4e11d7
                
                if ((eax:1.b & 0x41) == 0)
                    eax.b = 0
                    return eax
                
                long double x87_r7_6 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                long double x87_r6_6 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                x87_r6_6 - x87_r7_6
                eax.w = (x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x5}
                
                if (p_3)
                    int32_t edx_4 = *(arg1 * 0x180 + 0x27e86c0)
                    int32_t ecx_4 = *(arg2 * 0x180 + 0x27e86c0)
                    cond:4_1 = edx_4 s< ecx_4
                    
                    if (edx_4 s> ecx_4)
                        eax.b = 0
                        return eax
                    
                label_4e1247:
                    
                    if (not(cond:4_1))
                        int32_t eax_1
                        eax_1.b = arg1 s< arg2
                        return eax_1
            else
                eax = *(arg1 * 0x180 + 0x27e85b4)
                int32_t esi_2 = *(arg2 * 0x180 + 0x27e85b4)
                
                if (eax u>= esi_2)
                    if (eax u> esi_2)
                        eax.b = 0
                        return eax
                    
                    long double x87_r7_3 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                    long double x87_r6_3 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                    x87_r6_3 - x87_r7_3
                    eax.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                label_4e11d7:
                    
                    if ((eax:1.b & 0x41) == 0)
                        eax.b = 0
                        return eax
                    
                    long double x87_r7_4 = fconvert.t(*(arg1 * 0x180 + 0x27e86bc))
                    long double x87_r6_4 = fconvert.t(*(arg2 * 0x180 + 0x27e86bc))
                    x87_r6_4 - x87_r7_4
                    eax.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x5}
                    
                    if (p_2)
                        goto label_4e1197
                    
                    eax.b = 1
                    return eax
        else if (*(arg2 * 0x180 + 0x27e86b8) == 2)
            goto label_4e114c
    
    eax.b = 1
    return eax
}
