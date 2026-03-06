// 函数名称: sub_667770
// 虚拟地址: 0x667770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_667770(uint32_t arg1)
{
    // 第一条实际指令: *(arg1 + 0x7c) = 0
    *(arg1 + 0x7c) = 0
    sub_66ad90(arg1)
    uint32_t eax_7
    uint32_t ecx_2
    
    if (*(arg1 + 0x138) == 0)
        eax_7 = *(arg1 + 0xe4)
        *(arg1 + 0xec) = *(arg1 + 0xe8)
    else
        if ((*(arg1 + 0x74) & 2) != 0)
            *(arg1 + 0xec) = *(arg1 + 0xe8)
        else
            *(arg1 + 0xec) = (*(arg1 + 0xe8) + 7) u>> 3
        
        uint32_t eax_4 = zx.d(*(arg1 + 0x139))
        ecx_2 = zx.d(*(eax_4 + 0x82f044))
        eax_7 = divu.dp.d(0:(*(arg1 + 0xe4) - zx.d(*(eax_4 + 0x82f03c)) + ecx_2 - 1), ecx_2)
    
    int32_t ebx = *(arg1 + 0x74)
    *(arg1 + 0xf8) = eax_7
    uint32_t eax_8 = zx.d(*(arg1 + 0x13e))
    
    if ((ebx.b & 4) != 0 && *(arg1 + 0x13c) u< 8)
        eax_8 = 8
    
    int32_t edi_1 = ebx & 0x1000
    
    if (edi_1 != 0)
        ecx_2.b = *(arg1 + 0x13b)
        
        if (ecx_2.b == 3)
            int32_t eax_9
            eax_9.b = *(arg1 + 0x134) != 0
            eax_8 = (eax_9 << 3) + 0x18
        else if (ecx_2.b == 0)
            if (eax_8 s< 8)
                eax_8 = 8
            
            if (*(arg1 + 0x134) != 0)
                eax_8 *= 2
        else if (ecx_2.b == 2 && *(arg1 + 0x134) != 0)
            eax_8 = (eax_8 << 2) s/ 3
    
    if ((ebx & 0x200) != 0)
        if (edi_1 == 0)
            *(arg1 + 0x74) = ebx & 0xfffffdff
        else if (*(arg1 + 0x13c) u< 0x10)
            eax_8 *= 2
    
    int32_t edi_2 = *(arg1 + 0x74)
    int32_t edx_7 = edi_2 & 0x8000
    
    if (edx_7 != 0)
        ecx_2.b = *(arg1 + 0x13b)
        
        if (ecx_2.b == 0)
            int32_t ecx_3
            ecx_3.b = eax_8 s> 8
            eax_8 = ((ecx_3 - 1) & 0xfffffff0) + 0x20
        else if (ecx_2.b == 2 || ecx_2.b == 3)
            int32_t ecx_6
            ecx_6.b = eax_8 s> 0x20
            eax_8 = ((ecx_6 - 1) & 0xffffffe0) + 0x40
    
    if ((edi_2 & 0x4000) != 0)
        int32_t edx_8
        
        if (*(arg1 + 0x134) == 0)
            if (edx_7 == 0)
                goto label_667901
            
            edx_8.b = eax_8 s> 0x10
            eax_8 = ((edx_8 - 1) & 0xffffffe0) + 0x40
        else if ((edi_2 & 0x1000) != 0 || edx_7 != 0)
            edx_8.b = eax_8 s> 0x10
            eax_8 = ((edx_8 - 1) & 0xffffffe0) + 0x40
        else
        label_667901:
            ecx_2.b = *(arg1 + 0x13b)
            
            if (ecx_2.b == 4)
                edx_8.b = eax_8 s> 0x10
                eax_8 = ((edx_8 - 1) & 0xffffffe0) + 0x40
            else if (eax_8 s> 8)
                int32_t eax_14
                eax_14.b = ecx_2.b != 6
                eax_8 = ((eax_14 - 1) & 0x10) + 0x30
            else
                int32_t eax_13
                eax_13.b = ecx_2.b == 6
                eax_8 = (eax_13 << 3) + 0x18
    
    if ((edi_2 & 0x100000) != 0)
        uint32_t ecx_10 = zx.d(*(arg1 + 0x69)) * zx.d(*(arg1 + 0x68))
        
        if (ecx_10 s> eax_8)
            eax_8 = ecx_10
    
    int32_t ecx_13 = (*(arg1 + 0xe4) + 7) & 0xfffffff8
    *(arg1 + 0x142) = eax_8.b
    *(arg1 + 0x143) = 0
    uint32_t edx_12
    
    if (eax_8 s< 8)
        edx_12 = (ecx_13 * eax_8 + 7) u>> 3
    else
        edx_12 = (eax_8 u>> 3) * ecx_13
    
    if (((eax_8 + 7) s>> 3) + edx_12 + 0x31 u> *(arg1 + 0x2a4))
        sub_666530(arg1, *(arg1 + 0x26c))
        sub_666530(arg1, *(arg1 + 0x2b0))
        int128_t* eax_22
        
        if (*(arg1 + 0x138) == 0)
            eax_22 = sub_6664e0(arg1, ((eax_8 + 7) s>> 3) + edx_12 + 0x31)
        else
            eax_22 = sub_6665d0(arg1, ((eax_8 + 7) s>> 3) + edx_12 + 0x31)
        
        *(arg1 + 0x26c) = eax_22
        int32_t eax_23 = sub_6664e0(arg1, ((eax_8 + 7) s>> 3) + edx_12 + 0x31)
        int32_t edx_15 = *(arg1 + 0x26c) + 0x1f
        *(arg1 + 0x2b0) = eax_23
        *(arg1 + 0x108) = edx_15
        *(arg1 + 0x104) = eax_23 + 0x1f
        *(arg1 + 0x2a4) = ((eax_8 + 7) s>> 3) + edx_12 + 0x31
    
    int32_t eax_25 = *(arg1 + 0xf4)
    
    if (eax_25 u> 0xfffffffe)
        sub_664320(arg1, "Row has too many bytes to allocate in memory")
        noreturn
    
    int128_t* result = sub_5abfc0(*(arg1 + 0x104), 0, eax_25 + 1)
    *(arg1 + 0x70) |= 0x40
    return result
}
