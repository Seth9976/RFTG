// 函数名称: sub_620dd0
// 虚拟地址: 0x620dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_620dd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax = edi[6]
    int16_t* esi = edi[5]
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(edi[4])
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(edi[9])
    arg1 = edi[7]
    int32_t* ecx_1 = *edi
    int32_t ebx_1 = ((edx & 3) + eax_2) s>> 2
    int32_t edi_2 = (eax_4 - edx_2) s>> 1
    int32_t var_10 = edi_2
    int32_t ebx_2 = ebx_1
    void* result
    
    while (true)
        int32_t* edx_3 = arg1
        result = arg1 - 1
        arg1 = result
        
        if (edx_3 == 0)
            break
        
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = sx.q(eax + 7)
        int32_t eax_11 = (eax_9 + (edx_4 & 7)) s>> 3
        
        switch (eax & 7)
            case 0
                goto label_620e7a
            case 1
                goto label_620e46
            case 2
                while (true)
                    int32_t edx_29 = *ecx_1
                    *esi = ((edx_29 u>> 6).w & 0x3e0) | ((edx_29 u>> 3).w & 0x1f)
                        | ((edx_29 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620e46:
                    int32_t edx_8 = *ecx_1
                    *esi = ((edx_8 u>> 6).w & 0x3e0) | ((edx_8 u>> 3).w & 0x1f)
                        | ((edx_8 u>> 9).w & 0x7c00)
                    eax_11 -= 1
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                    
                    if (eax_11 s<= 0)
                        break
                    
                label_620e7a:
                    int32_t edx_11 = *ecx_1
                    *esi = ((edx_11 u>> 6).w & 0x3e0) | ((edx_11 u>> 3).w & 0x1f)
                        | ((edx_11 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620ea5:
                    int32_t edx_14 = *ecx_1
                    *esi = ((edx_14 u>> 6).w & 0x3e0) | ((edx_14 u>> 3).w & 0x1f)
                        | ((edx_14 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620ed0:
                    int32_t edx_17 = *ecx_1
                    *esi = ((edx_17 u>> 6).w & 0x3e0) | ((edx_17 u>> 3).w & 0x1f)
                        | ((edx_17 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620efb:
                    int32_t edx_20 = *ecx_1
                    *esi = ((edx_20 u>> 6).w & 0x3e0) | ((edx_20 u>> 3).w & 0x1f)
                        | ((edx_20 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620f26:
                    int32_t edx_23 = *ecx_1
                    *esi = ((edx_23 u>> 6).w & 0x3e0) | ((edx_23 u>> 3).w & 0x1f)
                        | ((edx_23 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_620f51:
                    int32_t edx_26 = *ecx_1
                    *esi = ((edx_26 u>> 6).w & 0x3e0) | ((edx_26 u>> 3).w & 0x1f)
                        | ((edx_26 u>> 9).w & 0x7c00)
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                
                ebx_2 = ebx_1
                edi_2 = var_10
            case 3
                goto label_620f51
            case 4
                goto label_620f26
            case 5
                goto label_620efb
            case 6
                goto label_620ed0
            case 7
                goto label_620ea5
        
        ecx_1 = &ecx_1[ebx_2]
        esi = &esi[edi_2]
    
    return result
}
