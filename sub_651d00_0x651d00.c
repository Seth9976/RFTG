// 函数名称: sub_651d00
// 虚拟地址: 0x651d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_651d00(float arg1 @ eax, int32_t arg2, float arg3 @ ecx)
{
    // 第一条实际指令: if (arg1 != 1)
    if (arg1 != 1)
        sub_651b70(arg1, arg2 + (arg1 << 2), arg3)
}
