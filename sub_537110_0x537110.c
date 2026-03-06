// 函数名称: sub_537110
// 虚拟地址: 0x537110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_537110()
{
    // 第一条实际指令: void* eax_15 = data_3079208
    void* eax_15 = data_3079208
    
    if (eax_15 != 0)
        int32_t eax = *(eax_15 + 4)
        
        if (eax == 0x19)
            HWND hWnd = GetDlgItem(data_3078830, 0x7b)
            LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
            
            if (wParam != 0xffffffff)
                LRESULT eax_2 = SendMessageA(hWnd, 0x199, wParam, 0)
                int32_t* eax_3 = sub_536db0()
                
                if (eax_3 == 0)
                    sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0x238, 
                        "EditorGetSelectedTrack")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (eax_2 s< 0 || eax_2 s>= data_8c35fc)
                    sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                        &data_83f3d3, "AttribMap.cpp", 0x8b, "AttribTagGetField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_2 = data_315f7ec
                
                if (*(*(data_8c35f8 + (eax_2 << 2)) + 0xc) == ecx_2)
                    return sub_531120(eax_3, eax_2, ecx_2)
        else if (eax != 0x1e && eax != 0x20 && eax != 0x12)
            if (eax != 0x1b)
                sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x25a, 
                    "EditorGetSelectedTrack")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            LRESULT eax_9 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            
            if (eax_9 != 0xffffffff)
                int32_t* eax_10 = sub_536d90()
                
                if (eax_9 s>= 0 && eax_9 s< eax_10[1])
                    return *eax_10 + eax_9 * 0x14
                
                sub_4c5870("currentSelection >= 0 && currentSelection < graphDef->mTrackCount", 
                    &data_83f3d3, "Windows\EditorWindow.cpp", 0x255, "EditorGetSelectedTrack")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    return 0
}
