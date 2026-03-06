// 函数名称: sub_62bec0
// 虚拟地址: 0x62bec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62bec0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t ecx = arg1[6]
    int32_t ecx_2 = arg1[4] s>> 2
    int32_t* esi = arg1[5]
    int32_t ecx_4 = arg1[9] s>> 2
    int32_t* edi = *arg1
    void* eax_1 = arg1[0xa]
    int32_t ecx_5 = *(eax_1 + 0x18)
    uint32_t eax_2 = zx.d(*(eax_1 + 0x23))
    int32_t result_1 = arg1[7]
    int32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = __allshl(0xff, 0, eax_2.b * 2)
    int32_t var_24 = edx_1
    int64_t st1 = eax_3.q
    int32_t var_3c = 0xff00ff
    int64_t st2 = 0xff00ff.q
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q(ecx + 3)
        int32_t var_24_1 = (eax_6 + (edx_2 & 3)) s>> 2
        int32_t eax_11
        
        switch (ecx & 3)
            case 0
                eax_11 = ecx_5
                goto label_62bfec
            case 1
                goto label_62bf78
            case 2
                eax_11 = ecx_5
                
                while (true)
                    int32_t edx_8 = *edi
                    int32_t ecx_20 = edx_8 & eax_11
                    uint64_t st3
                    
                    if (ecx_20 == 0)
                        edi = &edi[1]
                        esi = &esi[1]
                    else if (ecx_20 != eax_11)
                        int32_t eax_13 = *esi
                        uint64_t temp0_34 = _m_psrlq(zx.q(ecx_20), zx.q(eax_2))
                        st3 = _m_punpcklwd(temp0_34, temp0_34.d)
                        st3 = _m_punpckldq(st3, st3.d)
                        *esi = _m_packuswb(
                            _m_paddw(_m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(edx_8), 0), st3 | st1), 8), 
                                _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(eax_13), 0), st3 ^ st2), 8)), 
                            0).d
                        edi = &edi[1]
                        esi = &esi[1]
                    else
                        *esi = edx_8
                        edi = &edi[1]
                        esi = &esi[1]
                    
                label_62bf78:
                    int32_t edx_4 = *edi
                    eax_11 = ecx_5
                    int32_t ecx_9 = edx_4 & eax_11
                    
                    if (ecx_9 != 0)
                        if (ecx_9 != eax_11)
                            int32_t ecx_10 = *esi
                            uint64_t temp0_1 = _m_psrlq(zx.q(ecx_9), zx.q(eax_2))
                            st3 = _m_punpcklwd(temp0_1, temp0_1.d)
                            st3 = _m_punpckldq(st3, st3.d)
                            edx_4 = _m_packuswb(
                                _m_paddw(
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(edx_4), 0), st3 | st1), 8), 
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(ecx_10), 0), st3 ^ st2), 8)), 
                                0).d
                        
                        *esi = edx_4
                    
                    int32_t ecx_12 = var_24_1 - 1
                    edi = &edi[1]
                    esi = &esi[1]
                    var_24_1 = ecx_12
                    
                    if (ecx_12 s<= 0)
                        break
                    
                label_62bfec:
                    int32_t edx_6 = *edi
                    int32_t ecx_14 = edx_6 & eax_11
                    
                    if (ecx_14 != 0)
                        if (ecx_14 != eax_11)
                            int32_t ecx_15 = *esi
                            uint64_t temp0_12 = _m_psrlq(zx.q(ecx_14), zx.q(eax_2))
                            st3 = _m_punpcklwd(temp0_12, temp0_12.d)
                            st3 = _m_punpckldq(st3, st3.d)
                            edx_6 = _m_packuswb(
                                _m_paddw(
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(edx_6), 0), st3 | st1), 8), 
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(ecx_15), 0), st3 ^ st2), 8)), 
                                0).d
                        
                        *esi = edx_6
                    
                    edi = &edi[1]
                    esi = &esi[1]
                label_62c043:
                    int32_t edx_7 = *edi
                    int32_t ecx_17 = edx_7 & eax_11
                    
                    if (ecx_17 != 0)
                        if (ecx_17 != eax_11)
                            int32_t ecx_18 = *esi
                            uint64_t temp0_23 = _m_psrlq(zx.q(ecx_17), zx.q(eax_2))
                            st3 = _m_punpcklwd(temp0_23, temp0_23.d)
                            st3 = _m_punpckldq(st3, st3.d)
                            edx_7 = _m_packuswb(
                                _m_paddw(
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(edx_7), 0), st3 | st1), 8), 
                                    _m_psrlwi(_m_pmullw(_m_punpckhwd(zx.q(ecx_18), 0), st3 ^ st2), 8)), 
                                0).d
                        
                        *esi = edx_7
                    
                    edi = &edi[1]
                    esi = &esi[1]
            case 3
                eax_11 = ecx_5
                goto label_62c043
        
        edi = &edi[ecx_2]
        esi = &esi[ecx_4]
    
    return result
}
