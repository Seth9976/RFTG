// 函数名称: sub_5d28d0
// 虚拟地址: 0x5d28d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d28d0(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0xa0)
    void* result = *(arg1 + 0xa0)
    int32_t i = 0
    
    if (result != 0)
        HANDLE hObject = *(result + 8)
        
        if (hObject != 0)
            CloseHandle(hObject)
            *(*(arg1 + 0xa0) + 8) = 0
        
        do
            int32_t* eax_1 = *(arg1 + 0xa0)
            
            if (*(i + eax_1 + 0x1c) != 0xffff)
                waveOutUnprepareHeader(*eax_1, i + eax_1 + 0x10, 0x20)
                *(i + *(arg1 + 0xa0) + 0x1c) = 0xffff
            
            i += 0x20
        while (i s< 0x40)
        
        int32_t var_14_1 = *(*(arg1 + 0xa0) + 0xc)
        sub_5d0af0()
        *(*(arg1 + 0xa0) + 0xc) = 0
        HWAVEIN hwi = *(*(arg1 + 0xa0) + 4)
        
        if (hwi != 0)
            waveInClose(hwi)
            *(*(arg1 + 0xa0) + 4) = 0
        
        int32_t* eax_4 = *(arg1 + 0xa0)
        
        if (*eax_4 != 0)
            waveOutClose(*eax_4)
            **(arg1 + 0xa0) = 0
        
        int32_t __saved_ebx_4 = *(arg1 + 0xa0)
        result = sub_5d0af0()
        *(arg1 + 0xa0) = 0
    
    return result
}
