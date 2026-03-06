// 函数名称: sub_6715c0
// 虚拟地址: 0x6715c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6715c0(int32_t* arg1, int128_t* arg2, void* arg3)
{
    // 第一条实际指令: if (arg3 s>= 6)
    if (arg3 s>= 6)
        return 
    
    uint32_t ebx
    uint32_t var_10_1 = ebx
    uint32_t edi_1 = zx.d(*(arg1 + 0xb))
    int32_t ecx_2 = *arg1
    int128_t* esi_2
    bool cond:1_1
    
    if (edi_1 == 1)
        uint32_t edx_4 = zx.d(*(arg3 + 0x830610))
        int32_t var_c_3 = ecx_2
        esi_2 = arg2
        int32_t var_8_4 = 0
        int32_t eax_12 = 7
        
        if (edx_4 u< ecx_2)
            do
                ebx.b = edx_4.b
                ebx.b &= 7
                ecx_2 = var_8_4 | (zx.d(*((edx_4 u>> 3) + arg2)) u>> (7 - ebx.b) & 1) << eax_12.b
                var_8_4 = ecx_2
                
                if (eax_12 != 0)
                    eax_12 -= 1
                else
                    *esi_2 = ecx_2.b
                    esi_2 += 1
                    ecx_2 = 0
                    eax_12 = 7
                    var_8_4 = 0
                
                edx_4 += zx.d(*(arg3 + 0x830618))
            while (edx_4 u< var_c_3)
            
            cond:1_1 = eax_12 == 7
        label_6717a1:
            
            if (not(cond:1_1))
                *esi_2 = ecx_2.b
    else if (edi_1 == 2)
        uint32_t edx_3 = zx.d(*(arg3 + 0x830610))
        int32_t var_c_2 = ecx_2
        esi_2 = arg2
        int32_t eax_11 = 6
        int32_t var_8_3 = 0
        
        if (edx_3 u< ecx_2)
            do
                ebx.b = edx_3.b
                ebx.b &= 3
                ecx_2 = var_8_3 | (zx.d(*((edx_3 u>> 2) + arg2)) u>> ((3 - ebx.b) * 2) & 3) << eax_11.b
                var_8_3 = ecx_2
                
                if (eax_11 != 0)
                    eax_11 -= 2
                else
                    *esi_2 = ecx_2.b
                    esi_2 += 1
                    ecx_2 = 0
                    eax_11 = 6
                    var_8_3 = 0
                
                edx_3 += zx.d(*(arg3 + 0x830618))
            while (edx_3 u< var_c_2)
            
            cond:1_1 = eax_11 == 6
            goto label_6717a1
    else if (edi_1 == 4)
        uint32_t edx_2 = zx.d(*(arg3 + 0x830610))
        int32_t var_c_1 = ecx_2
        esi_2 = arg2
        int32_t eax_10 = 4
        int32_t var_8_2 = 0
        
        if (edx_2 u< ecx_2)
            do
                ecx_2.b = edx_2.b
                ecx_2.b &= 1
                ecx_2.b *= 2
                ecx_2 =
                    var_8_2 | (zx.d(*((edx_2 u>> 1) + arg2)) u>> (4 - ecx_2.b * 2) & 0xf) << eax_10.b
                var_8_2 = ecx_2
                
                if (eax_10 != 0)
                    eax_10 -= 4
                else
                    *esi_2 = ecx_2.b
                    esi_2 += 1
                    ecx_2 = 0
                    eax_10 = 4
                    var_8_2 = 0
                
                edx_2 += zx.d(*(arg3 + 0x830618))
            while (edx_2 u< var_c_1)
            
            cond:1_1 = eax_10 == 4
            goto label_6717a1
    else
        int128_t* ebx_1 = arg2
        uint32_t esi_1 = zx.d(*(arg3 + 0x830610))
        uint32_t edi_2 = edi_1 u>> 3
        
        if (esi_1 u< ecx_2)
            int32_t ecx_3 = ecx_2
            
            do
                int128_t* eax_8 = esi_1 * edi_2 + arg2
                
                if (ebx_1 != eax_8)
                    sub_5ab990(ebx_1, eax_8, edi_2)
                    ecx_3 = ecx_2
                
                esi_1 += zx.d(*(arg3 + 0x830618))
                ebx_1 += edi_2
            while (esi_1 u< ecx_3)
    uint32_t ecx_13 = zx.d(*(arg3 + 0x830618))
    uint32_t temp0_1 = divu.dp.d(0:(ecx_13 - zx.d(*(arg3 + 0x830610)) + *arg1 - 1), ecx_13)
    ecx_13.b = *(arg1 + 0xb)
    uint32_t ecx_14 = zx.d(ecx_13.b)
    *arg1 = temp0_1
    
    if (ecx_13.b u>= 8)
        arg1[1] = (ecx_14 u>> 3) * temp0_1
        return 
    
    arg1[1] = (ecx_14 * temp0_1 + 7) u>> 3
}
