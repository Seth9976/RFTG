// 函数名称: sub_6034d0
// 虚拟地址: 0x6034d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6034d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_10 = 0x1c
    int32_t var_10 = 0x1c
    int32_t* eax = sub_5d0ac0()
    int32_t var_14 = 4
    *eax = arg1
    eax[3] = 0
    eax[4].b = 1
    eax[2] = 0
    eax[1] = 0
    int32_t* eax_1 = sub_5d0ac0()
    eax[6] = eax_1
    *eax_1 = 0
    arg1[0x1b] = eax
    int32_t eax_2 = sub_603470(arg1)
    int32_t eax_3 = neg.d(eax_2)
    return not.d(sbb.d(eax_3, eax_3, eax_2 != 0)) & eax
}
