// 函数名称: sub_5cb2b0
// 虚拟地址: 0x5cb2b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb2b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = data_bed820
    int32_t ecx = data_bed820
    
    if (ecx == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 == 0 || *arg1 != ecx + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t var_c = arg1[6]
    int32_t var_14 = 0
    int32_t var_10 = 0
    int32_t var_8 = arg1[7]
    return sub_5c9f50(arg1, &var_14, 1)
}
