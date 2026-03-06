// 函数名称: sub_500650
// 虚拟地址: 0x500650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_500650()
{
    // 第一条实际指令: void* eax = sub_4cce80(0x20)
    void* eax = sub_4cce80(0x20)
    __builtin_memset(eax, 0, 0x20)
    *(eax + 0x10) = 0
    *(eax + 0x14) = 0
    *(eax + 0x1c) = 0
    data_30785c8 = eax
    *(eax + 0x18) = 0x400
    sub_504460(eax + 0x10)
    int32_t* esi_1 = data_30785c8
    *esi_1 = 0
    esi_1[1] = 0
    esi_1[2] = 0x400
    esi_1[3] = 0
    return sub_5043e0(esi_1)
}
