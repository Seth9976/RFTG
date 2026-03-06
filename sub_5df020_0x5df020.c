// 函数名称: sub_5df020
// 虚拟地址: 0x5df020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5df020(void* arg1)
{
    // 第一条实际指令: int32_t i_1 = *(arg1 + 0x18)
    int32_t i_1 = *(arg1 + 0x18)
    char* ecx = *(arg1 + 0x10)
    char* esi = ecx
    
    if (i_1 != 0)
        int32_t i
        
        do
            *esi = *ecx ^ 0x80
            ecx = &ecx[1]
            esi = &esi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x8008)
}
