// 函数名称: sub_5cd230
// 虚拟地址: 0x5cd230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd230(int16_t* arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = sub_5cd1d0(arg1)
    int32_t eax = sub_5cd1d0(arg1)
    int32_t eax_1 = sub_5cd1d0(arg2)
    
    if (eax u< arg3)
        sub_5cd1f0(&arg1[eax], arg2, arg3 - eax)
    
    return eax_1 + eax
}
