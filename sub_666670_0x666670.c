// 函数名称: sub_666670
// 虚拟地址: 0x666670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_666670(void* arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: if (arg1 != 0 && sub_5a9094(arg2, 1, arg3, *(arg1 + 0x58)) != arg3)
    if (arg1 != 0 && sub_5a9094(arg2, 1, arg3, *(arg1 + 0x58)) != arg3)
        sub_664320(arg1, "Write Error")
        noreturn
}
