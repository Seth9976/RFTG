// 函数名称: sub_6578f0
// 虚拟地址: 0x6578f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_6578f0(int128_t* arg1)
{
    // 第一条实际指令: sub_656fe0(&arg1[1])
    sub_656fe0(&arg1[1])
    int32_t* esi = &arg1[3]
    int32_t i_1 = 7
    int32_t i
    
    do
        __free_base(*esi)
        esi = &esi[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    __free_base(*(arg1 + 0x24))
    __free_base(*(arg1 + 0x98))
    __free_base(arg1[0xa].d)
    return sub_5abfc0(arg1, i_1.b, 0xb4)
}
