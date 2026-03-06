// 函数名称: sub_5d4280
// 虚拟地址: 0x5d4280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4280(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = sub_600f60()
    int32_t* eax = sub_600f60()
    
    if (eax != 0 && arg1 != 0 && arg1 u<= *eax)
        return eax[arg1 * 2 - 1]
    
    return 0
}
