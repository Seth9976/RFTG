// 函数名称: sub_677670
// 虚拟地址: 0x677670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_677670(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = arg2
    void* ebx = arg2
    void* ecx = nullptr
    
    if (*(arg1 + 0x16a0) != 0)
        while (true)
            uint32_t edx_2 = zx.d(*(*(arg1 + 0x16a4) + (ecx << 1)))
            uint32_t esi_2 = zx.d(*(ecx + *(arg1 + 0x1698)))
            int32_t ecx_2 = *(arg1 + 0x16bc)
            int32_t edx_3
            uint32_t edi_1
            
            if (edx_2 != 0)
                uint32_t edi_3 = zx.d(*(esi_2 + 0x833fc0))
                uint32_t edx_11 = zx.d(*(ebx + (edi_3 << 2) + 0x406))
                
                if (ecx_2 s<= 0x10 - edx_11)
                    void* edx_12
                    edx_12.w = *(arg2 + (edi_3 << 2) + 0x404)
                    edx_12.w <<= ecx_2.b
                    *(arg1 + 0x16b8) |= edx_12.w
                    *(arg1 + 0x16bc) = ecx_2 + edx_11
                else
                    int16_t edx_13 = *(arg2 + (edi_3 << 2) + 0x404)
                    char* ecx_11 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= edx_13 << ecx_2.b
                    ecx_11[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_16 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_12
                    ecx_12.b = 0x10
                    ecx_12.b = 0x10 - edx_16.b
                    *(arg1 + 0x16bc) = edx_16 + edx_11 - 0x10
                    *(arg1 + 0x16b8) = edx_13 u>> ecx_12.b
                
                int32_t ebx_9 = *((edi_3 << 2) + &data_833778)
                
                if (ebx_9 != 0)
                    uint16_t esi_5 = esi_2.w - (*((edi_3 << 2) + &data_8340c0)).w
                    int32_t ecx_15 = *(arg1 + 0x16bc)
                    int32_t ecx_19
                    
                    if (ecx_15 s<= 0x10 - ebx_9)
                        *(arg1 + 0x16b8) |= esi_5 << ecx_15.b
                        ecx_19 = ecx_15 + ebx_9
                    else
                        int32_t edi_4
                        edi_4.w = esi_5
                        edi_4.w <<= ecx_15.b
                        char* ecx_16 = *(arg1 + 8)
                        *(arg1 + 0x16b8) |= edi_4.w
                        ecx_16[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                        *(arg1 + 0x14) += 1
                        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                        int32_t ebx_12 = *(arg1 + 0x16bc)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_17
                        ecx_17.b = 0x10
                        ecx_17.b = 0x10 - ebx_12.b
                        ecx_19 = ebx_12 + ebx_9 - 0x10
                        *(arg1 + 0x16b8) = esi_5 u>> ecx_17.b
                    
                    *(arg1 + 0x16bc) = ecx_19
                
                int32_t edx_19 = edx_2 - 1
                uint32_t esi_6
                
                if (edx_19 u>= 0x100)
                    esi_6 = zx.d(*((edx_19 u>> 7) + 0x833ec0))
                else
                    esi_6 = zx.d((&data_833dc0)[edx_19])
                
                uint32_t edi_7 = zx.d(*(arg3 + (esi_6 << 2) + 2))
                int32_t ecx_23 = *(arg1 + 0x16bc)
                
                if (ecx_23 s<= 0x10 - edi_7)
                    int32_t ebx_16
                    ebx_16.w = *(arg3 + (esi_6 << 2))
                    ebx_16.w <<= ecx_23.b
                    *(arg1 + 0x16b8) |= ebx_16.w
                    *(arg1 + 0x16bc) = ecx_23 + edi_7
                else
                    uint16_t edi_8 = *(arg3 + (esi_6 << 2))
                    int32_t edx_20
                    edx_20.w = edi_8
                    edx_20.w <<= ecx_23.b
                    char* ecx_24 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= edx_20.w
                    ecx_24[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_23 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    char* ecx_25
                    ecx_25.b = 0x10
                    ecx_25.b = 0x10 - edx_23.b
                    *(arg1 + 0x16bc) = edx_23 + edi_7 - 0x10
                    *(arg1 + 0x16b8) = edi_8 u>> ecx_25.b
                
                edi_1 = *((esi_6 << 2) + &data_833800)
                ebx = arg2
                
                if (edi_1 != 0)
                    edx_3 = edx_19 - *((esi_6 << 2) + &data_834138)
                    ecx_2 = *(arg1 + 0x16bc)
                    
                    if (ecx_2 s<= 0x10 - edi_1)
                        goto label_677724
                    
                    int32_t esi_7
                    esi_7.w = edx_3.w
                    esi_7.w <<= ecx_2.b
                    char* ecx_28 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= esi_7.w
                    ecx_28[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t ebx_19 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_29
                    ecx_29.b = 0x10
                    ecx_29.b = 0x10 - ebx_19.b
                    edx_3.w u>>= ecx_29.b
                    *(arg1 + 0x16b8) = edx_3.w
                    ebx = arg2
                    *(arg1 + 0x16bc) = ebx_19 + edi_1 - 0x10
            else
                edi_1 = zx.d(*(ebx + (esi_2 << 2) + 2))
                
                if (ecx_2 s<= 0x10 - edi_1)
                    edx_3.w = *(ebx + (esi_2 << 2))
                label_677724:
                    edx_3.w <<= ecx_2.b
                    *(arg1 + 0x16b8) |= edx_3.w
                    *(arg1 + 0x16bc) = ecx_2 + edi_1
                else
                    uint16_t esi_3 = *(ebx + (esi_2 << 2))
                    edx_3.w = esi_3
                    edx_3.w <<= ecx_2.b
                    char* ecx_3 = *(arg1 + 8)
                    *(arg1 + 0x16b8) |= edx_3.w
                    ecx_3[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                    *(arg1 + 0x14) += 1
                    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                    int32_t edx_6 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    ebx = arg2
                    char* ecx_4
                    ecx_4.b = 0x10
                    ecx_4.b = 0x10 - edx_6.b
                    *(arg1 + 0x16b8) = esi_3 u>> ecx_4.b
                    *(arg1 + 0x16bc) = edx_6 + edi_1 - 0x10
            
            if (ecx + 1 u>= *(arg1 + 0x16a0))
                break
            
            ecx += 1
    
    uint32_t edi_2 = zx.d(*(ebx + 0x402))
    int32_t ecx_7 = *(arg1 + 0x16bc)
    int32_t edx_7
    
    if (ecx_7 s<= 0x10 - edi_2)
        edx_7.w = *(ebx + 0x400)
        edx_7.w <<= ecx_7.b
        *(arg1 + 0x16b8) |= edx_7.w
        *(arg1 + 0x16bc) = ecx_7 + edi_2
        return 
    
    uint16_t esi_4 = *(ebx + 0x400)
    edx_7.w = esi_4
    edx_7.w <<= ecx_7.b
    char* ecx_8 = *(arg1 + 8)
    *(arg1 + 0x16b8) |= edx_7.w
    ecx_8[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    int32_t edx_10 = *(arg1 + 0x16bc)
    *(arg1 + 0x14) += 1
    char* ecx_9
    ecx_9.b = 0x10
    ecx_9.b = 0x10 - edx_10.b
    *(arg1 + 0x16bc) = edx_10 + edi_2 - 0x10
    *(arg1 + 0x16b8) = esi_4 u>> ecx_9.b
}
