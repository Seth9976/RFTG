// 函数名称: sub_603120
// 虚拟地址: 0x603120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* constsub_603120(void* const arg1, char* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* const eax = arg1
    void* ecx_1 = *(eax + 0x274)
    int32_t edi = 0
    arg1 = nullptr
    
    if (OpenClipboard(sub_603100(eax)) == 0)
        sub_5dc5a0("Couldn't open clipboard")
        arg1 = 0xffffffff
        return 0xffffffff
    
    void* var_18 = sub_5cd1b0(arg2) + 1
    char* var_1c = arg2
    int16_t* eax_5 = sub_5dd160("UTF-16LE", "UTF-8")
    
    if (eax_5 == 0)
        return 0xffffffff
    
    int16_t i = *eax_5
    int32_t edx = 0
    
    if (i != 0)
        int16_t* ecx_2 = eax_5
        
        do
            if (i == 0xa && (edx == 0 || ecx_2[-1] != 0xd))
                edi += 1
            
            edx += 1
            i = eax_5[edx]
            ecx_2 = &eax_5[edx]
            edi += 1
        while (i != 0)
    
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, edi * 2 + 2)
    
    if (hMem != 0)
        int16_t* eax_7 = GlobalLock(hMem)
        
        if (eax_7 != 0)
            int32_t edx_2 = 0
            
            if (*eax_5 != 0)
                void* ecx_3 = eax_5
                
                do
                    if (*ecx_3 == 0xa && (edx_2 == 0 || *(ecx_3 - 2) != 0xd))
                        *eax_7 = 0xd
                        eax_7 = &eax_7[1]
                    
                    ecx_3.w = *ecx_3
                    *eax_7 = ecx_3.w
                    edx_2 += 1
                    ecx_3 = &eax_5[edx_2]
                    eax_7 = &eax_7[1]
                while (*ecx_3 != 0)
            
            *eax_7 = 0
            GlobalUnlock(hMem)
        
        EmptyClipboard()
        
        if (SetClipboardData(0xd, hMem) == 0)
            sub_5dc5a0("Couldn't set clipboard data")
            arg1 = 0xffffffff
        
        *(ecx_1 + 4) = GetClipboardSequenceNumber()
    
    int16_t* var_18_5 = eax_5
    sub_5d0af0()
    CloseClipboard()
    return arg1
}
