// 函数名称: sub_5dfce0
// 虚拟地址: 0x5dfce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dfce0(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    int16_t* edx = esi + eax - 2
    int32_t* esi_1 = esi + (eax << 1) - 4
    uint32_t i_1 = eax u>> 1
    
    if (i_1 != 0)
        uint32_t i
        
        do
            *esi_1 = sx.d(*edx) << 0x10
            edx -= 2
            esi_1 -= 4
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
