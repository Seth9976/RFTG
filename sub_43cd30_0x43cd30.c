// 函数名称: sub_43cd30
// 虚拟地址: 0x43cd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43cd30()
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    int32_t ecx_1 = *(eax + 0xbfb0) - 2
    int32_t ecx_2 = neg.d(ecx_1)
    *(eax + 0xbfb0) = (sbb.d(ecx_2, ecx_2, ecx_1 != 0) & 3) - 1
    return 0
}
