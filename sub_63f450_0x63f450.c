// 函数名称: sub_63f450
// 虚拟地址: 0x63f450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_63f450(void* arg1)
{
    // 第一条实际指令: uint32_t eax_7 = zx.d(*(arg1 + 9))
    uint32_t eax_7 = zx.d(*(arg1 + 9))
    
    if (eax_7 != 1)
        if (eax_7 == 2)
            return sub_63eb60
        
        if (eax_7 == 4)
            return sub_63efd0
    else if (*(arg1 + 8) u>= 8)
        return sub_63e8f0
    
    return 0
}
