// 函数名称: sub_5cbfb0
// 虚拟地址: 0x5cbfb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cbfb0()
{
    // 第一条实际指令: int32_t eax = sub_5af00e(2, 0)
    int32_t eax = sub_5af00e(2, 0)
    
    if (eax != sub_5cbf50)
        sub_5af00e(2, eax)
    
    int32_t result = sub_5af00e(0xf, 0)
    
    if (result == sub_5cbf50)
        return result
    
    return sub_5af00e(0xf, result)
}
