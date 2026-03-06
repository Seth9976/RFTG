// 函数名称: sub_5cffa0
// 虚拟地址: 0x5cffa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5cffa0(int16_t arg1, int32_t arg2, char arg3, int32_t* arg4)
{
    // 第一条实际指令: if (*(arg4[3] + (zx.d(arg3) << 1)) == arg1)
    if (*(arg4[3] + (zx.d(arg3) << 1)) == arg1)
        return 0
    
    return sub_5c6c50(arg4, arg3, arg1)
}
