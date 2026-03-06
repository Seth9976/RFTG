// 函数名称: sub_5646d0
// 虚拟地址: 0x5646d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5646d0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t result = *(arg1 + 8)
    int32_t result = *(arg1 + 8)
    
    if (result != 0)
        result = _aligned_free_base(result)
    
    *(arg1 + 8) = 0
    return result
}
