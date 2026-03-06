// 函数名称: sub_5b7a11
// 虚拟地址: 0x5b7a11
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5b7a11(int128_t* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        sub_5a6c10(arg1 + arg2, arg1, _strlen(arg1) + 1)
}
