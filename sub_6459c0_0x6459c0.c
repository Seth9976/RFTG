// 函数名称: sub_6459c0
// 虚拟地址: 0x6459c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6459c0(int32_t* arg1 @ esi, void** arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = arg1[7]
    int32_t eax = arg1[7]
    int32_t var_c
    int32_t edx
    
    if (eax s<= 0xff)
        edx = eax
        var_c = eax
    else
        edx = 0xff
        var_c = 0xff
    
    int32_t ecx = 0xffffffff
    int32_t edi = 0
    int32_t eax_1 = 0xffffffff
    
    if (*arg1 == 0 || edx == 0)
        return 0
    
    int32_t ebx = arg1[0x53]
    
    if (ebx == 0)
        ecx = 0
        eax_1 = 0
        
        if (edx s> 0)
            int32_t* edi_1 = arg1[4]
            
            do
                ebx += 1
                
                if (zx.d((*edi_1).b) s< 0xff)
                    break
                
                edi_1 = &edi_1[1]
            while (ebx s< var_c)
        
        goto label_645a95
    
    ebx = 0
    int32_t var_14_1 = 0
    int32_t var_8_1 = 0
    
    if (edx s<= 0)
    label_645a95:
        
        if (arg3 == 0)
            return 0
    else
        ebx = 0
        
        do
            if (edi s> arg4 && var_8_1 s>= 4)
                arg3 = 1
                break
            
            uint32_t edx_5 = zx.d((*(arg1[4] + (ebx << 2))).b)
            edi += edx_5
            
            if (edx_5 s>= 0xff)
                var_8_1 = 0
            else
                int32_t eax_3 = arg1[5]
                ecx = *(eax_3 + (ebx << 3))
                eax_1 = *(eax_3 + (ebx << 3) + 4)
                int32_t edx_7 = var_14_1 + 1
                var_14_1 = edx_7
                var_8_1 = edx_7
            
            ebx += 1
        while (ebx s< var_c)
        
        if (ebx != 0xff)
            goto label_645a95
    
    int32_t* edx_8 = arg1[4]
    __builtin_strncpy(&arg1[0xa], "OggS", 6)
    
    if ((*edx_8 & 0x100) == 0)
        *(arg1 + 0x2d) = 1
    
    if (arg1[0x53] == 0)
        *(arg1 + 0x2d) |= 2
    
    if (arg1[0x52] != 0 && arg1[7] == ebx)
        *(arg1 + 0x2d) |= 4
    
    arg1[0x53] = 1
    *(arg1 + 0x2e) = ecx.b
    int32_t ecx_1 = ecx u>> 8 | eax_1 << 0x18
    int32_t eax_5 = eax_1 s>> 8
    *(arg1 + 0x2f) = ecx_1.b
    int32_t ecx_2 = ecx_1 u>> 8 | eax_5 << 0x18
    int32_t eax_6 = eax_5 s>> 8
    arg1[0xc].b = ecx_2.b
    int32_t ecx_3 = ecx_2 u>> 8 | eax_6 << 0x18
    int32_t eax_7 = eax_6 s>> 8
    *(arg1 + 0x31) = ecx_3.b
    int32_t ecx_4 = ecx_3 u>> 8 | eax_7 << 0x18
    int32_t eax_8 = eax_7 s>> 8
    *(arg1 + 0x32) = ecx_4.b
    int32_t ecx_5 = ecx_4 u>> 8 | eax_8 << 0x18
    int32_t eax_9 = eax_8 s>> 8
    *(arg1 + 0x33) = ecx_5.b
    int32_t ecx_6 = ecx_5 u>> 8 | eax_9 << 0x18
    arg1[0xd].b = ecx_6.b
    *(arg1 + 0x35) = (ecx_6 u>> 8).b | (eax_9 s>> 8 << 0x18).b
    int32_t eax_11 = arg1[0x54]
    *(arg1 + 0x36) = eax_11.b
    int32_t eax_12 = eax_11 s>> 8
    *(arg1 + 0x37) = eax_12.b
    int32_t eax_13 = eax_12 s>> 8
    arg1[0xe].b = eax_13.b
    *(arg1 + 0x39) = (eax_13 s>> 8).b
    int32_t edx_9 = 0
    
    if (arg1[0x55] == 0xffffffff)
        arg1[0x55] = 0
    
    int32_t eax_15 = arg1[0x55]
    arg1[0x55] = eax_15 + 1
    *(arg1 + 0x3a) = eax_15.b
    int32_t eax_16 = eax_15 s>> 8
    *(arg1 + 0x3b) = eax_16.b
    int32_t eax_17 = eax_16 s>> 8
    arg1[0xf].b = eax_17.b
    *(arg1 + 0x3d) = (eax_17 s>> 8).b
    int32_t edi_2 = 0
    int32_t i = 0
    *(arg1 + 0x3e) = 0
    *(arg1 + 0x42) = ebx.b
    
    if (ebx s>= 2)
        do
            char ecx_10 = (*(arg1[4] + (i << 2))).b
            *(arg1 + i + 0x43) = ecx_10
            edi_2 += zx.d(ecx_10)
            char ecx_14 = (*(arg1[4] + (i << 2) + 4)).b
            *(arg1 + i + 0x44) = ecx_14
            edx_9 += zx.d(ecx_14)
            i += 2
        while (i s< ebx - 1)
    
    uint32_t ecx_21
    
    if (i s>= ebx)
        ecx_21 = 0
    else
        char ecx_19 = (*(arg1[4] + (i << 2))).b
        *(i + arg1 + 0x43) = ecx_19
        ecx_21 = zx.d(ecx_19)
    
    int32_t ecx_22 = ecx_21 + edx_9 + edi_2
    *arg2 = &arg1[0xa]
    arg1[0x51] = ebx + 0x1b
    arg2[1] = ebx + 0x1b
    int32_t edx_12 = *arg1 + arg1[3]
    arg2[3] = ecx_22
    arg2[2] = edx_12
    arg1[7] -= ebx
    int128_t* eax_21 = arg1[4]
    sub_5a6c10(eax_21, eax_21 + (ebx << 2), arg1[7] * 4)
    int128_t* eax_22 = arg1[5]
    sub_5a6c10(eax_22, eax_22 + (ebx << 3), arg1[7] * 8)
    arg1[3] += ecx_22
    sub_6456e0(arg2)
    return 1
}
