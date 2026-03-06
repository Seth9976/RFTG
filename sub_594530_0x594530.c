// 函数名称: sub_594530
// 虚拟地址: 0x594530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_594530(void* arg1, int128_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* eax_1 = sub_662780(arg1)
    int32_t* eax_1 = sub_662780(arg1)
    void* eax_2 = eax_1[1]
    
    if (eax_2 + arg3 s<= eax_1[2])
        int128_t* result = sub_5ab990(*eax_1 + eax_2, arg2, arg3)
        eax_1[1] += arg3
        return result
    
    sub_4c5870("(int)readData->currentOffset + (int)length <= readData->dataLen", &data_83f3d3, 
        "PngImport.cpp", 0x11a, "png_write_data_callback")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
