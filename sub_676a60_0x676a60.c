// 函数名称: sub_676a60
// 虚拟地址: 0x676a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_676a60(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int16_t* eax = arg2 + 0x94
    int16_t* eax = arg2 + 0x94
    int32_t i_3 = 0x11e
    int32_t i
    
    do
        *eax = 0
        eax = &eax[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    int16_t* eax_1 = arg2 + 0x988
    int32_t i_4 = 0x1e
    int32_t i_1
    
    do
        *eax_1 = 0
        eax_1 = &eax_1[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    void* eax_2 = arg2 + 0xa7c
    int32_t i_5 = 0x13
    int32_t i_2
    
    do
        *eax_2 = 0
        eax_2 += 4
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    *(arg2 + 0x494) = 1
    *(arg2 + 0x16ac) = 0
    *(arg2 + 0x16a8) = 0
    *(arg2 + 0x16b0) = 0
    *(arg2 + 0x16a0) = 0
    return 0
}
