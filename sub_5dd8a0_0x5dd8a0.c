// 函数名称: sub_5dd8a0
// 虚拟地址: 0x5dd8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd8a0(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        HANDLE hObject = *(arg1 + 0x1c)
        
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
            *(arg1 + 0x1c) = 0xffffffff
        
        int32_t var_c_2 = *(arg1 + 0x20)
        sub_5d0af0()
        void* var_10_1 = arg1
        *(arg1 + 0x20) = 0
        sub_5dd850()
    
    return 0
}
