// 函数名称: sub_5b45d2
// 虚拟地址: 0x5b45d2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5b45d2(uint32_t arg1, int32_t* arg2, char arg3, int32_t arg4, float* arg5, float* arg6, int32_t arg7) __noreturn
{
    // 第一条实际指令: char ecx = arg3
    char ecx = arg3
    int32_t edi
    int32_t var_10 = edi
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    
    if ((ecx & 0x10) != 0)
        uint32_t eax_3 = arg1
        *(eax_3 + 4) |= 1
        arg3.d = 0xc000008f
    
    if ((ecx & 2) != 0)
        uint32_t eax_4 = arg1
        *(eax_4 + 4) |= 2
        arg3.d = 0xc0000093
    
    if ((1 & ecx) != 0)
        uint32_t eax_5 = arg1
        *(eax_5 + 4) |= 4
        arg3.d = 0xc0000091
    
    if ((ecx & 4) != 0)
        uint32_t eax_6 = arg1
        *(eax_6 + 4) |= 8
        arg3.d = 0xc000008e
    
    if ((ecx & 8) != 0)
        uint32_t eax_7 = arg1
        *(eax_7 + 4) |= 0x10
        arg3.d = 0xc0000090
    
    uint32_t eax_8 = arg1
    *(eax_8 + 8) ^= (not.d(*arg2 << 4) ^ *(eax_8 + 8)) & 0x10
    uint32_t eax_9 = arg1
    *(eax_9 + 8) ^= (not.d(*arg2 * 2) ^ *(eax_9 + 8)) & 8
    uint32_t eax_10 = arg1
    *(eax_10 + 8) ^= (not.d(*arg2 u>> 1) ^ *(eax_10 + 8)) & 4
    uint32_t eax_11 = arg1
    *(eax_11 + 8) ^= (not.d(*arg2 u>> 3) ^ *(eax_11 + 8)) & 2
    uint32_t eax_12 = arg1
    *(eax_12 + 8) ^= (not.d(*arg2 u>> 5) ^ *(eax_12 + 8)) & 1
    char eax_13 = __statfp()
    
    if ((1 & eax_13) != 0)
        uint32_t ecx_26 = arg1
        *(ecx_26 + 0xc) |= 0x10
    
    if ((eax_13 & 4) != 0)
        uint32_t ecx_27 = arg1
        *(ecx_27 + 0xc) |= 8
    
    if ((eax_13 & 8) != 0)
        uint32_t ecx_28 = arg1
        *(ecx_28 + 0xc) |= 4
    
    if ((eax_13 & 0x10) != 0)
        uint32_t ecx_29 = arg1
        *(ecx_29 + 0xc) |= 2
    
    if ((eax_13 & 0x20) != 0)
        uint32_t eax_14 = arg1
        *(eax_14 + 0xc) |= 1
    
    int32_t eax_16 = *arg2 & 0xc00
    
    if (eax_16 == 0)
        uint32_t eax_19 = arg1
        *eax_19 &= 0xfffffffc
    else
        uint32_t eax_18
        
        if (eax_16 == 0x400)
            eax_18 = arg1
            *eax_18 = (*eax_18 & 0xfffffffd) | 1
        else if (eax_16 == 0x800)
            eax_18 = arg1
            *eax_18 = (*eax_18 & 0xfffffffe) | 2
        else if (eax_16 == 0xc00)
            uint32_t eax_17 = arg1
            *eax_17 |= 3
    
    int32_t eax_21 = *arg2 & 0x300
    uint32_t eax_23
    
    if (eax_21 == 0)
        eax_23 = arg1
        *eax_23 = (*eax_23 & 0xffffffeb) | 8
    else if (eax_21 == 0x200)
        eax_23 = arg1
        *eax_23 = (*eax_23 & 0xffffffe7) | 4
    else if (eax_21 == 0x300)
        uint32_t eax_22 = arg1
        *eax_22 &= 0xffffffe3
    uint32_t eax_24 = arg1
    *eax_24 ^= (arg4 << 5 ^ *eax_24) & 0x1ffe0
    uint32_t eax_25 = arg1
    *(eax_25 + 0x20) |= 1
    uint32_t eax_26 = arg1
    
    if (arg7 == 0)
        *(eax_26 + 0x20) = (*(eax_26 + 0x20) & 0xffffffe3) | 2
        *(arg1 + 0x10) = fconvert.d(fconvert.t(*arg5))
        uint32_t eax_34 = arg1
        *(eax_34 + 0x60) |= 1
        uint32_t eax_35 = arg1
        *(eax_35 + 0x60) = (*(eax_35 + 0x60) & 0xffffffe3) | 2
        *(arg1 + 0x50) = fconvert.d(fconvert.t(*arg6))
    else
        *(eax_26 + 0x20) &= 0xffffffe1
        *(arg1 + 0x10) = fconvert.s(fconvert.t(*arg5))
        uint32_t eax_29 = arg1
        *(eax_29 + 0x60) |= 1
        uint32_t eax_30 = arg1
        *(eax_30 + 0x60) &= 0xffffffe1
        *(arg1 + 0x50) = fconvert.s(fconvert.t(*arg6))
    
    __clrfp()
    RaiseException(arg3.d, 0, 1, &arg1)
    noreturn
}
