// 函数名称: sub_68b0a0
// 虚拟地址: 0x68b0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b0a0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 u<= 0x20)
    if (arg2 u<= 0x20)
        int32_t eax_1 = *((arg2 << 2) + &data_83f1c0)
        int32_t ecx_1 = arg1[4]
        int32_t edx_1 = *arg1
        int32_t eax_2 = arg1[1]
        int32_t esi_1 = arg2 + eax_2
        
        if (edx_1 s< ecx_1 - 4)
        label_68b0eb:
            char* edx_2 = arg1[3]
            ecx_1.b = eax_2.b
            uint32_t ebx_5 = zx.d(*edx_2) u>> ecx_1.b
            
            if (esi_1 s> 8)
                ebx_5 |= zx.d(edx_2[1]) << (8 - eax_2.b)
                
                if (esi_1 s> 0x10)
                    ebx_5 |= zx.d(*(arg1[3] + 2)) << (0x10 - eax_2.b)
                    
                    if (esi_1 s> 0x18)
                        ebx_5 |= zx.d(*(arg1[3] + 3)) << (0x18 - eax_2.b)
                        
                        if (esi_1 s> 0x20 && eax_2 != 0)
                            ebx_5 |= zx.d(*(arg1[3] + 4)) << (0x20 - eax_2.b)
            
            int32_t eax_5
            int32_t edx_11
            edx_11:eax_5 = sx.q(esi_1)
            int32_t eax_7 = (eax_5 + (edx_11 & 7)) s>> 3
            int32_t ecx_10 = arg1[3] + eax_7
            *arg1 += eax_7
            arg1[1] = esi_1 & 7
            arg1[3] = ecx_10
            return ebx_5 & eax_1
        
        if (edx_1 s<= ecx_1 - ((esi_1 + 7) s>> 3))
            if (esi_1 == 0)
                return 0
            
            goto label_68b0eb
    
    int32_t edx_13 = arg1[4]
    arg1[3] = 0
    *arg1 = edx_13
    arg1[1] = 1
    return 0xffffffff
}
