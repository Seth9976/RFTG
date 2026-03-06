// 函数名称: sub_677ac0
// 虚拟地址: 0x677ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_677ac0(void* arg1)
{
    // 第一条实际指令: int32_t ecx_3 = *(arg1 + 0x16bc)
    int32_t ecx_3 = *(arg1 + 0x16bc)
    
    if (ecx_3 == 0x10)
        (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
        *(arg1 + 0x14) += 1
        *(arg1 + 0x16b8) = 0
        *(arg1 + 0x16bc) = 0
        return 
    
    if (ecx_3 s< 8)
        return 
    
    int32_t ebx
    ebx.b = *(arg1 + 0x16b8)
    (*(arg1 + 8))[*(arg1 + 0x14)] = ebx.b
    uint16_t edx_4 = zx.w(*(arg1 + 0x16b9))
    *(arg1 + 0x14) += 1
    *(arg1 + 0x16bc) -= 8
    *(arg1 + 0x16b8) = edx_4
}
