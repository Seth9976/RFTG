// 函数名称: sub_5758a0
// 虚拟地址: 0x5758a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5758a0(char arg1)
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (arg1 != 0)
        sub_536c00(ecx)
    int32_t i_1 = data_27bc434
    
    if (i_1 == 0x80)
        int32_t* esi_1 = data_273cc40
        
        if ((esi_1[2].b & 1) == 0)
            sub_4fed40(*esi_1, esi_1[3])
            *esi_1 = 0
        
        int32_t* eax_1 = esi_1[1]
        
        if (eax_1 != 0)
            sub_500770(eax_1)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_5a6c10(0x273bc34, 0x273cc44, 0x7f7f0)
        i_1 = data_27bc434 - 1
        data_27bc438 -= 1
        data_27bc434 = i_1
    
    int32_t i = i_1
    
    if (i s< data_27bc438)
        void* edi_3 = &(&data_273cc40)[i * 0x404]
        
        do
            int32_t* esi_2 = *edi_3
            
            if (esi_2[1] != 0)
                sub_4c5870("gUI.undoStack[i].def->pParseTree == NULL", &data_83f3d3, 
                    "Editor\UIEditor.cpp", 0xf2, "CreateUndoCheckpoint")
                
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
            edi_3 += 0x1010
        while (i s< data_27bc438)
        
        i_1 = data_27bc434
    
    sub_5ab990(i_1 * 0x1010 + 0x273bc34, &data_273ac28, 0x100c)
    void* esi_3 = data_30d7440
    int32_t* ebx = *data_273ac20
    int32_t* eax_7 = sub_4cce80(0x10)
    *eax_7 = 0
    eax_7[1] = 0
    eax_7[2] = 0
    eax_7[3] = 0
    int32_t eax_8 = *(esi_3 + 0xc)
    *ebx
    
    if (eax_8 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_11 = sub_4cce80(eax_8)
    arg1.d = eax_11
    sub_4ff3b0(eax_11, esi_3)
    *eax_7 = arg1.d
    eax_7[3] = esi_3
    *(i_1 * 0x1010 + 0x273cc40) = eax_7
    
    if (eax_7[1] == 0)
        int32_t result = data_27bc434 + 1
        data_27bc434 = result
        data_27bc438 = result
        return result
    
    sub_4c5870("s.def->pParseTree == NULL", &data_83f3d3, "Editor\UIEditor.cpp", 0xd8, "SaveUndoState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
