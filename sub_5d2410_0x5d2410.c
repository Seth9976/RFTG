// 函数名称: sub_5d2410
// 虚拟地址: 0x5d2410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d2410(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0xa0)
    int32_t* eax = *(arg1 + 0xa0)
    void* ecx = *eax
    int32_t result = (*(ecx + 0xc))(ecx, eax[1], 1, eax[2])
    
    if (result != *(*(arg1 + 0xa0) + 8))
        *(arg1 + 0x84) = 0
    
    return result
}
