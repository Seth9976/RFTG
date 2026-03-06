// 函数名称: sub_523ab0
// 虚拟地址: 0x523ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_523ab0(void* arg1)
{
    // 第一条实际指令: arg1.b = **(arg1 + 4)
    arg1.b = **(arg1 + 4)
    
    if (arg1.b != 0 && arg1.b != 0x5d)
        return 0
    
    return 1
}
