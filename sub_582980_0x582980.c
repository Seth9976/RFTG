// 函数名称: sub_582980
// 虚拟地址: 0x582980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_582980()
{
    // 第一条实际指令: LRESULT result = data_26a6554
    LRESULT result = data_26a6554
    
    if (*(result + 4) != 0)
        int32_t ecx_2 = *(*(result + 4) + 0x14)
        
        if (ecx_2 != 0x63 && ecx_2 != 3)
            HWND hWnd = GetParent(*(result + 0x14))
            data_31600b0 = hWnd
            data_31600b4 = GetDlgCtrlID(hWnd)
            void* eax_1 = data_26a6554
            data_31600b8 = 0x42a
            LRESULT eax_2 = SendMessageA(*(eax_1 + 0x18), 0x18f, 0, *(eax_1 + 4))
            data_31600bc = 0xffffffff
            
            if (eax_2 != 0xffffffff)
                data_31600bc = eax_2
            
            return SendMessageA(*(data_26a6554 + 8), 0x4e, data_31600b4, &data_31600b0)
    
    return result
}
