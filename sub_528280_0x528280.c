// 函数名称: sub_528280
// 虚拟地址: 0x528280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_528280(char arg1)
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (arg1 != 0)
        sub_536c00(ecx)
    int32_t i_1 = data_315b330
    
    if (i_1 == 0x80)
        int32_t* esi_1 = data_30db548
        
        if ((esi_1[2].b & 1) == 0)
            sub_4fed40(*esi_1, esi_1[3])
            *esi_1 = 0
        
        int32_t* eax_1 = esi_1[1]
        
        if (eax_1 != 0)
            sub_500770(eax_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_5a6c10(0x30da530, 0x30db54c, 0x7fde4)
        i_1 = data_315b330 - 1
        data_315b334 -= 1
        data_315b330 = i_1
    
    int32_t i = i_1
    
    if (i s< data_315b334)
        void* edi_4 = &(&data_30db548)[i * 0x407]
        
        do
            int32_t* esi_2 = *edi_4
            
            if (esi_2[1] != 0)
                sub_4c5870("gUI2Editor.undoStack[i].def->pParseTree == NULL", &data_83f3d3, "UI2.cpp", 
                    0xd22, "UI2CreateUndoCheckpoint")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if ((esi_2[2].b & 1) == 0)
                sub_4fed40(*esi_2, esi_2[3])
                *esi_2 = 0
            
            int32_t* eax_4 = esi_2[1]
            
            if (eax_4 != 0)
                sub_500770(eax_4)
                esi_2[1] = 0
            
            _aligned_free_base(esi_2)
            i += 1
            edi_4 += 0x101c
        while (i s< data_315b334)
        
        i_1 = data_315b330
    
    sub_5281e0(i_1 * 0x101c + 0x30da530)
    int32_t result = data_315b330 + 1
    data_315b330 = result
    data_315b334 = result
    return result
}
