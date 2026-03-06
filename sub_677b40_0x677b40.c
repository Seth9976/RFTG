// 函数名称: sub_677b40
// 虚拟地址: 0x677b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_677b40(void* arg1)
{
    // 第一条实际指令: int32_t ecx_2 = *(arg1 + 0x16bc)
    int32_t ecx_2 = *(arg1 + 0x16bc)
    
    if (ecx_2 s> 8)
        (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
        *(arg1 + 0x14) += 1
    else if (ecx_2 s> 0)
        uint32_t ebx
        ebx.b = *(arg1 + 0x16b8)
        (*(arg1 + 8))[*(arg1 + 0x14)] = ebx.b
        *(arg1 + 0x14) += 1
    
    *(arg1 + 0x16b8) = 0
    *(arg1 + 0x16bc) = 0
}
