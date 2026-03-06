// 函数名称: sub_602390
// 虚拟地址: 0x602390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_602390(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x274)
    void* esi = *(arg1 + 0x274)
    int32_t var_10 = 0x1400
    int32_t var_14 = 0
    void* var_18 = esi + 0xa0
    __builtin_memset(esi + 0x18, 0, 0x22)
    *(esi + 0x78) = 0
    *(esi + 0x98) = 0
    *(esi + 0x9c) = 0
    sub_5cd100()
    int32_t var_1c = 0x10
    int32_t var_20 = 0
    void* var_24 = esi + 0x14bc
    __builtin_memset(esi + 0x14a0, 0, 0x14)
    *(esi + 0x14b4) = 1
    *(esi + 0x14b8) = 0
    sub_5cd100()
    int32_t var_28 = 0x10
    int32_t var_2c = 0
    void* var_30 = esi + 0x14cc
    sub_5cd100()
    __builtin_memset(esi + 0x14dc, 0, 0x30)
    *(esi + 0x150c) = 0xffffffff
    *(esi + 0x1510) = 0xffffffff
    *(esi + 0x1514) = 0xffffffff
    *(esi + 0x1518) = 0xffffffff
    *(esi + 0x151c) = 0
    *(esi + 0x1520) = 0
    sub_601630()
    sub_5d0b80(0x65, "Menu")
    sub_5d0b80(0xe3, "Left Windows")
    return sub_5d0b80(0xe7, "Right Windows")
}
