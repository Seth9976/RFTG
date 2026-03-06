// 函数名称: sub_5a6a3c
// 虚拟地址: 0x5a6a3c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a6a3c()
{
    // 第一条实际指令: int32_t eax = _atexit(0x5a69fc)
    int32_t eax = _atexit(0x5a69fc)
    int32_t eax_1 = neg.d(eax)
    return sbb.d(eax_1, eax_1, eax != 0) & 0x18
}
