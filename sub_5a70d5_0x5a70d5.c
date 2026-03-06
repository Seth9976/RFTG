// 函数名称: sub_5a70d5
// 虚拟地址: 0x5a70d5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_5a70d5(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_2 = sub_5ac040(arg2 + 9, arg1 + 9)
    int32_t eax_2 = sub_5ac040(arg2 + 9, arg1 + 9)
    int32_t eax_3 = neg.d(eax_2)
    return sbb.d(eax_3, eax_3, eax_2 != 0) + 1
}
