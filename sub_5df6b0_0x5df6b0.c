// 函数名称: sub_5df6b0
// 虚拟地址: 0x5df6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5df6b0(int32_t arg1)
{
    // 第一条实际指令: int32_t i_1 = *(arg1 + 0x18)
    int32_t i_1 = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    char* edx = esi + i_1 - 1
    void* esi_1 = esi + (i_1 << 2) - 4
    
    if (i_1 != 0)
        int32_t i
        
        do
            int32_t edi_1 = sx.d(*edx)
            edx -= 1
            esi_1 -= 4
            i = i_1
            i_1 -= 1
            *(esi_1 + 4) = fconvert.s(float.t(edi_1) * fconvert.t(0.0078740157186985016))
        while (i != 1)
    
    int32_t eax = *(arg1 + 0x18)
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax * 4
    int32_t eax_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_3 << 2) + 0x28) != 0)
        (*(arg1 + (eax_3 << 2) + 0x28))(arg1, 0x8120)
}
