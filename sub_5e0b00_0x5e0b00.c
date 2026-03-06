// 函数名称: sub_5e0b00
// 虚拟地址: 0x5e0b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0b00(void* arg1)
{
    // 第一条实际指令: int32_t* edx = *(arg1 + 0x10)
    int32_t* edx = *(arg1 + 0x10)
    uint32_t i_1 = *(arg1 + 0x18) u>> 2
    int16_t* esi = edx
    
    if (i_1 != 0)
        uint32_t i
        
        do
            int32_t eax_1 = *edx
            *esi = (zx.w((eax_1 u>> 8).b) | (eax_1 << 8).w) ^ 0x8000
            edx = &edx[1]
            esi = &esi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t eax_3 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_3)
    *(arg1 + 0x18) = (eax_4 - edx_1) s>> 1
    int32_t result = *(arg1 + 0x50)
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, 0x10)
}
