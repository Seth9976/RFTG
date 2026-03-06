// 函数名称: sub_62c290
// 虚拟地址: 0x62c290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62c290(int32_t* arg1)
{
    // 第一条实际指令: uint32_t ebx = zx.d(*(arg1 + 0x3f))
    uint32_t ebx = zx.d(*(arg1 + 0x3f))
    
    if (ebx == 0x80)
        return sub_62c120(arg1)
    
    int32_t ecx = arg1[6]
    int32_t i = arg1[7]
    int32_t* esi = arg1[5]
    int32_t* edi = *arg1
    int32_t ecx_2 = arg1[4] s>> 2
    int32_t eax_3 = arg1[9] s>> 2
    int32_t var_10 = ecx_2
    
    while (i != 0)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(ecx + 3)
        int32_t var_c_1 = (eax_7 + (edx_1 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_62c36c
            case 1
                goto label_62c308
            case 2
                while (true)
                    int32_t edx_36 = *esi
                    int32_t ecx_24 = *edi
                    int32_t* edx_37 = edx_36 & 0xff00
                    int32_t eax_24 = edx_36 & 0xff00ff
                    *esi = ((((((ecx_24 & 0xff00ff) - eax_24) * ebx) u>> 8) + eax_24) & 0xffff00ff)
                        | ((((((ecx_24 & 0xff00) - edx_37) * ebx) u>> 8) + edx_37) & 0xff00)
                        | 0xff000000
                    edi = &edi[1]
                    esi = &esi[1]
                label_62c308:
                    int32_t edx_3 = *esi
                    int32_t ecx_3 = *edi
                    int32_t* edx_4 = edx_3 & 0xff00
                    int32_t eax_13 = edx_3 & 0xff00ff
                    int32_t eax_16 = var_c_1 - 1
                    *esi = ((((((ecx_3 & 0xff00ff) - eax_13) * ebx) u>> 8) + eax_13) & 0xffff00ff)
                        | ((((((ecx_3 & 0xff00) - edx_4) * ebx) u>> 8) + edx_4) & 0xff00) | 0xff000000
                    edi = &edi[1]
                    esi = &esi[1]
                    var_c_1 = eax_16
                    
                    if (eax_16 s<= 0)
                        break
                    
                label_62c36c:
                    int32_t edx_14 = *esi
                    int32_t ecx_10 = *edi
                    int32_t* edx_15 = edx_14 & 0xff00
                    int32_t eax_18 = edx_14 & 0xff00ff
                    *esi = ((((((ecx_10 & 0xff00ff) - eax_18) * ebx) u>> 8) + eax_18) & 0xffff00ff)
                        | ((((((ecx_10 & 0xff00) - edx_15) * ebx) u>> 8) + edx_15) & 0xff00)
                        | 0xff000000
                    edi = &edi[1]
                    esi = &esi[1]
                label_62c3c1:
                    int32_t edx_25 = *esi
                    int32_t ecx_17 = *edi
                    int32_t* edx_26 = edx_25 & 0xff00
                    int32_t eax_21 = edx_25 & 0xff00ff
                    *esi = ((((((ecx_17 & 0xff00ff) - eax_21) * ebx) u>> 8) + eax_21) & 0xffff00ff)
                        | ((((((ecx_17 & 0xff00) - edx_26) * ebx) u>> 8) + edx_26) & 0xff00)
                        | 0xff000000
                    edi = &edi[1]
                    esi = &esi[1]
                
                ecx_2 = var_10
            case 3
                goto label_62c3c1
        
        i -= 1
        edi = &edi[ecx_2]
        esi = &esi[eax_3]
    
    return i
}
