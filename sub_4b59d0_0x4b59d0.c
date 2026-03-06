// 函数名称: sub_4b59d0
// 虚拟地址: 0x4b59d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b59d0(void* arg1 @ esi)
{
    // 第一条实际指令: *(arg1 + 0x94) = 0
    *(arg1 + 0x94) = 0
    *(arg1 + 0x54) = 0
    *(arg1 + 0x94) += 1
    char eax
    int32_t ecx
    int32_t ecx_1
    eax, ecx_1 = sub_4b95c0(ecx, 2)
    
    if (eax != 0)
        *(arg1 + (*(arg1 + 0x94) << 2) + 0x54) = 2
        *(arg1 + 0x94) += 1
    
    char eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_4b95c0(ecx_1, 3)
    
    if (eax_2 != 0)
        ecx_2 = *(arg1 + 0x94)
        *(arg1 + (ecx_2 << 2) + 0x54) = 3
        *(arg1 + 0x94) += 1
    
    char result = sub_4b95c0(ecx_2, 4)
    
    if (result != 0)
        *(arg1 + (*(arg1 + 0x94) << 2) + 0x54) = 4
        *(arg1 + 0x94) += 1
    
    return result
}
