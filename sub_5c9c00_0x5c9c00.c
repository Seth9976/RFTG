// 函数名称: sub_5c9c00
// 虚拟地址: 0x5c9c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c9c00(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx = data_bed820
    int32_t ecx = data_bed820
    
    if (ecx == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != ecx + 0xf4)
        return sub_5cce60("Invalid window")
    
    if (arg2 != 0)
        *arg2 = arg1[8]
    
    if (arg3 == 0)
        return arg1
    
    int32_t eax_2 = arg1[9]
    *arg3 = eax_2
    return eax_2
}
