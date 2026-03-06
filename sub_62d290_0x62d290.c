// 函数名称: sub_62d290
// 虚拟地址: 0x62d290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_62d290(int32_t* arg1)
{
    // 第一条实际指令: uint32_t ebx = zx.d(*(arg1 + 0x3f))
    uint32_t ebx = zx.d(*(arg1 + 0x3f))
    
    if (ebx == 0x80)
        int32_t __saved_esi = 0xf7de
        int32_t eax
        int32_t ecx
        return sub_62ca10(eax, arg1, ecx)
    
    int32_t* eax_2 = arg1[6]
    int16_t* esi = arg1[5]
    int16_t* edi = *arg1
    int32_t i = arg1[7]
    int32_t ecx_2 = arg1[4] s>> 1
    int32_t edx_2 = arg1[9] s>> 1
    int32_t var_c = ecx_2
    uint32_t ebx_1 = ebx u>> 3
    
    while (i != 0)
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(eax_2 + 3)
        int32_t var_8_1 = (eax_6 + (edx_4 & 3)) s>> 2
        
        switch (eax_2 & 3)
            case nullptr
                goto label_62d365
            case 1
                goto label_62d316
            case 2
                while (true)
                    uint32_t ecx_33 = zx.d(*esi)
                    uint32_t eax_22 = zx.d(*edi)
                    int32_t edx_24 = (ecx_33 << 0x10 | ecx_33) & 0x7e0f81f
                    int32_t ecx_42 = ((((((eax_22 << 0x10 | eax_22) & 0x7e0f81f) - edx_24) * ebx_1)
                        u>> 5) + edx_24) & 0x7e0f81f
                    edi = &edi[1]
                    *esi = (ecx_42 u>> 0x10).w | ecx_42.w
                    esi = &esi[1]
                label_62d316:
                    uint32_t ecx_3 = zx.d(*esi)
                    uint32_t eax_11 = zx.d(*edi)
                    int32_t edx_9 = (ecx_3 << 0x10 | ecx_3) & 0x7e0f81f
                    int32_t ecx_12 = ((((((eax_11 << 0x10 | eax_11) & 0x7e0f81f) - edx_9) * ebx_1)
                        u>> 5) + edx_9) & 0x7e0f81f
                    *esi = (ecx_12 u>> 0x10).w | ecx_12.w
                    int32_t eax_16 = var_8_1 - 1
                    edi = &edi[1]
                    esi = &esi[1]
                    var_8_1 = eax_16
                    
                    if (eax_16 s<= 0)
                        break
                    
                label_62d365:
                    uint32_t ecx_13 = zx.d(*esi)
                    uint32_t eax_17 = zx.d(*edi)
                    int32_t edx_13 = (ecx_13 << 0x10 | ecx_13) & 0x7e0f81f
                    int32_t ecx_22 = ((((((eax_17 << 0x10 | eax_17) & 0x7e0f81f) - edx_13) * ebx_1)
                        u>> 5) + edx_13) & 0x7e0f81f
                    edi = &edi[1]
                    *esi = (ecx_22 u>> 0x10).w | ecx_22.w
                    esi = &esi[1]
                label_62d3a5:
                    uint32_t ecx_23 = zx.d(*esi)
                    uint32_t eax_18 = zx.d(*edi)
                    int32_t edx_20 = (ecx_23 << 0x10 | ecx_23) & 0x7e0f81f
                    int32_t ecx_32 = ((((((eax_18 << 0x10 | eax_18) & 0x7e0f81f) - edx_20) * ebx_1)
                        u>> 5) + edx_20) & 0x7e0f81f
                    edi = &edi[1]
                    *esi = (ecx_32 u>> 0x10).w | ecx_32.w
                    esi = &esi[1]
                
                ecx_2 = var_c
            case 3
                goto label_62d3a5
        
        esi = &esi[edx_2]
        i -= 1
        edi = &edi[ecx_2]
    
    return i - 1
}
