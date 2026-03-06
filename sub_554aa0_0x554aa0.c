// 函数名称: sub_554aa0
// 虚拟地址: 0x554aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_554aa0(void* arg1, int32_t, int32_t arg3)
{
    // 第一条实际指令: while (*(arg1 + 4) != 0)
    while (*(arg1 + 4) != 0)
        if (*arg1 == arg3)
            return *(arg1 + 4)
        
        arg1 += 8
    
    return &data_83f3d3
}
