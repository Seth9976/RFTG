// 函数名称: sub_6780e0
// 虚拟地址: 0x6780e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6780e0(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x16bc)
    int32_t ecx = *(arg1 + 0x16bc)
    *(arg1 + 0x16b8) |= 2 << ecx.b
    
    if (ecx s<= 0xd)
        *(arg1 + 0x16bc) = ecx + 3
    else
        (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
        *(arg1 + 0x14) += 1
        (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
        int32_t edx_3 = *(arg1 + 0x16bc)
        *(arg1 + 0x14) += 1
        char* ecx_2
        ecx_2.b = 0x10
        ecx_2.b = 0x10 - edx_3.b
        *(arg1 + 0x16bc) = edx_3 - 0xd
        *(arg1 + 0x16b8) = 2 u>> ecx_2.b
    
    int32_t ecx_4 = *(arg1 + 0x16bc)
    *(arg1 + 0x16b8) = *(arg1 + 0x16b8)
    
    if (ecx_4 s<= 9)
        *(arg1 + 0x16bc) = ecx_4 + 7
        return sub_677ac0(arg1) __tailcall
    
    (*(arg1 + 8))[*(arg1 + 0x14)] = *(arg1 + 0x16b8)
    *(arg1 + 0x14) += 1
    (*(arg1 + 0x14))[*(arg1 + 8)] = *(arg1 + 0x16b9)
    *(arg1 + 0x14) += 1
    *(arg1 + 0x16bc) -= 9
    *(arg1 + 0x16b8) = 0
    return sub_677ac0(arg1) __tailcall
}
