// 函数名称: sub_676ea0
// 虚拟地址: 0x676ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_676ea0(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: uint32_t ebx = zx.d(*(arg2 + 2))
    uint32_t ebx = zx.d(*(arg2 + 2))
    int32_t j_2 = 0
    uint32_t var_18 = 0xffffffff
    uint32_t var_10 = ebx
    int32_t ecx = 7
    int32_t var_c = 4
    
    if (ebx == 0)
        ecx = 0x8a
        var_c = 3
    
    if (arg3 s< 0)
        return 
    
    void* var_14_1 = arg2 + 6
    int32_t i_1 = arg3 + 1
    int32_t i
    
    do
        uint32_t edi_4 = zx.d(*var_14_1)
        uint32_t esi_2 = var_10
        j_2 += 1
        uint32_t var_20_1 = esi_2
        var_10 = edi_4
        int32_t j_1 = j_2
        
        if (j_2 s>= ecx || esi_2 != edi_4)
            if (j_2 s< var_c)
                int32_t j
                
                do
                    uint32_t edi_5 = zx.d(*(arg1 + (esi_2 << 2) + 0xa7e))
                    int32_t ecx_1 = *(arg1 + 0x16bc)
                    int32_t ecx_4
                    int32_t edx
                    
                    if (ecx_1 s<= 0x10 - edi_5)
                        edx.w = *(arg1 + (esi_2 << 2) + 0xa7c)
                        edx.w <<= ecx_1.b
                        *(arg1 + 0x16b8) |= edx.w
                        ecx_4 = ecx_1 + edi_5
                    else
                        uint16_t esi_3 = *(arg1 + (esi_2 << 2) + 0xa7c)
                        edx.w = esi_3
                        edx.w <<= ecx_1.b
                        char* ecx_2 = *(arg1 + 8)
                        *(arg1 + 0x16b8) |= edx.w
                        ecx_2[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
                        *(arg1 + 0x14) += 1
                        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                        int32_t edx_3 = *(arg1 + 0x16bc)
                        char* ecx_3
                        ecx_3.b = 0x10
                        *(arg1 + 0x14) += 1
                        ecx_3.b = 0x10 - edx_3.b
                        ecx_4 = edx_3 + edi_5 - 0x10
                        *(arg1 + 0x16b8) = esi_3 u>> ecx_3.b
                        esi_2 = var_20_1
                    j = j_1
                    j_1 -= 1
                    *(arg1 + 0x16bc) = ecx_4
                while (j != 1)
            else if (esi_2 != 0)
                if (esi_2 != var_18)
                    uint32_t ecx_5 = zx.d(*(arg1 + (esi_2 << 2) + 0xa7e))
                    int32_t ecx_6 = *(arg1 + 0x16bc)
                    
                    if (ecx_6 s<= 0x10 - ecx_5)
                        int32_t edi_6
                        edi_6.w = *(arg1 + (esi_2 << 2) + 0xa7c)
                        edi_6.w <<= ecx_6.b
                        int32_t ecx_10 = *(arg1 + 0x16bc)
                        *(arg1 + 0x16b8) |= edi_6.w
                        *(arg1 + 0x16bc) = ecx_10 + ecx_5
                    else
                        int16_t edx_4 = *(arg1 + (esi_2 << 2) + 0xa7c)
                        char* ecx_7 = *(arg1 + 8)
                        void* var_20_2 = arg1
                        *(arg1 + 0x16b8) |= edx_4 << ecx_6.b
                        int32_t edx_5 = *(arg1 + 0x14)
                        arg1.b = *(arg1 + 0x16b8)
                        ecx_7[edx_5] = arg1.b
                        arg1 = var_20_2
                        *(arg1 + 0x14) += 1
                        edx_5.b = *(arg1 + 0x16b9)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = edx_5.b
                        int32_t edx_6 = *(arg1 + 0x16bc)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_8
                        ecx_8.b = 0x10
                        ecx_8.b = 0x10 - edx_6.b
                        *(arg1 + 0x16bc) = edx_6 + ecx_5 - 0x10
                        j_2 = j_1
                        *(arg1 + 0x16b8) = edx_4 u>> ecx_8.b
                    
                    j_2 -= 1
                    j_1 = j_2
                
                uint32_t ecx_12 = zx.d(*(arg1 + 0xabe))
                int32_t ecx_13 = *(arg1 + 0x16bc)
                
                if (ecx_13 s<= 0x10 - ecx_12)
                    int32_t edi_9
                    edi_9.w = *(arg1 + 0xabc)
                    edi_9.w <<= ecx_13.b
                    *(arg1 + 0x16b8) |= edi_9.w
                    *(arg1 + 0x16bc) = ecx_13 + ecx_12
                else
                    int16_t edx_8 = *(arg1 + 0xabc)
                    char* ecx_14 = *(arg1 + 8)
                    void* var_20_3 = arg1
                    *(arg1 + 0x16b8) |= edx_8 << ecx_13.b
                    int32_t edx_9 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_14[edx_9] = arg1.b
                    arg1 = var_20_3
                    *(arg1 + 0x14) += 1
                    edx_9.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_9.b
                    int32_t edx_10 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_15
                    ecx_15.b = 0x10
                    ecx_15.b = 0x10 - edx_10.b
                    *(arg1 + 0x16bc) = edx_10 + ecx_12 - 0x10
                    j_2 = j_1
                    *(arg1 + 0x16b8) = edx_8 u>> ecx_15.b
                
                int32_t ecx_18 = *(arg1 + 0x16bc)
                
                if (ecx_18 s<= 0xe)
                    *(arg1 + 0x16b8) |= (j_2.w - 3) << ecx_18.b
                    *(arg1 + 0x16bc) = ecx_18 + 2
                else
                    char* ecx_19 = *(arg1 + 8)
                    void* var_20_4 = arg1
                    *(arg1 + 0x16b8) |= (j_2.w - 3) << ecx_18.b
                    int32_t edx_13 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_19[edx_13] = arg1.b
                    arg1 = var_20_4
                    *(arg1 + 0x14) += 1
                    edx_13.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_13.b
                    int32_t edx_14 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_20
                    ecx_20.b = 0x10
                    ecx_20.b = 0x10 - edx_14.b
                    *(arg1 + 0x16bc) = edx_14 - 0xe
                    *(arg1 + 0x16b8) = (j_2.w - 3) u>> ecx_20.b
            else if (j_2 s> 0xa)
                uint32_t ecx_32 = zx.d(*(arg1 + 0xac6))
                int32_t ecx_33 = *(arg1 + 0x16bc)
                
                if (ecx_33 s<= 0x10 - ecx_32)
                    int32_t edi_19
                    edi_19.w = *(arg1 + 0xac4)
                    edi_19.w <<= ecx_33.b
                    int32_t ecx_37 = *(arg1 + 0x16bc)
                    *(arg1 + 0x16b8) |= edi_19.w
                    *(arg1 + 0x16bc) = ecx_37 + ecx_32
                else
                    int16_t edx_24 = *(arg1 + 0xac4)
                    char* ecx_34 = *(arg1 + 8)
                    void* var_20_7 = arg1
                    *(arg1 + 0x16b8) |= edx_24 << ecx_33.b
                    int32_t edx_25 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_34[edx_25] = arg1.b
                    arg1 = var_20_7
                    *(arg1 + 0x14) += 1
                    edx_25.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_25.b
                    int32_t edx_26 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_35
                    ecx_35.b = 0x10
                    ecx_35.b = 0x10 - edx_26.b
                    *(arg1 + 0x16bc) = edx_26 + ecx_32 - 0x10
                    j_2 = j_1
                    *(arg1 + 0x16b8) = edx_24 u>> ecx_35.b
                
                int32_t ecx_39 = *(arg1 + 0x16bc)
                
                if (ecx_39 s<= 9)
                    *(arg1 + 0x16b8) |= (j_2.w - 0xb) << ecx_39.b
                    *(arg1 + 0x16bc) = ecx_39 + 7
                else
                    char* ecx_40 = *(arg1 + 8)
                    void* var_20_8 = arg1
                    *(arg1 + 0x16b8) |= (j_2.w - 0xb) << ecx_39.b
                    int32_t edx_29 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_40[edx_29] = arg1.b
                    arg1 = var_20_8
                    *(arg1 + 0x14) += 1
                    edx_29.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_29.b
                    int32_t edx_30 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_41
                    ecx_41.b = 0x10
                    ecx_41.b = 0x10 - edx_30.b
                    *(arg1 + 0x16bc) = edx_30 - 9
                    *(arg1 + 0x16b8) = (j_2.w - 0xb) u>> ecx_41.b
            else
                uint32_t ecx_22 = zx.d(*(arg1 + 0xac2))
                int32_t ecx_23 = *(arg1 + 0x16bc)
                
                if (ecx_23 s<= 0x10 - ecx_22)
                    int32_t edi_14
                    edi_14.w = *(arg1 + 0xac0)
                    edi_14.w <<= ecx_23.b
                    int32_t ecx_27 = *(arg1 + 0x16bc)
                    *(arg1 + 0x16b8) |= edi_14.w
                    *(arg1 + 0x16bc) = ecx_27 + ecx_22
                else
                    int16_t edx_16 = *(arg1 + 0xac0)
                    char* ecx_24 = *(arg1 + 8)
                    void* var_20_5 = arg1
                    *(arg1 + 0x16b8) |= edx_16 << ecx_23.b
                    int32_t edx_17 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_24[edx_17] = arg1.b
                    arg1 = var_20_5
                    *(arg1 + 0x14) += 1
                    edx_17.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_17.b
                    int32_t edx_18 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_25
                    ecx_25.b = 0x10
                    ecx_25.b = 0x10 - edx_18.b
                    *(arg1 + 0x16bc) = edx_18 + ecx_22 - 0x10
                    j_2 = j_1
                    *(arg1 + 0x16b8) = edx_16 u>> ecx_25.b
                
                int32_t ecx_29 = *(arg1 + 0x16bc)
                
                if (ecx_29 s<= 0xd)
                    *(arg1 + 0x16b8) |= (j_2.w - 3) << ecx_29.b
                    *(arg1 + 0x16bc) = ecx_29 + 3
                else
                    char* ecx_30 = *(arg1 + 8)
                    void* var_20_6 = arg1
                    *(arg1 + 0x16b8) |= (j_2.w - 3) << ecx_29.b
                    int32_t edx_21 = *(arg1 + 0x14)
                    arg1.b = *(arg1 + 0x16b8)
                    ecx_30[edx_21] = arg1.b
                    arg1 = var_20_6
                    *(arg1 + 0x14) += 1
                    edx_21.b = *(arg1 + 0x16b9)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_21.b
                    int32_t edx_22 = *(arg1 + 0x16bc)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_31
                    ecx_31.b = 0x10
                    ecx_31.b = 0x10 - edx_22.b
                    *(arg1 + 0x16bc) = edx_22 - 0xd
                    *(arg1 + 0x16b8) = (j_2.w - 3) u>> ecx_31.b
            
            j_2 = 0
            var_18 = esi_2
            
            if (var_10 == 0)
                ecx = 0x8a
                var_c = 3
            else if (esi_2 != var_10)
                ecx = 7
                var_c = 4
            else
                ecx = 6
                var_c = 3
        
        var_14_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
}
