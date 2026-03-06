// 函数名称: sub_5a2910
// 虚拟地址: 0x5a2910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5a2910(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_5 = *(arg1 + 0xac)
    int32_t eax_5 = *(arg1 + 0xac)
    int32_t edx
    int32_t entry_ebx
    
    if (eax_5 s>= 0)
        *(arg1 + 0x8c)
        edx = mods.dp.d(sx.q(*(arg1 + 0xa8) - *(arg1 + 0xa4) + eax_5 + 1), *(arg1 + 0x8c))
    else
        *(arg1 + 0xac) = 0
        edx = 0
        *(arg1 + 0xa4) = entry_ebx
    
    int32_t eax_3 = *(arg1 + 0xa0)
    int128_t* result = *(arg1 + 0xb0) + (((eax_3 u>> 2) * edx) << 2)
    sub_5abfc0(result, 0, eax_3)
    *(arg1 + 0xa8) = entry_ebx
    return result
}
