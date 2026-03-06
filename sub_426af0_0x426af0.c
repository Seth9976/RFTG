// 函数名称: sub_426af0
// 虚拟地址: 0x426af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_426af0(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 0x5c)
    int32_t eax_2 = *(arg1 + 0x5c)
    
    if (eax_2 != 0x1b && eax_2 != 0x1c)
        return 0
    
    return 1
}
