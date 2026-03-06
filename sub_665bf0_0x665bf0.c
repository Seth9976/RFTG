// 函数名称: sub_665bf0
// 虚拟地址: 0x665bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_665bf0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_1 = *(arg1 + 0x208)
    int32_t eax_1 = *(arg1 + 0x208)
    *(arg1 + 0x204) = 1
    
    if (eax_1 != 0)
        *(arg1 + 0x208) = 0
        sub_666530(arg1, eax_1)
    
    int32_t eax = *(arg1 + 0x20c)
    
    if (eax != 0)
        *(arg1 + 0x20c) = 0
        sub_666530(arg1, eax)
    
    int32_t result = *(arg1 + 0x210)
    
    if (result == 0)
        return result
    
    *(arg1 + 0x210) = 0
    return sub_666530(arg1, result)
}
