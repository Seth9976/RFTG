// 函数名称: sub_6783e0
// 虚拟地址: 0x6783e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6783e0(uint32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t i_5 = arg3
    int32_t i_5 = arg3
    uint32_t edi_1 = arg1 u>> 0x10
    int32_t ecx_1 = arg1 & 0xffff
    
    if (i_5 == 1)
        int32_t ecx_2 = ecx_1 + zx.d(*arg2)
        
        if (ecx_2 u>= 0xfff1)
            ecx_2 -= 0xfff1
        
        int32_t edi_2 = edi_1 + ecx_2
        
        if (edi_2 u>= 0xfff1)
            edi_2 -= 0xfff1
        
        return edi_2 << 0x10 | ecx_2
    
    char* esi = arg2
    
    if (esi == 0)
        return &esi[1]
    
    if (i_5 u< 0x10)
        if (i_5 != 0)
            int32_t i
            
            do
                ecx_1 += zx.d(*esi)
                esi = &esi[1]
                edi_1 += ecx_1
                i = i_5
                i_5 -= 1
            while (i != 1)
        
        if (ecx_1 u>= 0xfff1)
            ecx_1 -= 0xfff1
        
        return (edi_1 u/ 0xfff1 * 0xf + edi_1) << 0x10 | ecx_1
    
    if (i_5 u>= 0x15b0)
        arg1 = i_5 u/ 0x15b0
        uint32_t i_1
        
        do
            i_5 -= 0x15b0
            int32_t j_1 = 0x15b
            int32_t j
            
            do
                int32_t ecx_3 = ecx_1 + zx.d(*esi)
                int32_t ecx_4 = ecx_3 + zx.d(esi[1])
                int32_t ecx_5 = ecx_4 + zx.d(esi[2])
                int32_t ecx_6 = ecx_5 + zx.d(esi[3])
                int32_t ecx_7 = ecx_6 + zx.d(esi[4])
                int32_t ecx_8 = ecx_7 + zx.d(esi[5])
                int32_t ecx_9 = ecx_8 + zx.d(esi[6])
                int32_t ecx_10 = ecx_9 + zx.d(esi[7])
                int32_t ecx_11 = ecx_10 + zx.d(esi[8])
                int32_t ecx_12 = ecx_11 + zx.d(esi[9])
                int32_t ecx_13 = ecx_12 + zx.d(esi[0xa])
                int32_t ecx_14 = ecx_13 + zx.d(esi[0xb])
                int32_t ecx_15 = ecx_14 + zx.d(esi[0xc])
                int32_t ecx_16 = ecx_15 + zx.d(esi[0xd])
                int32_t ecx_17 = ecx_16 + zx.d(esi[0xe])
                ecx_1 = ecx_17 + zx.d(esi[0xf])
                edi_1 = edi_1 + ecx_3 + ecx_4 + ecx_5 + ecx_6 + ecx_7 + ecx_8 + ecx_9 + ecx_10 + ecx_11
                    + ecx_12 + ecx_13 + ecx_14 + ecx_15 + ecx_16 + ecx_17 + ecx_1
                esi = &esi[0x10]
                j = j_1
                j_1 -= 1
            while (j != 1)
            ecx_1 += ecx_1 u/ 0xfff1 * 0xffff000f
            edi_1 += edi_1 u/ 0xfff1 * 0xffff000f
            i_1 = arg1
            arg1 -= 1
        while (i_1 != 1)
    
    if (i_5 != 0)
        if (i_5 u>= 0x10)
            uint32_t i_4 = i_5 u>> 4
            uint32_t i_2
            
            do
                int32_t ecx_18 = ecx_1 + zx.d(*esi)
                int32_t ecx_19 = ecx_18 + zx.d(esi[1])
                int32_t ecx_20 = ecx_19 + zx.d(esi[2])
                int32_t ecx_21 = ecx_20 + zx.d(esi[3])
                int32_t ecx_22 = ecx_21 + zx.d(esi[4])
                int32_t ecx_23 = ecx_22 + zx.d(esi[5])
                int32_t ecx_24 = ecx_23 + zx.d(esi[6])
                int32_t ecx_25 = ecx_24 + zx.d(esi[7])
                int32_t ecx_26 = ecx_25 + zx.d(esi[8])
                int32_t ecx_27 = ecx_26 + zx.d(esi[9])
                int32_t ecx_28 = ecx_27 + zx.d(esi[0xa])
                int32_t ecx_29 = ecx_28 + zx.d(esi[0xb])
                int32_t ecx_30 = ecx_29 + zx.d(esi[0xc])
                int32_t ecx_31 = ecx_30 + zx.d(esi[0xd])
                int32_t ecx_32 = ecx_31 + zx.d(esi[0xe])
                ecx_1 = ecx_32 + zx.d(esi[0xf])
                i_5 -= 0x10
                edi_1 = edi_1 + ecx_18 + ecx_19 + ecx_20 + ecx_21 + ecx_22 + ecx_23 + ecx_24 + ecx_25
                    + ecx_26 + ecx_27 + ecx_28 + ecx_29 + ecx_30 + ecx_31 + ecx_32 + ecx_1
                esi = &esi[0x10]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                ecx_1 += zx.d(*esi)
                esi = &esi[1]
                edi_1 += ecx_1
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        ecx_1 += ecx_1 u/ 0xfff1 * 0xffff000f
        edi_1 += edi_1 u/ 0xfff1 * 0xffff000f
    
    return edi_1 << 0x10 | ecx_1
}
