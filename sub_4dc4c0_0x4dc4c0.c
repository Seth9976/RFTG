// 函数名称: sub_4dc4c0
// 虚拟地址: 0x4dc4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dc4c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = data_27e8494
    int32_t result = data_27e8494
    
    if (result != 0 && result != 1)
        return result
    
    void* eax_1 = sub_466320(arg1)
    bool ecx_1 = *(eax_1 + 8) == 0
    eax_1.b = *(eax_1 + 9) == 0
    
    if (eax_1.b == 0)
        int32_t eax_4
        eax_4.b = ecx_1 != 0
        return eax_4 + 2
    
    if (ecx_1 != 0)
        return 4
    
    sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0x248, "GetSortTypeFromMaterial")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
