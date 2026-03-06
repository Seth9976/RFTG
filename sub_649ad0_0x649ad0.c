// 函数名称: sub_649ad0
// 虚拟地址: 0x649ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649ad0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x48)
    int32_t ebx = *(arg1 + 0x48)
    uint32_t edi_2 = (arg2 + 7) & 0xfffffff8
    
    if (ebx + edi_2 s> *(arg1 + 0x4c))
        if (*(arg1 + 0x44) != 0)
            int32_t* eax_1 = sub_5a881a(8)
            int32_t ecx_1 = *(arg1 + 0x54)
            *(arg1 + 0x50) += ebx
            eax_1[1] = ecx_1
            *eax_1 = *(arg1 + 0x44)
            *(arg1 + 0x54) = eax_1
        
        *(arg1 + 0x4c) = edi_2
        *(arg1 + 0x44) = sub_5a881a(edi_2)
        *(arg1 + 0x48) = 0
    
    int32_t ecx_2 = *(arg1 + 0x48)
    int32_t result = *(arg1 + 0x44) + ecx_2
    *(arg1 + 0x48) = ecx_2 + edi_2
    return result
}
