// 函数名称: sub_46b580
// 虚拟地址: 0x46b580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46b580(void* arg1 @ esi, int32_t* arg2 @ edi, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx = sx.d(*(arg1 + 0x1e6a))
    int32_t ecx = sx.d(*(arg1 + 0x1e6a))
    int32_t ecx_1 = ecx - 1
    int32_t result
    
    if (ecx - 1 s>= 0)
        void* edx_1 = arg1 + (ecx_1 << 1) + 0x1e90
        int32_t temp1_1
        
        do
            *arg4 = sx.d(*(arg1 + ecx_1 + 0x1e84))
            int32_t eax_1 = sx.d(*(edx_1 - 0x24))
            *arg5 = eax_1
            result = sx.d(*(arg1 + eax_1 * 0x14 + 0x464))
            *arg2 = sx.d(*edx_1)
            
            if (result == arg3)
                result.b = 1
                return result
            
            edx_1 -= 2
            temp1_1 = ecx_1
            ecx_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    result.b = 0
    return result
}
