// 函数名称: sub_4dc440
// 虚拟地址: 0x4dc440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dc440(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = data_27e853c
    int32_t result = data_27e853c
    
    if (result != 0)
        return result
    
    void* eax_1 = sub_466320(arg1)
    bool ecx_1 = *(eax_1 + 8) == 0
    eax_1.b = *(eax_1 + 9) == 0
    
    if (eax_1.b == 0)
        uint32_t eax_4 = zx.d(ecx_1)
        int32_t eax_5 = neg.d(eax_4)
        return (sbb.d(eax_5, eax_5, eax_4 != 0) & 0x3e8) + 0x3e8
    
    if (ecx_1 != 0)
        return 0x7d0
    
    sub_4c5870("Halt", &data_83f3d3, "Draw3d.cpp", 0x22c, "GetSortLayerFromMaterial")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
