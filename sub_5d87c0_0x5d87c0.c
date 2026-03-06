// 函数名称: sub_5d87c0
// 虚拟地址: 0x5d87c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d87c0(HWND arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: if (arg2 != 0x111)
    if (arg2 != 0x111)
        return 0
    
    EndDialog(arg1, zx.d(arg3))
    return 1
}
