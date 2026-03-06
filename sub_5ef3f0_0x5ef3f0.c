// 函数名称: sub_5ef3f0
// 虚拟地址: 0x5ef3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef3f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int16_t* ecx = *(arg1 + 0x10)
    int16_t* ecx = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t edx_2 = (eax_1 - edx) s>> 1
    void* eax_3 = ecx + edx_2
    int16_t* esi = ecx
    int32_t edi = sx.d(*esi)
    
    while (ecx u< eax_3)
        int32_t edx_3 = sx.d(*esi)
        *ecx = ((edi + edx_3) s>> 1).w
        ecx = &ecx[1]
        esi = &esi[2]
        edi = edx_3
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    *(arg1 + 0x18) = edx_2
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
