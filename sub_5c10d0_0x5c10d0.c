// 函数名称: sub_5c10d0
// 虚拟地址: 0x5c10d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c10d0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t edx_1 = *(arg1 + 0x10)
        int32_t esi_2 = adc.d(*(arg1 + 0x14), 0, edx_1 u>= 0xfffffffc)
        
        if (esi_2 != 0 || edx_1 + 4 u>= 4)
            int32_t temp1_1 = *(arg1 + 0xc)
            
            if (esi_2 u<= temp1_1 && (esi_2 u< temp1_1 || edx_1 + 4 u<= *(arg1 + 8)))
                char* ecx_1 = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = edx_1 + 4
                *(arg1 + 0x14) = esi_2
                
                if (ecx_1 == 0)
                    return 0xffffffff
                
                ecx_1[1] = (arg2 u>> 8).b
                *ecx_1 = arg2.b
                ecx_1[3] = (arg2 u>> 0x18).b
                ecx_1[2] = (arg2 u>> 0x10).b
                return 0
    
    *arg1 = 0
    return 0xffffffff
}
