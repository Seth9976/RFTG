// 函数名称: sub_5dfa40
// 虚拟地址: 0x5dfa40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5dfa40(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    int16_t* edx = esi + eax - 2
    void* esi_1 = esi + (eax << 1) - 4
    uint32_t i_1 = eax u>> 1
    
    if (i_1 != 0)
        uint32_t i
        
        do
            uint32_t edi_1 = zx.d(*edx)
            edx -= 2
            esi_1 -= 4
            i = i_1
            i_1 -= 1
            *(esi_1 + 4) = fconvert.s(float.t(edi_1) * fconvert.t(3.0518509447574615e-05) - float.t(1))
        while (i != 1)
    
    int32_t eax_1 = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1 * 2
    int32_t eax_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_3 << 2) + 0x28) != 0)
        (*(arg1 + (eax_3 << 2) + 0x28))(arg1, 0x8120)
}
