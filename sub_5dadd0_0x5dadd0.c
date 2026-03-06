// 函数名称: sub_5dadd0
// 虚拟地址: 0x5dadd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dadd0(int32_t arg1)
{
    // 第一条实际指令: int32_t eax_1 = InterlockedExchange(arg1, 1)
    int32_t eax_1 = InterlockedExchange(arg1, 1)
    int32_t eax_2 = neg.d(eax_1)
    return sbb.d(eax_2, eax_2, eax_1 != 0) + 1
}
