// 函数名称: _wcslen
// 虚拟地址: 0x5ac43f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_wcslen(int16_t* arg1)
{
    // 第一条实际指令: int16_t* eax = arg1
    int16_t* eax = arg1
    int16_t i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    return ((eax - arg1) s>> 1) - 1
}
