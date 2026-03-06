// 函数名称: sub_645f20
// 虚拟地址: 0x645f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645f20(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    void* edi = *ecx
    int128_t* var_10 = ecx[2]
    uint32_t eax_1 = zx.d(*(edi + 4))
    uint32_t eax_2 = zx.d(*(edi + 5))
    arg2 = ecx[3]
    int32_t var_c = 0
    int32_t var_14 = eax_2 & 2
    int32_t eax_4
    int32_t edx_5
    eax_4, edx_5 = sub_645560(ecx)
    uint32_t ebx = zx.d(*(edi + 0x11))
    uint32_t ecx_1 = zx.d(*(edi + 0x10))
    int32_t* esi = arg1
    uint32_t edx_8 = zx.d(*(edi + 0x1a))
    uint32_t eax_12 = ((zx.d(*(edi + 0x15)) << 8 | zx.d(*(edi + 0x14))) << 8 | zx.d(*(edi + 0x13))) << 8
        | zx.d(*(edi + 0x12))
    
    if (esi != 0 && *esi != 0)
        void* ecx_4 = esi[3]
        int32_t* eax_14 = esi[9]
        arg1 = eax_14
        
        if (ecx_4 != 0)
            int32_t temp0_1 = esi[2]
            esi[2] -= ecx_4
            
            if (temp0_1 != ecx_4)
                int128_t* eax_15 = *esi
                sub_5a6c10(eax_15, ecx_4 + eax_15, esi[2])
                eax_14 = arg1
            
            esi[3] = 0
        
        if (eax_14 != 0)
            int32_t edx_10 = esi[7]
            
            if (edx_10 != eax_14)
                int128_t* ecx_6 = esi[4]
                sub_5a6c10(ecx_6, ecx_6 + (eax_14 << 2), (edx_10 - eax_14) * 4)
                int128_t* ecx_7 = esi[5]
                sub_5a6c10(ecx_7, ecx_7 + (arg1 << 3), (esi[7] - arg1) * 8)
                eax_14 = arg1
            
            esi[7] -= eax_14
            esi[8] -= eax_14
            esi[9] = 0
        
        if ((((ebx << 8 | ecx_1) << 8 | zx.d(*(edi + 0xf))) << 8 | zx.d(*(edi + 0xe))) == esi[0x54]
                && eax_1 s<= 0 && sub_645670(edx_8 + 1, esi) == 0)
            if (eax_12 != esi[0x55])
                int32_t i = esi[8]
                
                if (i s< esi[7])
                    int32_t ecx_8 = esi[2]
                    int32_t* edx_20 = esi[4] + (i << 2)
                    
                    do
                        ecx_8 -= zx.d((*edx_20).b)
                        i += 1
                        esi[2] = ecx_8
                        edx_20 = &edx_20[1]
                    while (i s< esi[7])
                    
                    i = esi[8]
                
                bool cond:1_1 = esi[0x55] == 0xffffffff
                esi[7] = i
                
                if (not(cond:1_1))
                    *(esi[4] + (i << 2)) = 0x400
                    esi[7] += 1
                    esi[8] += 1
            
            int32_t eax_23
            
            if ((eax_2 & 1) != 0)
                eax_23 = esi[7]
            
            uint32_t ecx_10
            int32_t ebx_10
            
            if ((eax_2 & 1) != 0 && (eax_23 s< 1 || *(esi[4] + (eax_23 << 2) - 4) == 0x400))
                ecx_10 = edx_8
                var_14 = 0
                
                if (ecx_10 s<= 0)
                    ebx_10 = 0
                else
                    do
                        uint32_t eax_24 = zx.d(*(edi + var_c + 0x1b))
                        var_10 += eax_24
                        arg2 -= eax_24
                        ebx_10 = var_c + 1
                        
                        if (eax_24 s< 0xff)
                            break
                        
                        var_c = ebx_10
                    while (ebx_10 s< ecx_10)
            else
                ecx_10 = edx_8
                ebx_10 = 0
            
            if (arg2 != 0)
                int32_t eax_25 = esi[1]
                
                if (eax_25 s<= esi[2] + arg2)
                    int32_t eax_27 = _realloc(*esi, eax_25 + arg2 + 0x400)
                    
                    if (eax_27 == 0)
                        sub_645620(esi)
                        return 0xffffffff
                    
                    esi[1] += arg2 + 0x400
                    *esi = eax_27
                
                sub_5ab990(esi[2] + *esi, var_10, arg2)
                ecx_10 = edx_8
                esi[2] += arg2
            
            arg2 = 0xffffffff
            
            if (ebx_10 s< ecx_10)
                void* ecx_20
                
                do
                    uint32_t edx_26 = zx.d(*(edi + ebx_10 + 0x1b))
                    *(esi[4] + (esi[7] << 2)) = edx_26
                    int32_t eax_31 = esi[5]
                    int32_t ecx_18 = esi[7]
                    *(eax_31 + (ecx_18 << 3)) = 0xffffffff
                    *(eax_31 + (ecx_18 << 3) + 4) = 0xffffffff
                    
                    if (var_14 != 0)
                        int32_t eax_32 = esi[7]
                        int32_t ecx_19 = esi[4]
                        *(ecx_19 + (eax_32 << 2)) |= 0x100
                        var_14 = 0
                    
                    if (edx_26 s>= 0xff)
                        ecx_20 = arg2
                    else
                        ecx_20 = esi[7]
                        arg2 = ecx_20
                    
                    esi[7] += 1
                    ebx_10 += 1
                    
                    if (edx_26 s< 0xff)
                        esi[8] = esi[7]
                while (ebx_10 s< edx_8)
                
                if (ecx_20 != 0xffffffff)
                    int32_t eax_35 = esi[5]
                    *(eax_35 + (ecx_20 << 3)) = eax_4
                    *(eax_35 + (ecx_20 << 3) + 4) = edx_5
            
            if ((eax_2 & 4) != 0)
                int32_t eax_36 = esi[7]
                esi[0x52] = 1
                
                if (eax_36 s> 0)
                    int32_t ecx_21 = esi[4]
                    *(ecx_21 + (eax_36 << 2) - 4) |= 0x200
            
            esi[0x55] = eax_12 + 1
            return 0
    
    return 0xffffffff
}
