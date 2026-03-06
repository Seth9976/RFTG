// 函数名称: sub_611240
// 虚拟地址: 0x611240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_611240(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = *arg1
    int32_t* eax = *arg1
    
    if (*eax == 0)
        sub_611240(&eax[1])
        sub_611240(*arg1 + 8)
        sub_611240(*arg1 + 0xc)
        sub_611240(*arg1 + 0x10)
    
    int32_t var_c_2 = *arg1
    int32_t result = sub_5d0af0()
    *arg1 = 0
    return result
}
