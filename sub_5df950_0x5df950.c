// 函数名称: sub_5df950
// 虚拟地址: 0x5df950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5df950(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x10)
    int16_t* ecx = edx + eax - 2
    int32_t* edx_1 = edx + (eax << 1) - 4
    uint32_t i_1 = eax u>> 1
    
    if (i_1 != 0)
        uint32_t i
        
        do
            *edx_1 = (zx.d(*ecx) ^ 0xffff8000) << 0x10
            ecx -= 2
            edx_1 -= 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_1 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1 * 2
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x8020)
}
