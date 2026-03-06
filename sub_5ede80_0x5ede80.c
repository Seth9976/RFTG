// 函数名称: sub_5ede80
// 虚拟地址: 0x5ede80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ede80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x18)
    void* edx = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    void* ecx = edx * 2
    int16_t* eax = esi + ecx - 4
    int16_t* edx_1 = esi + edx - 2
    uint32_t edi = zx.d(*edx_1)
    
    while (eax u>= esi)
        uint32_t ecx_1 = zx.d(*edx_1)
        eax[1] = ((edi + ecx_1) s>> 1).w
        *eax = ecx_1.w
        eax -= 4
        edx_1 -= 2
        edi = ecx_1
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    *(arg1 + 0x18) = ecx
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
