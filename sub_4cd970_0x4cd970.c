// 函数名称: sub_4cd970
// 虚拟地址: 0x4cd970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4cd970(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x10)
    int32_t result = *(arg1 + 0x10)
    
    if (result == 1 || result == 4 || result == 0x10 || result == 2 || result == 0xe || result == 0xa
            || result == 3)
        return result
    
    sub_4c5870("HaltMsg", "Unable to fixup data type", "DefBin.cpp", 0x147, "DefBinShallowDefTypeFixup")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
