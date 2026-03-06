// 函数名称: sub_4db680
// 虚拟地址: 0x4db680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4db680(int32_t arg1) __pure
{
    // 第一条实际指令: return (((((arg1 u>> 0x18 << 8) + zx.d(arg1.b)) << 8) + zx.d((arg1 u>> 8).b)) << 8) + zx.d((arg1 u>> 0x10).b)
    return (((((arg1 u>> 0x18 << 8) + zx.d(arg1.b)) << 8) + zx.d((arg1 u>> 8).b)) << 8)
        + zx.d((arg1 u>> 0x10).b)
}
