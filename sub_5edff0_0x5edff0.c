// 函数名称: sub_5edff0
// 虚拟地址: 0x5edff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5edff0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int16_t* ecx = *(arg1 + 0x10)
    int16_t* ecx = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t edx_3 = ((edx & 3) + eax_1) s>> 2
    void* eax_2 = ecx + edx_3
    int16_t* esi = ecx
    uint32_t edi = zx.d(*esi)
    
    while (ecx u< eax_2)
        uint32_t edx_4 = zx.d(*esi)
        *ecx = ((edi + edx_4) s>> 1).w
        ecx = &ecx[1]
        esi = &esi[4]
        edi = edx_4
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    *(arg1 + 0x18) = edx_3
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
