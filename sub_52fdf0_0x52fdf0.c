// 函数名称: sub_52fdf0
// 虚拟地址: 0x52fdf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_52fdf0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t i = 0
    
    if (data_315b334 s> 0)
        int32_t* edi_1 = &data_30db548
        
        do
            int32_t* esi_1 = *edi_1
            
            if (esi_1[1] != 0)
                sub_4c5870("gUI2Editor.undoStack[i].def->pParseTree == NULL", &data_83f3d3, "UI2.cpp", 
                    0x1a9b, "UI2EditorDispose")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if ((esi_1[2].b & 1) == 0)
                sub_4fed40(*esi_1, esi_1[3])
                *esi_1 = 0
            
            int32_t* eax_2 = esi_1[1]
            
            if (eax_2 != 0)
                sub_500770(eax_2)
                esi_1[1] = 0
            
            ecx = _aligned_free_base(esi_1)
            i += 1
            edi_1 = &edi_1[0x407]
        while (i s< data_315b334)
    
    int32_t edx = data_30d74ec
    int32_t result = 0
    data_315b330 = 0
    data_315b334 = 0
    data_30da51c = 0
    
    if (edx != 0)
        data_30d74e8 = 0
        void* eax_3 = sub_530500(ecx, edx)
        int32_t i_1 = 0
        
        if (*(eax_3 + 0x19d4) s> 0)
            void* ebx = eax_3 + 0x15d0
            
            do
                sub_524b60(ebx)
                i_1 += 1
                ebx += 4
            while (i_1 s< *(eax_3 + 0x19d4))
        
        sub_530620(eax_3)
        result = data_be1ee4
        data_be1ee4 = zx.d(*(eax_3 + 0x19dc))
        *(eax_3 + 0x19dc) = result
        data_be1ee8 -= 1
        data_30d74ec = 0
    
    return result
}
