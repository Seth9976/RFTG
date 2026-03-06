// 函数名称: sub_5c1000
// 虚拟地址: 0x5c1000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1000(char* arg1, int128_t* arg2, void* arg3)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        void* edx_2 = arg3 + *(arg1 + 0x10)
        int32_t ecx_1 = adc.d(0, *(arg1 + 0x14), arg3 + *(arg1 + 0x10) u< arg3)
        
        if (ecx_1 u>= 0 && (ecx_1 u> 0 || edx_2 u>= arg3))
            int32_t temp2_1 = *(arg1 + 0xc)
            
            if (ecx_1 u<= temp2_1 && (ecx_1 u< temp2_1 || edx_2 u<= *(arg1 + 8)))
                int128_t* esi_1 = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = edx_2
                *(arg1 + 0x14) = ecx_1
                
                if (esi_1 == 0)
                    return 0xffffffff
                
                sub_5ab990(esi_1, arg2, arg3)
                return 0
    
    *arg1 = 0
    return 0xffffffff
}
