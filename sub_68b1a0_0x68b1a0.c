// 函数名称: sub_68b1a0
// 虚拟地址: 0x68b1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b1a0(void* arg1)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(arg1 + 4) + 7)
    return ((eax_2 + (edx & 7)) s>> 3) + *arg1
}
