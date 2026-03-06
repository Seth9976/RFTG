// 函数名称: sub_5e0810
// 虚拟地址: 0x5e0810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0810(void* arg1)
{
    // 第一条实际指令: int16_t* ecx = *(arg1 + 0x10)
    int16_t* ecx = *(arg1 + 0x10)
    uint32_t i_1 = *(arg1 + 0x18) u>> 2
    int16_t* edx = ecx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int16_t edi_1 = 0x8000 ^ ecx[1]
            ecx = &ecx[2]
            *edx = rol.w(edi_1, 8)
            edx = &edx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_1 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(eax_1)
    *(arg1 + 0x18) = (eax_2 - edx_1) s>> 1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x1010)
}
