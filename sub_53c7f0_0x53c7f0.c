// 函数名称: sub_53c7f0
// 虚拟地址: 0x53c7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53c7f0()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_3078830, 0x7b)
    HWND hWnd = GetDlgItem(data_3078830, 0x7b)
    LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
    
    if (wParam == 0xffffffff)
        return wParam
    
    int32_t* eax = sub_536db0()
    LRESULT eax_1
    int32_t* edx
    eax_1, edx = SendMessageA(hWnd, 0x199, wParam, 0)
    int32_t* var_10 = eax
    sub_530d80(eax_1, edx)
    int32_t edi_1 = *eax
    int32_t eax_2 = 0xffffffff
    
    if (wParam == edi_1 && edi_1 s> 0)
        eax_2 = wParam - 1
    
    char* ecx = data_3079208
    
    if (ecx != 0)
        ecx = *(ecx + 4)
        
        if (ecx == 0x19)
            int32_t var_10_1 = eax_2
            char* ecx_1 = sub_538a80(0xffffffff)
            data_3078834 = 0
            return sub_536c00(ecx_1) __tailcall
        
        if (ecx == 0x1b)
            ecx = sub_539d30(0xffffffff)
    
    data_3078834 = 0
    return sub_536c00(ecx) __tailcall
}
