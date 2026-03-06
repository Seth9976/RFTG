// 函数名称: sub_5756a0
// 虚拟地址: 0x5756a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5756a0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_27bc438 s> 0)
        int32_t* ebx_1 = &data_273cc40
        
        do
            int32_t* esi_1 = *ebx_1
            
            if (esi_1[1] != 0)
                sub_4c5870("gUI.undoStack[i].def->pParseTree == NULL", &data_83f3d3, 
                    "Editor\UIEditor.cpp", 0x5d, "UIEditorDispose")
                
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
            
            _aligned_free_base(esi_1)
            i += 1
            ebx_1 = &ebx_1[0x404]
        while (i s< data_27bc438)
    
    int32_t edx = data_273ac24
    data_27bc434 = 0
    data_27bc438 = 0
    data_273bc2c = 0
    sub_4f7100(edx)
    HWND hWnd = data_30785e0
    data_273ac24 = 0
    return DragAcceptFiles(hWnd, 0)
}
