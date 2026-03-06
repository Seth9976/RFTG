// 函数名称: sub_5c0da0
// 虚拟地址: 0x5c0da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c0da0(char* arg1)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t edx_1 = *(arg1 + 0x10)
        int32_t esi_2 = adc.d(*(arg1 + 0x14), 0, edx_1 u>= 0xfffffff8)
        
        if (esi_2 != 0 || edx_1 + 8 u>= 8)
            int32_t temp1_1 = *(arg1 + 0xc)
            
            if (esi_2 u<= temp1_1 && (esi_2 u< temp1_1 || edx_1 + 8 u<= *(arg1 + 8)))
                char* ecx_1 = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = edx_1 + 8
                *(arg1 + 0x14) = esi_2
                
                if (ecx_1 == 0)
                    return 0
                
                int32_t eax_4
                int32_t edx_5
                edx_5:eax_4 = sx.q(zx.d(ecx_1[7]))
                int32_t eax_7
                int32_t edx_7
                edx_7:eax_7 = sx.q(zx.d(ecx_1[6]))
                int32_t eax_9
                int32_t edx_8
                edx_8:eax_9 = sx.q(zx.d(ecx_1[5]))
                int32_t eax_11
                int32_t edx_9
                edx_9:eax_11 = sx.q(zx.d(ecx_1[4]))
                int32_t eax_13
                int32_t edx_10
                edx_10:eax_13 = sx.q(zx.d(ecx_1[3]))
                int32_t eax_15
                int32_t edx_11
                edx_11:eax_15 = sx.q(zx.d(ecx_1[2]))
                int32_t eax_17
                int32_t edx_12
                edx_12:eax_17 = sx.q(zx.d(ecx_1[1]))
                int32_t eax_19
                int32_t edx_13
                edx_13:eax_19 = sx.q(zx.d(*ecx_1))
                return eax_19 + (((((((((((((eax_4 << 8) + eax_7) << 8) + eax_9) << 8) + eax_11) << 8)
                    + eax_13) << 8) + eax_15) << 8) + eax_17) << 8)
    
    *arg1 = 0
    return 0
}
