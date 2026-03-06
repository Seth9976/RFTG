// 函数名称: sub_5f2220
// 虚拟地址: 0x5f2220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2220(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    int32_t ecx = edx * 2
    int32_t edi
    edi.w = *(esi + edx - 2)
    int16_t* edx_1 = esi + edx - 2
    int16_t* eax = esi + ecx - 4
    edi.w = rol.w(edi.w, 8)
    int32_t edi_1 = sx.d(edi.w)
    
    while (eax u>= esi)
        int32_t ecx_1
        ecx_1.w = *edx_1
        ecx_1.w = rol.w(ecx_1.w, 8)
        ecx_1 = sx.d(ecx_1.w)
        eax[1] = ((edi_1 + ecx_1) s>> 1).w
        *eax = ecx_1.w
        eax -= 4
        edx_1 -= 2
        edi_1 = ecx_1
    
    *(arg1 + 0x50) += 1
    int32_t result = *(arg1 + 0x50)
    *(arg1 + 0x18) = ecx
    
    if (*(arg1 + (result << 2) + 0x28) == 0)
        return result
    
    return (*(arg1 + (result << 2) + 0x28))(arg1, arg2)
}
