// 函数名称: sub_5c9500
// 虚拟地址: 0x5c9500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9500(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_5c9350(arg1)
    int32_t eax_1 = sub_5c9350(arg1)
    
    if (eax_1 s< 0)
        return 0
    
    return *(data_bed820 + 0xec) + eax_1 * 0x44
}
