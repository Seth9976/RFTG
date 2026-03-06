// 函数名称: sub_5dacb0
// 虚拟地址: 0x5dacb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5dacb0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    HANDLE hObject = *arg1
    
    if (hObject != 0)
        CloseHandle(hObject)
        *arg1 = 0
    
    int32_t* var_c_2 = arg1
    sub_5d0af0()
}
