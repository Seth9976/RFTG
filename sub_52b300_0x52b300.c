// 函数名称: sub_52b300
// 虚拟地址: 0x52b300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_52b300()
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t eax_1 = *(sub_52ae50(esi) + 4)
    
    if (eax_1 == 0x65)
        return 0x88ce84
    
    if (eax_1 == 0x6a)
        return 0x840be0
    
    if (eax_1 == 0x6b)
        return 0x83fef0
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1215, "FieldGetSymbols")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
