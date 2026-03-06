// 函数名称: sub_677420
// 虚拟地址: 0x677420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_677420(void* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ecx_1 = *(arg1 + 0x16bc)
    int32_t edx
    
    if (ecx_1 s<= 0xb)
        *(arg1 + 0x16b8) |= (arg2.w - 0x101) << ecx_1.b
        *(arg1 + 0x16bc) = ecx_1 + 5
    else
        edx.w = arg2.w - 0x101
        edx.w <<= ecx_1.b
        char* ecx_2 = *(arg1 + 0x14)
        *(arg1 + 0x16b8) |= edx.w
        uint16_t eax_1
        eax_1.b = *(arg1 + 0x16b8)
        ecx_2[*(arg1 + 8)] = eax_1.b
        *(arg1 + 0x14) += 1
        int32_t edx_1
        edx_1.b = *(arg1 + 0x16b9)
        (*(arg1 + 0x14))[*(arg1 + 8)] = edx_1.b
        int32_t edx_2 = *(arg1 + 0x16bc)
        *(arg1 + 0x14) += 1
        int32_t ecx_3
        ecx_3.b = 0x10
        ecx_3.b = 0x10 - edx_2.b
        *(arg1 + 0x16bc) = edx_2 - 0xb
        *(arg1 + 0x16b8) = (arg2.w - 0x101) u>> ecx_3.b
    
    int32_t ecx_5 = *(arg1 + 0x16bc)
    
    if (ecx_5 s<= 0xb)
        *(arg1 + 0x16b8) |= (arg3.w - 1) << ecx_5.b
        *(arg1 + 0x16bc) = ecx_5 + 5
    else
        edx.w = arg3.w - 1
        edx.w <<= ecx_5.b
        char* ecx_6 = *(arg1 + 0x14)
        *(arg1 + 0x16b8) |= edx.w
        uint16_t eax_4
        eax_4.b = *(arg1 + 0x16b8)
        ecx_6[*(arg1 + 8)] = eax_4.b
        *(arg1 + 0x14) += 1
        int32_t edx_3
        edx_3.b = *(arg1 + 0x16b9)
        (*(arg1 + 0x14))[*(arg1 + 8)] = edx_3.b
        int32_t edx_4 = *(arg1 + 0x16bc)
        *(arg1 + 0x14) += 1
        int32_t ecx_7
        ecx_7.b = 0x10
        ecx_7.b = 0x10 - edx_4.b
        *(arg1 + 0x16bc) = edx_4 - 0xb
        *(arg1 + 0x16b8) = (arg3.w - 1) u>> ecx_7.b
    
    int32_t ecx_9 = *(arg1 + 0x16bc)
    
    if (ecx_9 s<= 0xc)
        *(arg1 + 0x16b8) |= (arg4.w - 4) << ecx_9.b
        *(arg1 + 0x16bc) = ecx_9 + 4
    else
        edx.w = arg4.w - 4
        edx.w <<= ecx_9.b
        char* ecx_10 = *(arg1 + 0x14)
        *(arg1 + 0x16b8) |= edx.w
        uint16_t eax_7
        eax_7.b = *(arg1 + 0x16b8)
        ecx_10[*(arg1 + 8)] = eax_7.b
        *(arg1 + 0x14) += 1
        int32_t edx_5
        edx_5.b = *(arg1 + 0x16b9)
        (*(arg1 + 0x14))[*(arg1 + 8)] = edx_5.b
        int32_t edx_6 = *(arg1 + 0x16bc)
        *(arg1 + 0x14) += 1
        int32_t ecx_11
        ecx_11.b = 0x10
        ecx_11.b = 0x10 - edx_6.b
        *(arg1 + 0x16bc) = edx_6 - 0xc
        *(arg1 + 0x16b8) = (arg4.w - 4) u>> ecx_11.b
    
    void* edi_4 = nullptr
    
    if (arg4 s> 0)
        do
            int32_t ecx_13 = *(arg1 + 0x16bc)
            
            if (ecx_13 s<= 0xd)
                edx.w = *(arg1 + (zx.d(*(edi_4 + 0x8337ec)) << 2) + 0xa7e)
                edx.w <<= ecx_13.b
                *(arg1 + 0x16b8) |= edx.w
                *(arg1 + 0x16bc) = ecx_13 + 3
            else
                uint16_t eax_9 = *(arg1 + (zx.d(*(edi_4 + 0x8337ec)) << 2) + 0xa7e)
                uint32_t edx_7
                edx_7.w = eax_9
                edx_7.w <<= ecx_13.b
                char* ecx_14 = *(arg1 + 0x14)
                *(arg1 + 0x16b8) |= edx_7.w
                ecx_14[*(arg1 + 8)] = *(arg1 + 0x16b8)
                *(arg1 + 0x14) += 1
                (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
                int32_t edx_10 = *(arg1 + 0x16bc)
                char* ecx_15
                ecx_15.b = 0x10
                ecx_15.b = 0x10 - edx_10.b
                *(arg1 + 0x14) += 1
                *(arg1 + 0x16b8) = eax_9 u>> ecx_15.b
                *(arg1 + 0x16bc) = edx_10 - 0xd
            
            edi_4 += 1
        while (edi_4 s< arg4)
    
    sub_676ea0(arg1, arg1 + 0x94, arg2 - 1)
    sub_676ea0(arg1, arg1 + 0x988, arg3 - 1)
    return arg1
}
