// 函数名称: sub_6807a0
// 虚拟地址: 0x6807a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6807a0(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1b0)
    void* esi = *(arg1 + 0x1b0)
    
    if (*(esi + 0x18) == 0)
        *(esi + 0xc) = (*(*(arg1 + 4) + 0x1c))(arg1, *(esi + 8), *(esi + 0x14), *(esi + 0x10), 0)
    
    int32_t ecx_3 = *arg3
    int32_t edi_1 = *(esi + 0x10) - *(esi + 0x18)
    int32_t eax_5 = arg4 - ecx_3
    
    if (edi_1 u> eax_5)
        edi_1 = eax_5
    
    int32_t eax_7 = *(arg1 + 0x74) - *(esi + 0x14)
    
    if (edi_1 u> eax_7)
        edi_1 = eax_7
    
    (*(*(arg1 + 0x1cc) + 4))(arg1, *(esi + 0xc) + (*(esi + 0x18) << 2), arg2 + (ecx_3 << 2), edi_1)
    *arg3 += edi_1
    int32_t result = *(esi + 0x10)
    *(esi + 0x18) += edi_1
    
    if (*(esi + 0x18) u>= result)
        *(esi + 0x14) += result
        *(esi + 0x18) = 0
    
    return result
}
