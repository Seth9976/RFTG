// 函数名称: sub_66b850
// 虚拟地址: 0x66b850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66b850(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x74)
    int32_t esi = *(arg1 + 0x74)
    
    if ((esi & 0x1000) != 0)
        int32_t eax
        eax.b = *(arg2 + 0x19)
        
        if (eax.b != 3)
            if (*(arg1 + 0x134) != 0 && (esi & 0x2000000) != 0)
                eax.b |= 4
                *(arg2 + 0x19) = eax.b
            
            if (arg2[6].b u< 8)
                arg2[6].b = 8
        else
            eax.b = *(arg1 + 0x134) u> 0
            *(arg2 + 0x19) = (eax << 2).b + 2
            arg2[6].b = 8
        
        *(arg2 + 0x16) = 0
    
    if ((*(arg1 + 0x74) & 0x80) != 0)
        *(arg2 + 0x5a) = *(arg1 + 0x154)
        *(arg2 + 0x5e) = *(arg1 + 0x158)
        int32_t eax_3
        eax_3.w = *(arg1 + 0x15c)
        *(arg2 + 0x62) = eax_3.w
    
    arg2[0xa] = *(arg1 + 0x178)
    
    if (arg2[6].b == 0x10)
        if ((*(arg1 + 0x74) & 0x4000000) != 0)
            arg2[6].b = 8
        
        if ((*(arg1 + 0x74) & 0x400) != 0)
            arg2[6].b = 8
    
    if ((*(arg1 + 0x74) & 0x4000) != 0)
        *(arg2 + 0x19) |= 2
    
    if ((*(arg1 + 0x74) & 0x600000) != 0)
        *(arg2 + 0x19) &= 0xfd
    
    int32_t eax_4
    
    if ((*(arg1 + 0x74) & 0x40) != 0)
        eax_4.b = *(arg2 + 0x19)
        
        if ((eax_4.b == 2 || eax_4.b == 6) && *(arg1 + 0x1f8) != 0 && arg2[6].b == 8)
            *(arg2 + 0x19) = 3
    
    if ((*(arg1 + 0x74) & 0x200) != 0 && arg2[6].b == 8 && *(arg2 + 0x19) != 3)
        arg2[6].b = 0x10
    
    if ((*(arg1 + 0x74) & 4) != 0 && arg2[6].b u< 8)
        arg2[6].b = 8
    
    eax_4.b = *(arg2 + 0x19)
    
    if (eax_4.b == 3 || (eax_4.b & 2) == 0)
        *(arg2 + 0x1d) = 1
    else
        *(arg2 + 0x1d) = 3
    
    if ((*(arg1 + 0x74) & 0x40000) != 0)
        eax_4.b &= 0xfb
        *(arg2 + 0x19) = eax_4.b
        *(arg2 + 0x16) = 0
    
    eax_4.b = *(arg2 + 0x19)
    
    if ((eax_4.b & 4) != 0)
        *(arg2 + 0x1d) += 1
    
    if ((*(arg1 + 0x74) & 0x8000) != 0 && (eax_4.b == 2 || eax_4.b == 0))
        *(arg2 + 0x1d) += 1
        
        if ((*(arg1 + 0x74) & 0x1000000) != 0)
            eax_4.b |= 4
            *(arg2 + 0x19) = eax_4.b
    
    if ((*(arg1 + 0x74) & 0x100000) != 0)
        eax_4.b = *(arg1 + 0x68)
        
        if (arg2[6].b u< eax_4.b)
            arg2[6].b = eax_4.b
        
        eax_4.b = *(arg1 + 0x69)
        
        if (*(arg2 + 0x1d) u< eax_4.b)
            *(arg2 + 0x1d) = eax_4.b
    
    eax_4.b = arg2[6].b
    eax_4.w = muls.dp.b(eax_4.b, *(arg2 + 0x1d))
    *(arg2 + 0x1e) = eax_4.b
    uint32_t eax_5 = zx.d(eax_4.b)
    
    if (eax_4.b u< 8)
        uint32_t eax_10 = (eax_5 * *arg2 + 7) u>> 3
        arg2[3] = eax_10
        *(arg1 + 0x11c) = eax_10
        return eax_10
    
    int32_t eax_7 = (eax_5 u>> 3) * *arg2
    arg2[3] = eax_7
    *(arg1 + 0x11c) = eax_7
    return eax_7
}
