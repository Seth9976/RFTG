// 函数名称: sub_525a00
// 虚拟地址: 0x525a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_525a00(void* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    *(arg1 + 0x1450) = 0
    
    if (0 s>= *(arg1 + 0x19d0))
        return 
    
    void* edi_1 = arg1 + 0x15d0
    
    do
        if (i s< 0)
            sub_4c5870("i >= 0", &data_83f3d3, "UI2.cpp", 0x829, "UI2GetChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax
        int32_t ecx
        eax, ecx = sub_525a00(sub_530500(ecx, *edi_1))
        i += 1
        edi_1 += 4
    while (i s< *(arg1 + 0x19d0))
}
