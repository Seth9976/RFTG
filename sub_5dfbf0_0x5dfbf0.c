// 函数名称: sub_5dfbf0
// 虚拟地址: 0x5dfbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dfbf0(void* arg1)
{
    // 第一条实际指令: uint32_t i_1 = *(arg1 + 0x18) u>> 1
    uint32_t i_1 = *(arg1 + 0x18) u>> 1
    int16_t* ecx = *(arg1 + 0x10)
    int16_t* edx = ecx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int16_t edi_1 = 0x8000 ^ *ecx
            ecx = &ecx[1]
            *edx = edi_1
            edx = &edx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x10)
}
