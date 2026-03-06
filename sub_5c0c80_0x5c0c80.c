// 函数名称: sub_5c0c80
// 虚拟地址: 0x5c0c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c0c80(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t esi_1 = *(arg1 + 0x10)
        int32_t esi_2 = esi_1 + arg2
        int32_t edx_2 = adc.d(*(arg1 + 0x14), arg3, esi_1 + arg2 u< esi_1)
        
        if (edx_2 u>= arg3 && (edx_2 u> arg3 || esi_2 u>= arg2))
            int32_t temp1_1 = *(arg1 + 0xc)
            
            if (edx_2 u<= temp1_1 && (edx_2 u< temp1_1 || esi_2 u<= *(arg1 + 8)))
                int32_t result = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = esi_2
                *(arg1 + 0x14) = edx_2
                return result
    
    *arg1 = 0
    return 0
}
