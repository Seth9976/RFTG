// 函数名称: sub_43cd60
// 虚拟地址: 0x43cd60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43cd60()
{
    // 第一条实际指令: void* eax = *(data_27e7a40 + 0x548)
    void* eax = *(data_27e7a40 + 0x548)
    int32_t ecx
    ecx.b = *(eax + 0xbfb0) != 3
    *(eax + 0xbfb0) = (ecx << 2) + 0xffffffff
    return 0
}
