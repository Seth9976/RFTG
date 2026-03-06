// 函数名称: sub_4c6c70
// 虚拟地址: 0x4c6c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c6c70(void* arg1)
{
    // 第一条实际指令: __builtin_memset(arg1, 0, 0x14)
    __builtin_memset(arg1, 0, 0x14)
    __builtin_memset(arg1 + 0x18, 0, 0x18)
    *(arg1 + 0x14) = 1
    *(arg1 + 0x30) = 1
    __builtin_memset(arg1 + 0x34, 0, 0x28)
}
