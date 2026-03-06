// 函数名称: sub_683c00
// 虚拟地址: 0x683c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683c00(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = *(arg1 + 0x70)
    int32_t i = 0
    int32_t ecx_1 = result * 2 + 4
    
    if (*(arg1 + 0x78) s> 0)
        int32_t* ebx_1 = *(arg1 + 0x1cc) + 0x44
        
        do
            result = (*(*(arg1 + 4) + 4))(arg1, 1, ecx_1)
            *ebx_1 = result
            i += 1
            ebx_1 = &ebx_1[1]
        while (i s< *(arg1 + 0x78))
    
    return result
}
