// 函数名称: sub_5df0c0
// 虚拟地址: 0x5df0c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5df0c0(void* arg1)
{
    // 第一条实际指令: int32_t i_1 = *(arg1 + 0x18)
    int32_t i_1 = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    char* edx = esi + i_1 - 1
    uint16_t* esi_1 = esi + (i_1 << 1) - 2
    
    if (i_1 != 0)
        int32_t i
        
        do
            *esi_1 = (zx.w(*edx) ^ 0xff80) << 8
            edx -= 1
            esi_1 -= 2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax * 2
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x8010)
}
