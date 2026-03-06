// 函数名称: sub_5281e0
// 虚拟地址: 0x5281e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5281e0(int128_t* arg1)
{
    // 第一条实际指令: int128_t* ebx = arg1
    int128_t* ebx = arg1
    int128_t* edx = sub_5ab990(ebx, &data_30d9518, 0x1018)
    int32_t var_14 = *data_30d74e8
    int32_t* eax_2 = sub_4ff520(data_30d74d4, edx)
    *(ebx + 0x1018) = eax_2
    int32_t* esi = *eax_2
    int32_t i = 0
    
    if (esi[1] s> 0)
        int32_t ebx_1 = 0
        
        do
            sub_528070(*esi + ebx_1)
            i += 1
            ebx_1 += 0xc
        while (i s< esi[1])
        
        ebx = arg1
    
    void* result = *(ebx + 0x1018)
    
    if (*(result + 4) == 0)
        return result
    
    sub_4c5870("s.def->pParseTree == NULL", &data_83f3d3, "UI2.cpp", 0xd0e, "UI2SaveUndoState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
