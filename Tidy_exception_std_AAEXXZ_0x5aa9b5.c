// 函数名称: ?_Tidy@exception@std@@AAEXXZ
// 虚拟地址: 0x5aa9b5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcall?_Tidy@exception@std@@AAEXXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) != 0)
    if (*(arg1 + 8) != 0)
        __free_base(*(arg1 + 4))
    
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
}
