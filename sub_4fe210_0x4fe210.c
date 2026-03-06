// 函数名称: sub_4fe210
// 虚拟地址: 0x4fe210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fe210(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x10)
    int32_t result = *(arg1 + 0x10)
    
    if (result s> 0 && result s< 0x12)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
