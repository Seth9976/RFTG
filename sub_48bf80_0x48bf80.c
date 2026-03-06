// 函数名称: sub_48bf80
// 虚拟地址: 0x48bf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48bf80(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ecx = *(arg2 + 4)
    void* ecx = *(arg2 + 4)
    int32_t eax_1 = sx.d(*(ecx + 0x10))
    int32_t esi = *(ecx + 8)
    int32_t var_8 = *(ecx + 0xc)
    int32_t edi = 1
    
    if ((esi & 0x10000) != 0)
        edi = 2
    
    if ((esi & 0x20000) != 0)
        edi = 3
    
    if ((esi & 0x80000) != 0)
        eax_1 = 2
        edi = 3
    
    int32_t ebx = divs.dp.d(sx.q(eax_1 * 0x64), edi)
    
    if ((esi & 0x400) != 0)
        ebx -= 1
    
    void* ecx_11 = *(arg1 + 4)
    int32_t eax_5 = sx.d(*(ecx_11 + 0x10))
    int32_t esi_3 = *(ecx_11 + 8)
    int32_t var_8_1 = *(ecx_11 + 0xc)
    int32_t edi_1 = 1
    
    if ((esi_3 & 0x10000) != 0)
        edi_1 = 2
    
    if ((esi_3 & 0x20000) != 0)
        edi_1 = 3
    
    if ((esi_3 & 0x80000) != 0)
        eax_5 = 2
        edi_1 = 3
    
    int32_t ecx_22 = divs.dp.d(sx.q(eax_5 * 0x64), edi_1)
    
    if ((esi_3 & 0x400) != 0)
        ecx_22 -= 1
    
    return ebx - ecx_22
}
