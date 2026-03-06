// 函数名称: sub_5c8e80
// 虚拟地址: 0x5c8e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8e80(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    
    if (ecx == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 s>= 0 && arg1 s< *(ecx + 0xe8))
        return *(*(ecx + 0xec) + arg1 * 0x44 + 0x40)
    
    int32_t var_8 = *(ecx + 0xe8) - 1
    sub_5cce60("displayIndex must be in the range 0 - %d")
    return 0
}
