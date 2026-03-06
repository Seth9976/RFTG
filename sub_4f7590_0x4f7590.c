// 函数名称: sub_4f7590
// 虚拟地址: 0x4f7590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f7590(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0x1100)
    int32_t ecx = *(arg2 + 0x1100)
    
    if (ecx s> 0)
        __builtin_memcpy(arg1, arg2 + ecx * 0x44 - 0x44, 0x40)
        return 
    
    sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
