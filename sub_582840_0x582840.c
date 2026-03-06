// 函数名称: sub_582840
// 虚拟地址: 0x582840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLEsub_582840(HWND arg1 @ edi)
{
    // 第一条实际指令: HANDLE result = data_26a6554
    HANDLE result = data_26a6554
    
    if (result != 0)
        SendMessageA(*(result + 0x18), 0x184, 0, 0)
        DestroyWindow(*(data_26a6554 + 0x18))
        DestroyWindow(*(data_26a6554 + 0x14))
        void* eax_2 = data_26a6554
        
        if (*(eax_2 + 0xc) != 0)
            DestroyWindow(*(eax_2 + 0xc))
            eax_2 = data_26a6554
        
        if (*(eax_2 + 0x10) != 0)
            DestroyWindow(*(eax_2 + 0x10))
            eax_2 = data_26a6554
        
        if (*(eax_2 + 0x1c) != 0)
            DestroyWindow(*(eax_2 + 0x1c))
            eax_2 = data_26a6554
        
        if (*(eax_2 + 0x20) != 0)
            DestroyWindow(*(eax_2 + 0x20))
        
        result = GetPropA(arg1, "lpInsData")
        
        if (result != 0)
            __free_base(result)
            return RemovePropA(arg1, "lpInsData")
    
    return result
}
