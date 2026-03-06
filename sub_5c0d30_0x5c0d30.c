// 函数名称: sub_5c0d30
// 虚拟地址: 0x5c0d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c0d30(char* arg1)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t ecx_1 = *(arg1 + 0x10)
        int32_t edx_2 = adc.d(*(arg1 + 0x14), 0, ecx_1 u>= 0xfffffffc)
        
        if (edx_2 != 0 || ecx_1 + 4 u>= 4)
            int32_t temp1_1 = *(arg1 + 0xc)
            
            if (edx_2 u<= temp1_1 && (edx_2 u< temp1_1 || ecx_1 + 4 u<= *(arg1 + 8)))
                char* esi_1 = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = ecx_1 + 4
                *(arg1 + 0x14) = edx_2
                
                if (esi_1 != 0)
                    return (((((zx.d(esi_1[3]) << 8) + zx.d(esi_1[2])) << 8) + zx.d(esi_1[1])) << 8)
                        + zx.d(*esi_1)
                
                return 0
    
    *arg1 = 0
    return 0
}
