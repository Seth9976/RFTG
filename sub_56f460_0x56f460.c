// 函数名称: sub_56f460
// 虚拟地址: 0x56f460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_56f460(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    int32_t ecx = data_26a7764
    LRESULT result = 0
    
    if (ecx s> 0)
        do
            if ((&data_26a6764)[result] == arg2)
                return result
            
            result += 1
        while (result s< ecx)
    
    HWND hDlg = data_3078830
    (&data_26a6764)[ecx] = arg2
    data_26a7764 += 1
    HWND hWnd
    char edx
    hWnd, edx = GetDlgItem(hDlg, 0xab)
    char* ecx_1 = data_26a6760
    
    if (*(ecx_1 + 4) != 0x20)
        sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*ecx_1 == 0)
        sub_520800(hWnd, edx, ecx_1, 0)
        
        if (*ecx_1 == 0)
            sub_509540(ecx_1)
    
    void* ebx_1 = **ecx_1
    SendMessageA(hWnd, 0x19b, 0, zx.d(*(ebx_1 + 4)) << 0x10)
    int32_t i = 0
    
    if (*(ebx_1 + 4) s> 0)
        int32_t ecx_3 = data_26a7764
        
        do
            int32_t eax_2 = 0
            
            if (ecx_3 s> 0)
                do
                    if ((&data_26a6764)[eax_2] == i)
                        uint32_t eax_3 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_3 << 0x10 | eax_3)
                        ecx_3 = data_26a7764
                        break
                    
                    eax_2 += 1
                while (eax_2 s< ecx_3)
            
            i += 1
        while (i s< *(ebx_1 + 4))
    
    return sub_541330()
}
