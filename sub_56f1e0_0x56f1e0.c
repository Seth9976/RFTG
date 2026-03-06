// 函数名称: sub_56f1e0
// 虚拟地址: 0x56f1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56f1e0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_2727b6c s> 0)
        int32_t* ebx_1 = &data_26a876c
        
        do
            int32_t* esi_1 = *ebx_1
            
            if (esi_1[1] != 0)
                sub_4c5870("gFab.undoStack[i].def->pParseTree == NULL", &data_83f3d3, 
                    "Editor\FabEditor.cpp", 0x9d, "FabEditorDispose")
                
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
            ebx_1 = &ebx_1[0x402]
        while (i s< data_2727b6c)
    
    HWND hWnd = data_30785e0
    data_2727b68 = 0
    data_2727b6c = 0
    data_26a7764 = 0
    void* result
    int32_t ecx_2
    result, ecx_2 = DragAcceptFiles(hWnd, 0)
    int32_t edx = data_2727bac
    
    if (edx != 0)
        result = sub_510b30(ecx_2, edx)
        ecx_2 = data_be1e84
        data_be1e84 = zx.d(*(result + 0x4cc))
        *(result + 0x4cc) = ecx_2
        data_be1e88 -= 1
        data_2727bac = 0
    
    int32_t edx_2 = data_2727bb4
    
    if (edx_2 != 0)
        result = sub_510b30(ecx_2, edx_2)
        int32_t ecx_3 = data_be1e84
        data_be1e84 = zx.d(*(result + 0x4cc))
        *(result + 0x4cc) = ecx_3
        data_be1e88 -= 1
        data_2727bb4 = 0
    
    return result
}
