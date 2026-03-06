// 函数名称: sub_527850
// 虚拟地址: 0x527850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_527850(int32_t arg1, int32_t, void* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 != 3)
        if (arg1 == 2)
            result = *(arg3 + 0x1598)
            goto label_527875
        
        if (arg1 == 1)
            result = *(arg3 + 0x1594)
            goto label_527875
    else
        result = *(arg3 + 0x159c)
    label_527875:
        
        if (result != 0)
            return result
    return *(arg3 + 0x1534)
}
