// 函数名称: sub_43ccb0
// 虚拟地址: 0x43ccb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43ccb0()
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    int32_t ecx = *(eax + 0xbfb0)
    int32_t ecx_1 = neg.d(ecx)
    *(eax + 0xbfb0) = neg.d(sbb.d(ecx_1, ecx_1, ecx != 0)) - 1
    return 0
}
