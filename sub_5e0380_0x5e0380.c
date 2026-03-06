// 函数名称: sub_5e0380
// 虚拟地址: 0x5e0380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0380(void* arg1)
{
    // 第一条实际指令: uint32_t i_1 = *(arg1 + 0x18) u>> 1
    uint32_t i_1 = *(arg1 + 0x18) u>> 1
    int16_t* ecx = *(arg1 + 0x10)
    int16_t* edx = ecx
    
    if (i_1 != 0)
        int32_t edi
        int32_t var_10_1 = edi
        uint32_t i
        
        do
            edi.w = *ecx
            edi.w = rol.w(edi.w, 8)
            edi.w ^= 0x8000
            *edx = edi.w
            ecx = &ecx[1]
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
