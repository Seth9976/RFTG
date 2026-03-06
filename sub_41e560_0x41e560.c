// 函数名称: sub_41e560
// 虚拟地址: 0x41e560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41e560(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t (__fastcall* var_4)(int32_t arg1) = sub_41e610
    int32_t (__fastcall* var_4)(int32_t arg1) = sub_41e610
    sub_5a7116(arg1 + 0x2c0c0, 0x1c0, 0xc8, sub_41e5e0)
    __builtin_memset(arg1 + 0x43960, 0, 0x14)
    *(arg1 + 0x43978) = 0
    *(arg1 + 0x43974) = 1
    return arg1
}
