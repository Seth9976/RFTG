// 函数名称: sub_55d300
// 虚拟地址: 0x55d300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_55d300(void* arg1)
{
    // 第一条实际指令: void* ecx = data_27e7fd0
    void* ecx = data_27e7fd0
    
    if (*(ecx + 0x22) == 0)
        int32_t eax_1 = 0xcf0000
        
        if (*(ecx + 0x34) != 0)
            eax_1 = 0xcb0000
        
        SetWindowLongA(*(arg1 + 0x70), 0xfffffff0, eax_1 | 0x10000000)
    else
        SetWindowLongA(*(arg1 + 0x70), 0xfffffff0, 0x90080000)
        GetWindowRect(*(arg1 + 0x70), data_3079200 + 0x74)
    
    BOOL result = sub_55c7a0()
    
    if (*(data_27e7fd0 + 0x22) == 0)
        void* ecx_4 = data_3079200
        result = *(ecx_4 + 0x7c)
        int32_t X = *(ecx_4 + 0x74)
        
        if (result != X)
            int32_t Y = *(ecx_4 + 0x78)
            return SetWindowPos(*(arg1 + 0x70), 0xfffffffe, X, Y, result - X, *(ecx_4 + 0x80) - Y, 
                SWP_SHOWWINDOW)
    
    return result
}
