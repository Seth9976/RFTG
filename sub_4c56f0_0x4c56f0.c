// 函数名称: sub_4c56f0
// 虚拟地址: 0x4c56f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c56f0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = data_27e7aac
    int32_t* esi = data_27e7aac
    
    if (esi == 0)
        sub_4ffc50(&data_27e7ab0)
        esi = sub_5a898b(&data_27e7ab0, U"a")
        
        if (esi == 0)
            return OutputDebugStringA("Failed to open log file\n")
    
    void* eax_3 = arg1
    data_27e7aac = esi
    void* edi = eax_3 + 1
    char i
    
    do
        i = *eax_3
        eax_3 += 1
    while (i != 0)
    
    if (sub_5a9094(arg1, eax_3 - edi, 1, esi) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    return sub_5a9298(esi)
}
