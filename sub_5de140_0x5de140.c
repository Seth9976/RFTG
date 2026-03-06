// 函数名称: sub_5de140
// 虚拟地址: 0x5de140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de140(void* arg1, PSTR arg2)
{
    // 第一条实际指令: int32_t result = (*(*(arg1 + 0x278) + 8))(arg2)
    int32_t result = (*(*(arg1 + 0x278) + 8))(arg2)
    
    if (result != 0)
        return result
    
    return GetProcAddress(*(arg1 + 0x260), arg2)
}
