// 函数名称: sub_601dd0
// 虚拟地址: 0x601dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_601dd0(HIMC arg1, void* arg2)
{
    // 第一条实际指令: uint32_t lpCandList = ImmGetCandidateListW(arg1, 0, nullptr, 0)
    uint32_t lpCandList = ImmGetCandidateListW(arg1, 0, nullptr, 0)
    uint32_t dwBufLen = lpCandList
    
    if (dwBufLen != 0)
        uint32_t dwBufLen_1 = dwBufLen
        lpCandList = sub_5d0ac0()
        
        if (lpCandList != 0)
            if (ImmGetCandidateListW(arg1, 0, lpCandList, dwBufLen) != 0)
                void* i = nullptr
                *(arg2 + 0x14a8) = *(lpCandList + 0xc)
                void* i_2 = nullptr
                *(arg2 + 0x14a0) = *(lpCandList + 8)
                
                if (*(arg2 + 0x14e4) != 0x804)
                label_601ea5:
                    int32_t ecx_5 = *(lpCandList + 0x14)
                    
                    if (ecx_5 u>= 0xa)
                        ecx_5 = 0xa
                    
                    *(arg2 + 0x14ac) = ecx_5
                    i_2 = divu.dp.d(0:(*(lpCandList + 0xc)), ecx_5) * ecx_5
                else
                    if (sub_601720(arg2, 0) == 0)
                        goto label_601ea5
                    
                    int32_t var_c_1 = 0
                    
                    if (*(arg2 + 0x14a0) u> 0)
                        int32_t* var_10_1 = lpCandList + 0x18
                        
                        do
                            int32_t eax_6 = sub_5cd1d0(*var_10_1 + lpCandList) + 1
                            int32_t ecx_4 = eax_6 + var_c_1
                            
                            if (ecx_4 u<= 0x12)
                                var_c_1 = ecx_4
                            else
                                if (i u> *(lpCandList + 0xc))
                                    break
                                
                                i_2 = i
                                var_c_1 = eax_6
                            
                            var_10_1 = &var_10_1[1]
                            i += 1
                        while (i u< *(arg2 + 0x14a0))
                    
                    *(arg2 + 0x14ac) = i - i_2
                
                int32_t var_20_3 = 0x1400
                int32_t var_24_3 = 0
                void* var_28_1 = arg2 + 0xa0
                sub_5cd100()
                int32_t i_1 = 0
                
                if (i_2 u< *(lpCandList + 8))
                    int16_t* ecx_6 = lpCandList + (i_2 << 2) + 0x18
                    int16_t* var_10_2 = ecx_6
                    
                    while (i_1 s< *(arg2 + 0x14ac))
                        int32_t var_20_4 = *var_10_2 + lpCandList
                        sub_601d30(arg2, i_1, ecx_6)
                        var_10_2 = &var_10_2[2]
                        i_1 += 1
                        ecx_6 = i_2 + i_1
                        
                        if (ecx_6 u>= *(lpCandList + 8))
                            break
                
                void* eax_11
                eax_11.w = *(arg2 + 0x14e4)
                eax_11.w &= 0x3ff
                
                if (eax_11.w == 0x12)
                    *(arg2 + 0x14a8) = 0xffffffff
                else if (eax_11.w == 0x404 && sub_601720(arg2, 0) == 0)
                    *(arg2 + 0x14a8) = 0xffffffff
            
            uint32_t lpCandList_1 = lpCandList
            return sub_5d0af0()
    
    return lpCandList
}
